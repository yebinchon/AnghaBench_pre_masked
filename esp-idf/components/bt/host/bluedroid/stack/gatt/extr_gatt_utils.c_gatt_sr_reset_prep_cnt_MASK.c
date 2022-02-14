
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* prep_cnt; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef size_t UINT8 ;


 size_t VAR_0 ;

void FUNC_0(tGATT_TCB *VAR_1 )
{
    UINT8 VAR_2;
    if (VAR_1) {
        for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2 ++) {
            VAR_1->prep_cnt[VAR_2] = 0;
        }
    }
}
