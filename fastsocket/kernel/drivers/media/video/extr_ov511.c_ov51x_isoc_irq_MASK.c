
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ov511 {scalar_t__ curframe; scalar_t__ bclass; int bridge; scalar_t__ dev; int wq; int streaming; int user; } ;
struct urb {int number_of_packets; unsigned char* transfer_buffer; scalar_t__ dev; TYPE_1__* iso_frame_desc; int status; struct ov511_sbuf* context; } ;
struct ov511_sbuf {int n; struct usb_ov511* ov; } ;
struct TYPE_2__ {int actual_length; int status; int offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (struct usb_ov511*,unsigned char*,int) ;
 int FUNC_3 (struct usb_ov511*,unsigned char*,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (struct urb*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct urb *VAR_7)
{
 int VAR_8;
 struct usb_ov511 *VAR_9;
 struct ov511_sbuf *VAR_10;

 if (!VAR_7->context) {
  FUNC_0(4, "no context");
  return;
 }

 VAR_10 = VAR_7->context;
 VAR_9 = VAR_10->ov;

 if (!VAR_9 || !VAR_9->dev || !VAR_9->user) {
  FUNC_0(4, "no device, or not open");
  return;
 }

 if (!VAR_9->streaming) {
  FUNC_0(4, "hmmm... not streaming, but got interrupt");
  return;
 }

 if (VAR_7->status == -VAR_4 || VAR_7->status == -VAR_2) {
  FUNC_0(4, "URB unlinked");
  return;
 }

 if (VAR_7->status != -VAR_3 && VAR_7->status != 0) {
  FUNC_1("ERROR: urb->status=%d: %s", VAR_7->status,
      FUNC_4(VAR_6, VAR_7->status));
 }


 FUNC_0(5, "sbuf[%d]: Moving %d packets", VAR_10->n,
        VAR_7->number_of_packets);
 for (VAR_8 = 0; VAR_8 < VAR_7->number_of_packets; VAR_8++) {

  if (VAR_9->curframe >= 0) {
   int VAR_11 = VAR_7->iso_frame_desc[VAR_8].actual_length;
   int VAR_12 = VAR_7->iso_frame_desc[VAR_8].status;
   unsigned char *VAR_13;

   VAR_7->iso_frame_desc[VAR_8].actual_length = 0;
   VAR_7->iso_frame_desc[VAR_8].status = 0;

   VAR_13 = VAR_7->transfer_buffer
    + VAR_7->iso_frame_desc[VAR_8].offset;

   if (!VAR_11) {
    FUNC_0(4, "Zero-length packet");
    continue;
   }

   if (VAR_12)
    FUNC_0(2, "data error: [%d] len=%d, status=%d",
           VAR_8, VAR_11, VAR_12);

   if (VAR_9->bclass == VAR_0)
    FUNC_2(VAR_9, VAR_13, VAR_11);
   else if (VAR_9->bclass == VAR_1)
    FUNC_3(VAR_9, VAR_13, VAR_11);
   else
    FUNC_1("Unknown bridge device (%d)", VAR_9->bridge);

  } else if (FUNC_6(&VAR_9->wq)) {
   FUNC_7(&VAR_9->wq);
  }
 }


 VAR_7->dev = VAR_9->dev;
 if ((VAR_8 = FUNC_5(VAR_7, VAR_5)) != 0)
  FUNC_1("usb_submit_urb() ret %d", VAR_8);

 return;
}
