
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* linesize; int ** data; } ;
struct TYPE_5__ {int hsub; int vsub; int * yuv_color; } ;
typedef TYPE_1__ SignalstatsContext ;
typedef TYPE_2__ AVFrame ;



__attribute__((used)) static void FUNC_0(const SignalstatsContext *VAR_0, AVFrame *VAR_1, int VAR_2, int VAR_3)
{
    const int VAR_4 = VAR_2 >> VAR_0->hsub;
    const int VAR_5 = VAR_3 >> VAR_0->vsub;
    VAR_1->data[0][VAR_3 * VAR_1->linesize[0] + VAR_2] = VAR_0->yuv_color[0];
    VAR_1->data[1][VAR_5 * VAR_1->linesize[1] + VAR_4] = VAR_0->yuv_color[1];
    VAR_1->data[2][VAR_5 * VAR_1->linesize[2] + VAR_4] = VAR_0->yuv_color[2];
}
