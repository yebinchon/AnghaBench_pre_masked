
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ src_h; scalar_t__ src_w; } ;
struct TYPE_3__ {scalar_t__ src_h; scalar_t__ src_w; } ;
struct yuv_playback_info {int reg_2898; int reg_2834; int reg_2838; int reg_283c; int reg_2840; int reg_2844; int reg_2848; int reg_2854; int reg_285c; int reg_2864; int reg_2870; int reg_2874; int reg_2890; int reg_289c; int reg_2918; int reg_291c; int reg_2920; int reg_2924; int reg_2928; int reg_292c; int reg_2930; int reg_2934; int reg_2938; int reg_293c; int reg_2940; int reg_2944; int reg_2948; int reg_294c; int reg_2950; int reg_2954; int reg_2958; int reg_295c; int reg_2960; int reg_2964; int reg_2968; int reg_296c; int reg_2970; TYPE_2__ old_frame_info_args; TYPE_1__ old_frame_info; int blanking_dmaptr; int * blanking_ptr; int next_fill_frame; int next_dma_frame; scalar_t__ running; } ;
struct ivtv {int i_flags; int pdev; int vsync_waitq; struct yuv_playback_info yuv_info; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ivtv*,int,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (int,int) ;

void FUNC_8(struct ivtv *VAR_2)
{
 struct yuv_playback_info *VAR_3 = &VAR_2->yuv_info;
 int VAR_4, VAR_5, VAR_6;

 FUNC_0("ivtv_yuv_close\n");
 FUNC_3(&VAR_2->vsync_waitq);

 VAR_3->running = 0;
 FUNC_1(&VAR_3->next_dma_frame, -1);
 FUNC_1(&VAR_3->next_fill_frame, 0);






 FUNC_7(VAR_3->reg_2898 | 0x01000000, 0x2898);

 FUNC_7(VAR_3->reg_2834, 0x02834);
 FUNC_7(VAR_3->reg_2838, 0x02838);
 FUNC_7(VAR_3->reg_283c, 0x0283c);
 FUNC_7(VAR_3->reg_2840, 0x02840);
 FUNC_7(VAR_3->reg_2844, 0x02844);
 FUNC_7(VAR_3->reg_2848, 0x02848);
 FUNC_7(VAR_3->reg_2854, 0x02854);
 FUNC_7(VAR_3->reg_285c, 0x0285c);
 FUNC_7(VAR_3->reg_2864, 0x02864);
 FUNC_7(VAR_3->reg_2870, 0x02870);
 FUNC_7(VAR_3->reg_2874, 0x02874);
 FUNC_7(VAR_3->reg_2890, 0x02890);
 FUNC_7(VAR_3->reg_289c, 0x0289c);

 FUNC_7(VAR_3->reg_2918, 0x02918);
 FUNC_7(VAR_3->reg_291c, 0x0291c);
 FUNC_7(VAR_3->reg_2920, 0x02920);
 FUNC_7(VAR_3->reg_2924, 0x02924);
 FUNC_7(VAR_3->reg_2928, 0x02928);
 FUNC_7(VAR_3->reg_292c, 0x0292c);
 FUNC_7(VAR_3->reg_2930, 0x02930);
 FUNC_7(VAR_3->reg_2934, 0x02934);
 FUNC_7(VAR_3->reg_2938, 0x02938);
 FUNC_7(VAR_3->reg_293c, 0x0293c);
 FUNC_7(VAR_3->reg_2940, 0x02940);
 FUNC_7(VAR_3->reg_2944, 0x02944);
 FUNC_7(VAR_3->reg_2948, 0x02948);
 FUNC_7(VAR_3->reg_294c, 0x0294c);
 FUNC_7(VAR_3->reg_2950, 0x02950);
 FUNC_7(VAR_3->reg_2954, 0x02954);
 FUNC_7(VAR_3->reg_2958, 0x02958);
 FUNC_7(VAR_3->reg_295c, 0x0295c);
 FUNC_7(VAR_3->reg_2960, 0x02960);
 FUNC_7(VAR_3->reg_2964, 0x02964);
 FUNC_7(VAR_3->reg_2968, 0x02968);
 FUNC_7(VAR_3->reg_296c, 0x0296c);
 FUNC_7(VAR_3->reg_2970, 0x02970);




 if ((VAR_3->reg_2834 & 0x0000FFFF) == (VAR_3->reg_2834 >> 16)) {

  VAR_4 = 0;
 } else {

  VAR_4 = ((VAR_3->reg_2834 << 16) / (VAR_3->reg_2834 >> 16)) >> 15;
  VAR_4 = (VAR_4 >> 1) + (VAR_4 & 1);

  VAR_4 += !VAR_4;
 }


 if ((VAR_3->reg_2918 & 0x0000FFFF) == (VAR_3->reg_2918 >> 16)) {

  VAR_5 = 0;
  VAR_6 = 1;
 } else {

  VAR_5 = ((VAR_3->reg_2918 << 16) / (VAR_3->reg_2918 >> 16)) >> 15;
  VAR_5 = (VAR_5 >> 1) + (VAR_5 & 1);

  VAR_5 += !VAR_5;
  VAR_6 = VAR_5;
 }


 FUNC_4(VAR_2, VAR_4, VAR_5, VAR_6);


 FUNC_7(0, 0x02814);
 FUNC_7(0, 0x0282c);
 FUNC_7(0, 0x02904);
 FUNC_7(0, 0x02910);


 if (VAR_3->blanking_ptr) {
  FUNC_5(VAR_3->blanking_ptr);
  VAR_3->blanking_ptr = ((void*)0);
  FUNC_6(VAR_2->pdev, VAR_3->blanking_dmaptr, 720*16, VAR_1);
 }


 VAR_3->old_frame_info.src_w = 0;
 VAR_3->old_frame_info.src_h = 0;
 VAR_3->old_frame_info_args.src_w = 0;
 VAR_3->old_frame_info_args.src_h = 0;


 FUNC_2(VAR_0, &VAR_2->i_flags);
}
