
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvd {int dev; } ;
struct urb {int transfer_buffer_length; scalar_t__ status; int dev; TYPE_1__* iso_frame_desc; } ;
struct TYPE_2__ {scalar_t__ status; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_3(struct uvd *VAR_2, struct urb *VAR_3)
{
 int VAR_4, VAR_5;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->iso_frame_desc[VAR_4].status = 0;
 }
 VAR_3->dev = VAR_2->dev;
 VAR_3->status = 0;
 VAR_5 = FUNC_2(VAR_3, VAR_1);
 FUNC_0(3, "submitting urb of length %d", VAR_3->transfer_buffer_length);
 if(VAR_5)
  FUNC_1("usb_submit_urb error (%d)", VAR_5);

}
