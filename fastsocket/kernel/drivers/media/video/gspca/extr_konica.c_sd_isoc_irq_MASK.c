
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct urb {int status; int transfer_buffer_length; scalar_t__ start_frame; int number_of_packets; TYPE_1__* iso_frame_desc; scalar_t__ transfer_buffer; scalar_t__ context; } ;
struct sd {scalar_t__ snapshot_pressed; struct urb* last_data_urb; } ;
struct gspca_dev {int input_dev; void* last_packet_type; scalar_t__ frozen; int streaming; } ;
struct TYPE_2__ {int actual_length; int offset; scalar_t__ status; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct gspca_dev*,int ,scalar_t__*,int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_9)
{
 struct gspca_dev *VAR_10 = (struct gspca_dev *) VAR_9->context;
 struct sd *VAR_11 = (struct sd *) VAR_10;
 struct urb *VAR_12, *VAR_13;
 u8 *VAR_14;
 int VAR_15, VAR_16;

 FUNC_0(VAR_2, "sd isoc irq");
 if (!VAR_10->streaming)
  return;

 if (VAR_9->status != 0) {
  if (VAR_9->status == -VAR_3)
   return;




  FUNC_0(VAR_1, "urb status: %d", VAR_9->status);
  VAR_16 = FUNC_5(VAR_9, VAR_5);
  if (VAR_16 < 0)
   FUNC_1("resubmit urb error %d", VAR_16);
  return;
 }


 if (VAR_9->transfer_buffer_length > 32) {
  VAR_11->last_data_urb = VAR_9;
  return;
 }

 VAR_13 = VAR_9;
 VAR_12 = VAR_11->last_data_urb;
 VAR_11->last_data_urb = ((void*)0);

 if (!VAR_12 || VAR_12->start_frame != VAR_13->start_frame) {
  FUNC_0(VAR_1|VAR_2, "lost sync on frames");
  goto resubmit;
 }

 if (VAR_12->number_of_packets != VAR_13->number_of_packets) {
  FUNC_0(VAR_1|VAR_2,
         "no packets does not match, data: %d, status: %d",
         VAR_12->number_of_packets,
         VAR_13->number_of_packets);
  goto resubmit;
 }

 for (VAR_15 = 0; VAR_15 < VAR_13->number_of_packets; VAR_15++) {
  if (VAR_12->iso_frame_desc[VAR_15].status ||
      VAR_13->iso_frame_desc[VAR_15].status) {
   FUNC_0(VAR_1|VAR_2,
          "pkt %d data-status %d, status-status %d", VAR_15,
          VAR_12->iso_frame_desc[VAR_15].status,
          VAR_13->iso_frame_desc[VAR_15].status);
   VAR_10->last_packet_type = VAR_0;
   continue;
  }

  if (VAR_13->iso_frame_desc[VAR_15].actual_length != 1) {
   FUNC_0(VAR_1|VAR_2,
          "bad status packet length %d",
          VAR_13->iso_frame_desc[VAR_15].actual_length);
   VAR_10->last_packet_type = VAR_0;
   continue;
  }

  VAR_16 = *((u8 *)VAR_13->transfer_buffer
    + VAR_13->iso_frame_desc[VAR_15].offset);

  VAR_14 = (u8 *)VAR_12->transfer_buffer
    + VAR_12->iso_frame_desc[VAR_15].offset;
  if (VAR_16 & 0x80) {
   FUNC_2(VAR_10, VAR_8, ((void*)0), 0);
   FUNC_2(VAR_10, VAR_4, ((void*)0), 0);
  } else {
   if (VAR_16 & 0x01)
    continue;
  }
  FUNC_2(VAR_10, VAR_6, VAR_14,
    VAR_12->iso_frame_desc[VAR_15].actual_length);
 }

resubmit:
 if (VAR_12) {
  VAR_16 = FUNC_5(VAR_12, VAR_5);
  if (VAR_16 < 0)
   FUNC_0(VAR_1|VAR_2,
          "usb_submit_urb(data_urb) ret %d", VAR_16);
 }
 VAR_16 = FUNC_5(VAR_13, VAR_5);
 if (VAR_16 < 0)
  FUNC_1("usb_submit_urb(status_urb) ret %d", VAR_16);
}
