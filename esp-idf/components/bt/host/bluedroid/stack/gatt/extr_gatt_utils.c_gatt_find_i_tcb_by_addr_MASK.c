
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tBT_TRANSPORT ;
typedef size_t UINT8 ;
struct TYPE_4__ {TYPE_1__* tcb; } ;
struct TYPE_3__ {scalar_t__ transport; int peer_bda; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

UINT8 FUNC_1(BD_ADDR VAR_4, tBT_TRANSPORT VAR_5)
{
    UINT8 VAR_6 = 0;

    for ( ; VAR_6 < VAR_2; VAR_6 ++) {
        if (!FUNC_0(VAR_3.tcb[VAR_6].peer_bda, VAR_4, VAR_0) &&
                VAR_3.tcb[VAR_6].transport == VAR_5) {
            return VAR_6;
        }
    }
    return VAR_1;
}
