
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {TYPE_3__* dst; } ;
struct TYPE_5__ {int badness_threshold; int nb_frames; int threshold_multiplier; } ;
typedef TYPE_1__ PhotosensitivityContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(AVFilterLink *VAR_1)
{

    AVFilterContext *VAR_2 = VAR_1->dst;
    PhotosensitivityContext *VAR_3 = VAR_2->priv;

    VAR_3->badness_threshold = (int)(VAR_0 * VAR_0 * 4 * 256 * VAR_3->nb_frames * VAR_3->threshold_multiplier / 128);

    return 0;
}
