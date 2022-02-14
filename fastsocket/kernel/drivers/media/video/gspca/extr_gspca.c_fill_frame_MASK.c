
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct urb {int number_of_packets; TYPE_2__* iso_frame_desc; scalar_t__ transfer_buffer; int status; } ;
struct gspca_dev {int empty_packet; int last_packet_type; TYPE_1__* sd_desc; scalar_t__ frozen; } ;
typedef int (* cam_pkt_op ) (struct gspca_dev*,int *,int) ;
struct TYPE_4__ {int actual_length; int status; int offset; } ;
struct TYPE_3__ {int (* pkt_scan ) (struct gspca_dev*,int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_5,
   struct urb *VAR_6)
{
 u8 *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 cam_pkt_op VAR_11;

 if (VAR_6->status != 0) {
  if (VAR_6->status == -VAR_3)
   return;




  FUNC_0(VAR_1|VAR_2, "urb status: %d", VAR_6->status);
  VAR_6->status = 0;
  goto resubmit;
 }
 VAR_11 = VAR_5->sd_desc->pkt_scan;
 for (VAR_8 = 0; VAR_8 < VAR_6->number_of_packets; VAR_8++) {
  VAR_9 = VAR_6->iso_frame_desc[VAR_8].actual_length;


  VAR_10 = VAR_6->iso_frame_desc[VAR_8].status;
  if (VAR_10) {
   FUNC_1("ISOC data error: [%d] len=%d, status=%d",
    VAR_8, VAR_9, VAR_10);
   VAR_5->last_packet_type = VAR_0;
   continue;
  }
  if (VAR_9 == 0) {
   if (VAR_5->empty_packet == 0)
    VAR_5->empty_packet = 1;
   continue;
  }


  FUNC_0(VAR_2, "packet [%d] o:%d l:%d",
   VAR_8, VAR_6->iso_frame_desc[VAR_8].offset, VAR_9);
  VAR_7 = (u8 *) VAR_6->transfer_buffer
     + VAR_6->iso_frame_desc[VAR_8].offset;
  VAR_11(VAR_5, VAR_7, VAR_9);
 }

resubmit:

 VAR_10 = FUNC_2(VAR_6, VAR_4);
 if (VAR_10 < 0)
  FUNC_1("usb_submit_urb() ret %d", VAR_10);
}
