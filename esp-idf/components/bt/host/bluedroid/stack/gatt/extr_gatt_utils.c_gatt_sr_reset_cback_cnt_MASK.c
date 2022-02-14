
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* cback_cnt; } ;
struct TYPE_5__ {TYPE_1__ sr_cmd; } ;
typedef TYPE_2__ tGATT_TCB ;
typedef size_t UINT8 ;


 size_t VAR_0 ;

void FUNC_0(tGATT_TCB *VAR_1 )
{

    UINT8 VAR_2;

    if (VAR_1) {
        for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2 ++) {
            VAR_1->sr_cmd.cback_cnt[VAR_2] = 0;
        }
    }

}
