
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {int transfer_dma; int transfer_buffer_length; } ;
struct TYPE_5__ {int nfields; int num_bufs; struct urb** transfer_buffer; struct urb** urb; } ;
struct TYPE_4__ {int * transfer_buffer; } ;
struct TYPE_6__ {TYPE_2__ bulk_ctl; TYPE_1__ isoc_ctl; } ;
struct cx231xx {scalar_t__ mode_tv; TYPE_3__ video_mode; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx231xx*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct urb**) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (struct urb*) ;

void FUNC_8(struct cx231xx *VAR_2)
{
 struct urb *VAR_3;
 int VAR_4;

 FUNC_1("cx231xx: called cx231xx_uninit_bulk\n");

 VAR_2->video_mode.bulk_ctl.nfields = -1;
 for (VAR_4 = 0; VAR_4 < VAR_2->video_mode.bulk_ctl.num_bufs; VAR_4++) {
  VAR_3 = VAR_2->video_mode.bulk_ctl.urb[VAR_4];
  if (VAR_3) {
   if (!FUNC_2())
    FUNC_6(VAR_3);
   else
    FUNC_7(VAR_3);

   if (VAR_2->video_mode.bulk_ctl.transfer_buffer[VAR_4]) {
    FUNC_4(VAR_2->udev,
      VAR_3->transfer_buffer_length,
      VAR_2->video_mode.isoc_ctl.
      transfer_buffer[VAR_4],
      VAR_3->transfer_dma);
   }
   FUNC_5(VAR_3);
   VAR_2->video_mode.bulk_ctl.urb[VAR_4] = ((void*)0);
  }
  VAR_2->video_mode.bulk_ctl.transfer_buffer[VAR_4] = ((void*)0);
 }

 FUNC_3(VAR_2->video_mode.bulk_ctl.urb);
 FUNC_3(VAR_2->video_mode.bulk_ctl.transfer_buffer);

 VAR_2->video_mode.bulk_ctl.urb = ((void*)0);
 VAR_2->video_mode.bulk_ctl.transfer_buffer = ((void*)0);
 VAR_2->video_mode.bulk_ctl.num_bufs = 0;

 if (VAR_2->mode_tv == 0)
  FUNC_0(VAR_2, 0, VAR_0);
 else
  FUNC_0(VAR_2, 0, VAR_1);


}
