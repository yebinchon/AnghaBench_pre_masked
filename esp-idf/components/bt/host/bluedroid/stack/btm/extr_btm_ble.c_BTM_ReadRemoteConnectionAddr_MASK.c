
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ble_addr_type; } ;
struct TYPE_7__ {TYPE_1__ ble; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
typedef int tBLE_ADDR_TYPE ;
struct TYPE_8__ {int active_remote_addr_type; int active_remote_addr; } ;
typedef TYPE_3__ tACL_CONN ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

BOOLEAN FUNC_4(BD_ADDR VAR_4, BD_ADDR VAR_5,
                                     tBLE_ADDR_TYPE *VAR_6)
{
    BOOLEAN VAR_7 = VAR_3;

    tACL_CONN *VAR_8 = FUNC_1 (VAR_4, VAR_1);

    if (VAR_8 == ((void*)0)) {
        FUNC_0("BTM_ReadRemoteConnectionAddr can not find connection"
                        " with matching address");
        return VAR_2;
    }

    FUNC_3(VAR_5, VAR_8->active_remote_addr, VAR_0);
    *VAR_6 = VAR_8->active_remote_addr_type;
    return VAR_7;

}
