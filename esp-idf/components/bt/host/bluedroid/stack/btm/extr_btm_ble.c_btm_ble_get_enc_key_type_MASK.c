
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key_type; } ;
struct TYPE_5__ {TYPE_1__ ble; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;

BOOLEAN FUNC_2(BD_ADDR VAR_2, UINT8 *VAR_3)
{
    tBTM_SEC_DEV_REC *VAR_4;

    FUNC_0 ("btm_ble_get_enc_key_type");

    if ((VAR_4 = FUNC_1 (VAR_2)) != ((void*)0)) {
        *VAR_3 = VAR_4->ble.key_type;
        return VAR_1;
    }

    return VAR_0;
}
