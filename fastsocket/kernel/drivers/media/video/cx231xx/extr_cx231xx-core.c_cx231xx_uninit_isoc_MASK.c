
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int transfer_dma; int transfer_buffer_length; } ;
struct cx231xx_dmaqueue {struct urb** p_left_data; } ;
struct TYPE_3__ {int nfields; int num_bufs; struct urb** transfer_buffer; struct urb** urb; } ;
struct TYPE_4__ {TYPE_1__ isoc_ctl; struct cx231xx_dmaqueue vidq; } ;
struct cx231xx {scalar_t__ mode_tv; TYPE_2__ video_mode; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx231xx*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct urb**) ;
 int FUNC_4 (int ,int ,struct urb*,int ) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (struct urb*) ;

void FUNC_8(struct cx231xx *VAR_2)
{
 struct cx231xx_dmaqueue *VAR_3 = &VAR_2->video_mode.vidq;
 struct urb *VAR_4;
 int VAR_5;

 FUNC_1("cx231xx: called cx231xx_uninit_isoc\n");

 VAR_2->video_mode.isoc_ctl.nfields = -1;
 for (VAR_5 = 0; VAR_5 < VAR_2->video_mode.isoc_ctl.num_bufs; VAR_5++) {
  VAR_4 = VAR_2->video_mode.isoc_ctl.urb[VAR_5];
  if (VAR_4) {
   if (!FUNC_2())
    FUNC_6(VAR_4);
   else
    FUNC_7(VAR_4);

   if (VAR_2->video_mode.isoc_ctl.transfer_buffer[VAR_5]) {
    FUNC_4(VAR_2->udev,
        VAR_4->transfer_buffer_length,
        VAR_2->video_mode.isoc_ctl.
        transfer_buffer[VAR_5],
        VAR_4->transfer_dma);
   }
   FUNC_5(VAR_4);
   VAR_2->video_mode.isoc_ctl.urb[VAR_5] = ((void*)0);
  }
  VAR_2->video_mode.isoc_ctl.transfer_buffer[VAR_5] = ((void*)0);
 }

 FUNC_3(VAR_2->video_mode.isoc_ctl.urb);
 FUNC_3(VAR_2->video_mode.isoc_ctl.transfer_buffer);
 FUNC_3(VAR_3->p_left_data);

 VAR_2->video_mode.isoc_ctl.urb = ((void*)0);
 VAR_2->video_mode.isoc_ctl.transfer_buffer = ((void*)0);
 VAR_2->video_mode.isoc_ctl.num_bufs = 0;
 VAR_3->p_left_data = ((void*)0);

 if (VAR_2->mode_tv == 0)
  FUNC_0(VAR_2, 0, VAR_0);
 else
  FUNC_0(VAR_2, 0, VAR_1);


}
