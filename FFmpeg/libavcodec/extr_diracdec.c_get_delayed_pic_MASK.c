
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ display_picture_number; } ;
struct TYPE_6__ {TYPE_1__** delay_frames; } ;
struct TYPE_5__ {TYPE_4__* avframe; int reference; } ;
typedef TYPE_1__ DiracFrame ;
typedef TYPE_2__ DiracContext ;
typedef int AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*) ;

__attribute__((used)) static int FUNC_1(DiracContext *VAR_1, AVFrame *VAR_2, int *VAR_3)
{
    DiracFrame *VAR_4 = VAR_1->delay_frames[0];
    int VAR_5, VAR_6 = 0;
    int VAR_7;


    for (VAR_5 = 1; VAR_1->delay_frames[VAR_5]; VAR_5++)
        if (VAR_1->delay_frames[VAR_5]->avframe->display_picture_number < VAR_4->avframe->display_picture_number) {
            VAR_4 = VAR_1->delay_frames[VAR_5];
            VAR_6 = VAR_5;
        }

    for (VAR_5 = VAR_6; VAR_1->delay_frames[VAR_5]; VAR_5++)
        VAR_1->delay_frames[VAR_5] = VAR_1->delay_frames[VAR_5+1];

    if (VAR_4) {
        VAR_4->reference ^= VAR_0;
        if((VAR_7 = FUNC_0(VAR_2, VAR_4->avframe)) < 0)
            return VAR_7;
        *VAR_3 = 1;
    }

    return 0;
}
