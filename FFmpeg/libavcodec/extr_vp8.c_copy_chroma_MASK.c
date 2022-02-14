
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(AVFrame *VAR_0, AVFrame *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    for (VAR_5 = 1; VAR_5 < 3; VAR_5++) {
        for (VAR_4 = 0; VAR_4 < VAR_3 / 2; VAR_4++)
            FUNC_0(VAR_0->data[VAR_5] + VAR_4 * VAR_0->linesize[VAR_5],
                   VAR_1->data[VAR_5] + VAR_4 * VAR_1->linesize[VAR_5], VAR_2 / 2);
    }
}
