
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int show_mode; int force_refresh; int audio_st; int video_st; } ;
typedef TYPE_1__ VideoState ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(VideoState *VAR_2)
{
    int VAR_3 = VAR_2->show_mode;
    do {
        VAR_3 = (VAR_3 + 1) % VAR_0;
    } while (VAR_3 != VAR_2->show_mode && (VAR_3 == VAR_1 && !VAR_2->video_st || VAR_3 != VAR_1 && !VAR_2->audio_st));
    if (VAR_2->show_mode != VAR_3) {
        VAR_2->force_refresh = 1;
        VAR_2->show_mode = VAR_3;
    }
}
