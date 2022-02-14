
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enc_key_size; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
typedef int BD_ADDR ;


 TYPE_1__* FUNC_0 (int ) ;

UINT8 FUNC_1(BD_ADDR VAR_0)
{
    tBTM_SEC_DEV_REC *VAR_1;

    if ((VAR_1 = FUNC_0 (VAR_0)) != ((void*)0) ) {
        return VAR_1->enc_key_size;
    } else {
        return 0;
    }
    return 0;
}
