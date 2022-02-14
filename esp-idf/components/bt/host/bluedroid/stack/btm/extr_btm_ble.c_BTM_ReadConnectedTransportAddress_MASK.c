
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBT_TRANSPORT ;
struct TYPE_4__ {int pseudo_addr; } ;
struct TYPE_5__ {int device_type; TYPE_1__ ble; int bd_addr; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

BOOLEAN FUNC_4(BD_ADDR VAR_6, tBT_TRANSPORT VAR_7)
{
    tBTM_SEC_DEV_REC *VAR_8 = FUNC_1(VAR_6);


    if (VAR_8 == ((void*)0)) {
        FUNC_3(VAR_6, 0, VAR_0);
        return VAR_4;
    }

    if (VAR_7 == VAR_2) {
        if (FUNC_0(VAR_8->bd_addr, VAR_7) != ((void*)0)) {
            FUNC_2(VAR_6, VAR_8->bd_addr, VAR_0);
            return VAR_5;
        } else if (VAR_8->device_type & VAR_1) {
            FUNC_2(VAR_6, VAR_8->bd_addr, VAR_0);
        } else {
            FUNC_3(VAR_6, 0, VAR_0);
        }
        return VAR_4;
    }

    if (VAR_7 == VAR_3) {
        FUNC_2(VAR_6, VAR_8->ble.pseudo_addr, VAR_0);
        if (FUNC_0(VAR_8->ble.pseudo_addr, VAR_7) != ((void*)0)) {
            return VAR_5;
        } else {
            return VAR_4;
        }
    }

    return VAR_4;
}
