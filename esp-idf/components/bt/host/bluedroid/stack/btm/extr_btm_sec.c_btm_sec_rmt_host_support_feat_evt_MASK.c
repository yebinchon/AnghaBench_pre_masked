
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sm4; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
typedef int * BD_FEATURES ;
typedef int BD_ADDR ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,int *) ;
 TYPE_1__* FUNC_5 (int ) ;

void FUNC_6 (UINT8 *VAR_3)
{
    tBTM_SEC_DEV_REC *VAR_4;
    BD_ADDR VAR_5;
    BD_FEATURES VAR_6;

    FUNC_4 (VAR_5, VAR_3);
    VAR_4 = FUNC_5 (VAR_5);

    FUNC_1 ("btm_sec_rmt_host_support_feat_evt  sm4: 0x%x  p[0]: 0x%x\n", VAR_4->sm4, VAR_3[0]);

    if (FUNC_0(VAR_4->sm4)) {
        VAR_4->sm4 = VAR_0;
        FUNC_3(VAR_6, VAR_3, VAR_2);
        if (FUNC_2(VAR_6)) {
            VAR_4->sm4 = VAR_1;
        }
        FUNC_1 ("btm_sec_rmt_host_support_feat_evt sm4: 0x%x features[0]: 0x%x\n", VAR_4->sm4, VAR_6[0]);
    }
}
