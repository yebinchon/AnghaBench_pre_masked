
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enc_key_size; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
typedef int BD_ADDR ;


 int FUNC_0 (char*,int ) ;
 TYPE_1__* FUNC_1 (int ) ;

void FUNC_2(BD_ADDR VAR_0, UINT8 VAR_1)
{
    tBTM_SEC_DEV_REC *VAR_2;

    FUNC_0("btm_ble_update_sec_key_size enc_key_size = %d", VAR_1);

    if ((VAR_2 = FUNC_1 (VAR_0)) != ((void*)0) ) {
        VAR_2->enc_key_size = VAR_1;
    }
}
