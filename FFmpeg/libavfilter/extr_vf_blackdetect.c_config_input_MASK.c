
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int time_base; int format; TYPE_3__* dst; } ;
struct TYPE_6__ {int black_min_duration; int black_min_duration_time; int pixel_black_th_i; int pixel_black_th; int picture_black_ratio_th; } ;
typedef TYPE_1__ BlackDetectContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int ,int,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    BlackDetectContext *VAR_4 = VAR_3->priv;

    VAR_4->black_min_duration =
        VAR_4->black_min_duration_time / FUNC_1(VAR_2->time_base);

    VAR_4->pixel_black_th_i = FUNC_3(VAR_2->format, VAR_1) ?

             VAR_4->pixel_black_th * 255 :
        16 + VAR_4->pixel_black_th * (235 - 16);

    FUNC_0(VAR_4, VAR_0,
           "black_min_duration:%s pixel_black_th:%f pixel_black_th_i:%d picture_black_ratio_th:%f\n",
           FUNC_2(VAR_4->black_min_duration, &VAR_2->time_base),
           VAR_4->pixel_black_th, VAR_4->pixel_black_th_i,
           VAR_4->picture_black_ratio_th);
    return 0;
}
