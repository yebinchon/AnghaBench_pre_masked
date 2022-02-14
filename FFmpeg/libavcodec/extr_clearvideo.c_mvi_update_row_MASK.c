
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mb_stride; int * mv; scalar_t__ top; } ;
typedef TYPE_1__ MVInfo ;



__attribute__((used)) static void FUNC_0(MVInfo *VAR_0)
{
    int VAR_1;

    VAR_0->top = 0;
    for (VAR_1 = 0 ; VAR_1 < VAR_0->mb_stride; VAR_1++) {
        VAR_0->mv[VAR_1] = VAR_0->mv[VAR_0->mb_stride + VAR_1];
    }
}
