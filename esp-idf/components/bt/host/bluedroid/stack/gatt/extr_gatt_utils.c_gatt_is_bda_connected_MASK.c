
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT8 ;
struct TYPE_4__ {TYPE_1__* tcb; } ;
struct TYPE_3__ {int peer_bda; scalar_t__ in_use; } ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;

BOOLEAN FUNC_1(BD_ADDR VAR_5)
{
    UINT8 VAR_6 = 0;
    BOOLEAN VAR_7 = VAR_1;

    for ( VAR_6 = 0; VAR_6 < VAR_2; VAR_6 ++) {
        if (VAR_4.tcb[VAR_6].in_use &&
                !FUNC_0(VAR_4.tcb[VAR_6].peer_bda, VAR_5, VAR_0)) {
            VAR_7 = VAR_3;
            break;
        }
    }
    return VAR_7;
}
