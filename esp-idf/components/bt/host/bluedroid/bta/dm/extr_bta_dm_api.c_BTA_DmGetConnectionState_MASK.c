
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ conn_state; } ;
typedef TYPE_1__ tBTA_DM_PEER_DEVICE ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

UINT16 FUNC_1( BD_ADDR VAR_1 )
{
    tBTA_DM_PEER_DEVICE *VAR_2 = FUNC_0(VAR_1);
    return (VAR_2 && VAR_2->conn_state == VAR_0);
}
