
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * field_order; } ;
typedef TYPE_1__ ASSSplitContext ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

void FUNC_4(ASSSplitContext *VAR_1)
{
    if (VAR_1) {
        int VAR_2;
        for (VAR_2=0; VAR_2<FUNC_0(VAR_0); VAR_2++) {
            FUNC_3(VAR_1, &VAR_0[VAR_2]);
            FUNC_2(&(VAR_1->field_order[VAR_2]));
        }
        FUNC_1(VAR_1);
    }
}
