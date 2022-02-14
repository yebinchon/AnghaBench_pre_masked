
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
typedef int BOOLEAN ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

BOOLEAN FUNC_0(tGATT_TCB *VAR_3 )
{
    BOOLEAN VAR_4 = VAR_2;

    UINT8 VAR_5;

    if (VAR_3) {
        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 ++) {
            if (VAR_3->sr_cmd.cback_cnt[VAR_5]) {
                VAR_4 = VAR_0;
                break;
            }
        }
    } else {
        VAR_4 = VAR_0;
    }

    return VAR_4;
}
