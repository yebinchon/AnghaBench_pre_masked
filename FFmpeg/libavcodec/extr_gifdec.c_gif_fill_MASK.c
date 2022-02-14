
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* linesize; int height; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;



__attribute__((used)) static void FUNC_0(AVFrame *VAR_0, uint32_t VAR_1)
{
    uint32_t *VAR_2 = (uint32_t *)VAR_0->data[0];
    uint32_t *VAR_3 = VAR_2 + (VAR_0->linesize[0] / sizeof(uint32_t)) * VAR_0->height;

    for (; VAR_2 < VAR_3; VAR_2++)
        *VAR_2 = VAR_1;
}
