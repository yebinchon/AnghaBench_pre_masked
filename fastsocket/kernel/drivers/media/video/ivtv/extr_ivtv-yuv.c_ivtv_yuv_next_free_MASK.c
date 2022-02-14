
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct yuv_playback_info {int max_frames_buffered; int draw_frame; TYPE_1__* new_frame_info; int next_dma_frame; int next_fill_frame; } ;
struct ivtv {struct yuv_playback_info yuv_info; } ;
struct TYPE_2__ {scalar_t__ update; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ivtv*) ;

__attribute__((used)) static void FUNC_2(struct ivtv *VAR_1)
{
 int VAR_2, VAR_3;
 struct yuv_playback_info *VAR_4 = &VAR_1->yuv_info;

 if (FUNC_0(&VAR_4->next_dma_frame) == -1)
  FUNC_1(VAR_1);

 VAR_2 = FUNC_0(&VAR_4->next_fill_frame);
 VAR_3 = FUNC_0(&VAR_4->next_dma_frame);

 if (VAR_3 > VAR_2)
  VAR_3 -= VAR_0;

 if (VAR_2 - VAR_3 >= VAR_4->max_frames_buffered)
  VAR_2 = (u8)(VAR_2 - 1) % VAR_0;
 else
  VAR_4->new_frame_info[VAR_2].update = 0;

 VAR_4->draw_frame = VAR_2;
}
