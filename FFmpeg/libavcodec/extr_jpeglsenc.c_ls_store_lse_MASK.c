
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ T1; scalar_t__ T2; scalar_t__ T3; scalar_t__ reset; int maxval; int near; int bpp; int member_0; } ;
typedef int PutBitContext ;
typedef TYPE_1__ JLSState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(JLSState *VAR_1, PutBitContext *VAR_2)
{

    JLSState VAR_3 = { 0 };
    VAR_3 = VAR_1->bpp;
    VAR_3 = VAR_1->near;
    FUNC_0(&VAR_3, 1);
    if (VAR_1->T1 == VAR_3 &&
        VAR_1->T2 == VAR_3 &&
        VAR_1->T3 == VAR_3 &&
        VAR_1->reset == VAR_3)
        return;

    FUNC_2(VAR_2, VAR_0);
    FUNC_1(VAR_2, 16, 13);
    FUNC_1(VAR_2, 8, 1);
    FUNC_1(VAR_2, 16, VAR_1->maxval);
    FUNC_1(VAR_2, 16, VAR_1->T1);
    FUNC_1(VAR_2, 16, VAR_1->T2);
    FUNC_1(VAR_2, 16, VAR_1->T3);
    FUNC_1(VAR_2, 16, VAR_1->reset);
}
