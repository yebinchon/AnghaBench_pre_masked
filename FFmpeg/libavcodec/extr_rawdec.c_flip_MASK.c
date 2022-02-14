
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int height; } ;
struct TYPE_5__ {int* data; int* linesize; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;



__attribute__((used)) static void FUNC_0(AVCodecContext *VAR_0, AVFrame *VAR_1)
{
    VAR_1->data[0] += VAR_1->linesize[0] * (VAR_0->height - 1);
    VAR_1->linesize[0] *= -1;
}
