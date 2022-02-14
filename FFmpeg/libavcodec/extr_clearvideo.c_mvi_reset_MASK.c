
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int top; int mb_w; int mb_h; int mb_size; int mb_stride; int mv; } ;
typedef TYPE_1__ MVInfo ;
typedef int MV ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(MVInfo *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    VAR_0->top = 1;
    VAR_0->mb_w = VAR_1;
    VAR_0->mb_h = VAR_2;
    VAR_0->mb_size = VAR_3;
    VAR_0->mb_stride = VAR_1;
    FUNC_0(VAR_0->mv, 0, sizeof(MV) * VAR_0->mb_stride * 2);
}
