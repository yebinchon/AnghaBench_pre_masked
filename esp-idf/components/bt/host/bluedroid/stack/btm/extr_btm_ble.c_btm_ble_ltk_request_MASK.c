
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bd_addr; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
struct TYPE_8__ {int enc_rand; int ediv; } ;
typedef TYPE_2__ tBTM_CB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_9__ {int member_0; } ;
typedef TYPE_3__ BT_OCTET8 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_3__) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(UINT16 VAR_3, UINT8 VAR_4[8], UINT16 VAR_5)
{
    tBTM_CB *VAR_6 = &VAR_2;
    tBTM_SEC_DEV_REC *VAR_7 = FUNC_2 (VAR_3);
    BT_OCTET8 VAR_8 = {0};

    FUNC_0 ("btm_ble_ltk_request");

    VAR_6->ediv = VAR_5;

    FUNC_3(VAR_6->enc_rand, VAR_4, VAR_0);

    if (VAR_7 != ((void*)0)) {
        if (!FUNC_4(VAR_7->bd_addr)) {
            FUNC_1(VAR_7->bd_addr, VAR_1, VAR_8);
        }
    }

}
