
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_SET_ADV_DATA_CMPL_CBACK ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {scalar_t__ raw_adv_len; int * p_raw_adv; int * p_adv_data_cback; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_SET_ADV_CONFIG_RAW ;
typedef int UINT8 ;
typedef scalar_t__ UINT32 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

void FUNC_3 (UINT8 *VAR_1, UINT32 VAR_2,
                            tBTA_SET_ADV_DATA_CMPL_CBACK *VAR_3)
{
    tBTA_DM_API_SET_ADV_CONFIG_RAW *VAR_4;

    if ((VAR_4 = (tBTA_DM_API_SET_ADV_CONFIG_RAW *)
                 FUNC_2(sizeof(tBTA_DM_API_SET_ADV_CONFIG_RAW) + VAR_2)) != ((void*)0)) {
        VAR_4->hdr.event = VAR_0;
        VAR_4->p_adv_data_cback = VAR_3;
        VAR_4->p_raw_adv = (UINT8 *)(VAR_4 + 1);
        FUNC_1(VAR_4->p_raw_adv, VAR_1, VAR_2);
        VAR_4->raw_adv_len = VAR_2;

        FUNC_0(VAR_4);
    }
}
