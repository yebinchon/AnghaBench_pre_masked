
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* prep_cnt; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef size_t UINT8 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

BOOLEAN FUNC_0(tGATT_TCB *VAR_3)
{
    BOOLEAN VAR_4 = VAR_2;
    UINT8 VAR_5;

    if (VAR_3) {
        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 ++) {
            if (VAR_3->prep_cnt[VAR_5]) {
                VAR_4 = VAR_0;
                break;
            }
        }
    } else {
        VAR_4 = VAR_0;
    }
    return VAR_4;
}
