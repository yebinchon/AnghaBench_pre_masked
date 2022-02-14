
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** data; int* linesize; } ;
typedef TYPE_1__ AVFrame ;



__attribute__((used)) static void FUNC_0(AVFrame *VAR_0, int VAR_1, int VAR_2,
                        int *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6)
{
    if (*VAR_3 < 0)
        *VAR_3 = VAR_0->data[0][VAR_2 * VAR_0->linesize[0] + VAR_1];
}
