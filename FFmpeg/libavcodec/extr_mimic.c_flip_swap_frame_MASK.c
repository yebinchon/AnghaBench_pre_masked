
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int height; int* linesize; int ** data; } ;
typedef TYPE_1__ AVFrame ;



__attribute__((used)) static void FUNC_0(AVFrame *VAR_0)
{
    int VAR_1;
    uint8_t *VAR_2 = VAR_0->data[1];
    VAR_0->data[0] = VAR_0->data[0] + ( VAR_0->height - 1) * VAR_0->linesize[0];
    VAR_0->data[1] = VAR_0->data[2] + ((VAR_0->height >> 1) - 1) * VAR_0->linesize[2];
    VAR_0->data[2] = VAR_2 + ((VAR_0->height >> 1) - 1) * VAR_0->linesize[1];
    for (VAR_1 = 0; VAR_1 < 3; VAR_1++)
        VAR_0->linesize[VAR_1] *= -1;
}
