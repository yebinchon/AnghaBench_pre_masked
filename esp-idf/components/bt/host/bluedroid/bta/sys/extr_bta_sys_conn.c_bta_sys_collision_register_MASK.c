
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_SYS_CONN_CBACK ;
typedef size_t UINT8 ;
struct TYPE_3__ {size_t* id; int ** p_coll_cback; } ;
struct TYPE_4__ {TYPE_1__ colli_reg; } ;


 size_t VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_0(UINT8 VAR_2, tBTA_SYS_CONN_CBACK *VAR_3)
{
    UINT8 VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if ((VAR_1.colli_reg.id[VAR_4] == VAR_2) ||
                (VAR_1.colli_reg.id[VAR_4] == 0)) {
            VAR_1.colli_reg.id[VAR_4] = VAR_2;
            VAR_1.colli_reg.p_coll_cback[VAR_4] = VAR_3;
            return;
        }
    }
}
