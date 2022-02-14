
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct urb {int status; int number_of_packets; TYPE_1__* iso_frame_desc; scalar_t__ transfer_buffer; scalar_t__ context; } ;
struct gspca_dev {void* last_packet_type; struct urb** urb; scalar_t__ frozen; int streaming; } ;
struct TYPE_2__ {scalar_t__ actual_length; int status; int offset; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (struct gspca_dev*,int ,int*,scalar_t__) ;
 int FUNC_3 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_9)
{
 struct gspca_dev *VAR_10 = (struct gspca_dev *) VAR_9->context;
 struct urb *VAR_11;
 u8 *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(VAR_2, "sd isoc irq");
 if (!VAR_10->streaming)
  return;
 if (VAR_9->status != 0) {
  if (VAR_9->status == -VAR_3)
   return;




  FUNC_1("urb status: %d", VAR_9->status);
  return;
 }


 if (VAR_9 == VAR_10->urb[0] || VAR_9 == VAR_10->urb[2])
  return;


 if (VAR_9 == VAR_10->urb[1])
  VAR_11 = VAR_10->urb[0];
 else
  VAR_11 = VAR_10->urb[2];
 for (VAR_13 = 0; VAR_13 < VAR_9->number_of_packets; VAR_13++) {


  if (VAR_11->iso_frame_desc[VAR_13].actual_length != VAR_8
      || VAR_9->iso_frame_desc[VAR_13].actual_length != VAR_8) {
   FUNC_0(VAR_1, "ISOC bad lengths %d / %d",
    VAR_11->iso_frame_desc[VAR_13].actual_length,
    VAR_9->iso_frame_desc[VAR_13].actual_length);
   VAR_10->last_packet_type = VAR_0;
   continue;
  }
  VAR_14 = VAR_11->iso_frame_desc[VAR_13].status;
  if (VAR_14 == 0)
   VAR_14 = VAR_9->iso_frame_desc[VAR_13].status;
  if (VAR_14) {
   FUNC_1("ISOC data error: [%d] status=%d",
    VAR_13, VAR_14);
   VAR_10->last_packet_type = VAR_0;
   continue;
  }
  VAR_12 = (u8 *) VAR_11->transfer_buffer
     + VAR_11->iso_frame_desc[VAR_13].offset;
  if (VAR_12[0] == 0x80 && (VAR_12[1] & 0xfe) == 0xba) {


   FUNC_2(VAR_10, VAR_7,
     ((void*)0), 0);
   FUNC_2(VAR_10, VAR_4,
     VAR_12 + 4, VAR_8 - 4);
  } else if (VAR_12[0] == 0x04 && (VAR_12[1] & 0xfe) == 0xba) {
   FUNC_2(VAR_10, VAR_6,
     VAR_12 + 4, VAR_8 - 4);
  } else {
   VAR_10->last_packet_type = VAR_0;
   continue;
  }
  VAR_12 = (u8 *) VAR_9->transfer_buffer
     + VAR_9->iso_frame_desc[VAR_13].offset;
   FUNC_2(VAR_10, VAR_6,
     VAR_12, VAR_8);
 }


 VAR_14 = FUNC_3(VAR_11, VAR_5);
 if (VAR_14 < 0)
  FUNC_1("usb_submit_urb(0) ret %d", VAR_14);
 VAR_14 = FUNC_3(VAR_9, VAR_5);
 if (VAR_14 < 0)
  FUNC_1("usb_submit_urb() ret %d", VAR_14);
}
