
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int number_of_packets; scalar_t__ transfer_buffer; TYPE_1__* iso_frame_desc; int status; int actual_length; struct hci_dev* context; } ;
struct TYPE_4__ {unsigned int byte_rx; int err_rx; } ;
struct hci_dev {int name; TYPE_2__ stat; int flags; struct btusb_data* driver_data; } ;
struct btusb_data {int isoc_anchor; int flags; } ;
struct TYPE_3__ {unsigned int offset; unsigned int actual_length; scalar_t__ status; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,struct urb*,int ,int ) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ,scalar_t__,unsigned int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct urb*,int *) ;
 int FUNC_5 (struct urb*,int ) ;
 int FUNC_6 (struct urb*) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_4)
{
 struct hci_dev *VAR_5 = VAR_4->context;
 struct btusb_data *VAR_6 = VAR_5->driver_data;
 int VAR_7, VAR_8;

 FUNC_0("%s urb %p status %d count %d", VAR_5->name,
     VAR_4, VAR_4->status, VAR_4->actual_length);

 if (!FUNC_3(VAR_2, &VAR_5->flags))
  return;

 if (VAR_4->status == 0) {
  for (VAR_7 = 0; VAR_7 < VAR_4->number_of_packets; VAR_7++) {
   unsigned int VAR_9 = VAR_4->iso_frame_desc[VAR_7].offset;
   unsigned int VAR_10 = VAR_4->iso_frame_desc[VAR_7].actual_length;

   if (VAR_4->iso_frame_desc[VAR_7].status)
    continue;

   VAR_5->stat.byte_rx += VAR_10;

   if (FUNC_2(VAR_5, VAR_3,
      VAR_4->transfer_buffer + VAR_9,
        VAR_10) < 0) {
    FUNC_1("%s corrupted SCO packet", VAR_5->name);
    VAR_5->stat.err_rx++;
   }
  }
 }

 if (!FUNC_3(VAR_0, &VAR_6->flags))
  return;

 FUNC_4(VAR_4, &VAR_6->isoc_anchor);

 VAR_8 = FUNC_5(VAR_4, VAR_1);
 if (VAR_8 < 0) {
  FUNC_1("%s urb %p failed to resubmit (%d)",
      VAR_5->name, VAR_4, -VAR_8);
  FUNC_6(VAR_4);
 }
}
