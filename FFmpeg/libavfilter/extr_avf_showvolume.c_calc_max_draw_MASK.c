
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {float h; } ;
struct TYPE_5__ {scalar_t__ display_scale; float w; scalar_t__ orientation; } ;
typedef TYPE_1__ ShowVolumeContext ;
typedef TYPE_2__ AVFilterLink ;


 scalar_t__ VAR_0 ;
 float FUNC_0 (double,int ,int) ;
 double FUNC_1 (float) ;

__attribute__((used)) static inline int FUNC_2(ShowVolumeContext *VAR_1, AVFilterLink *VAR_2, float VAR_3)
{
    float VAR_4;
    if (VAR_1->display_scale == VAR_0) {
        VAR_4 = VAR_3;
    } else {
        VAR_4 = FUNC_0(0.21 * FUNC_1(VAR_3) + 1, 0, 1);
    }
    if (VAR_1->orientation) {
        return VAR_2->h - VAR_2->h * VAR_4;
    } else {
        return VAR_1->w * VAR_4;
    }
}
