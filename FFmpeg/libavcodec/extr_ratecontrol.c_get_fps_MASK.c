
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ticks_per_frame; int time_base; } ;
typedef TYPE_1__ AVCodecContext ;


 double FUNC_0 (int ,int) ;
 double FUNC_1 (int ) ;

__attribute__((used)) static double FUNC_2(AVCodecContext *VAR_0)
{
    return 1.0 / FUNC_1(VAR_0->time_base) / FUNC_0(VAR_0->ticks_per_frame, 1);
}
