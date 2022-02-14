
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ show_mode; scalar_t__ video_st; scalar_t__ audio_st; int width; } ;
typedef TYPE_1__ VideoState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(VideoState *VAR_2)
{
    if (!VAR_2->width)
        FUNC_5(VAR_2);

    FUNC_2(VAR_1, 0, 0, 0, 255);
    FUNC_0(VAR_1);
    if (VAR_2->audio_st && VAR_2->show_mode != VAR_0)
        FUNC_3(VAR_2);
    else if (VAR_2->video_st)
        FUNC_4(VAR_2);
    FUNC_1(VAR_1);
}
