
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int len; int event; TYPE_4__* p_data; } ;
typedef TYPE_3__ tBTA_DM_SEARCH_PARAM ;
typedef int tBTA_DM_SEARCH ;
typedef int btc_msg_t ;
struct TYPE_9__ {int raw_data_size; TYPE_4__* p_raw_data; } ;
struct TYPE_8__ {TYPE_4__* p_eir; } ;
struct TYPE_11__ {TYPE_2__ disc_res; TYPE_1__ inq_res; } ;
typedef TYPE_4__ UINT8 ;




 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(btc_msg_t *VAR_1, void *VAR_2, void *VAR_3)
{
    tBTA_DM_SEARCH_PARAM *VAR_4 = (tBTA_DM_SEARCH_PARAM *) VAR_2;
    tBTA_DM_SEARCH_PARAM *VAR_5 = (tBTA_DM_SEARCH_PARAM *) VAR_3;
    if (!VAR_3) {
        return;
    }
    VAR_4->p_data = (void *)FUNC_2(VAR_4->len);
    FUNC_1(VAR_4->p_data, 0x00, VAR_4->len);
    FUNC_0(VAR_4->p_data, VAR_5->p_data, VAR_4->len);

    if ( VAR_4->len > sizeof(tBTA_DM_SEARCH)){
        switch (VAR_4->event) {
        case 128: {
            if (VAR_5->p_data->inq_res.p_eir) {
                VAR_4->p_data->inq_res.p_eir = (UINT8 *)(VAR_4->p_data) + sizeof(tBTA_DM_SEARCH);
                FUNC_0(VAR_4->p_data->inq_res.p_eir, VAR_5->p_data->inq_res.p_eir, VAR_0);
            }
        }
        break;

        case 129: {
            if (VAR_5->p_data->disc_res.raw_data_size && VAR_5->p_data->disc_res.p_raw_data) {
                VAR_4->p_data->disc_res.p_raw_data = (UINT8 *)(VAR_4->p_data) + sizeof(tBTA_DM_SEARCH);
                FUNC_0(VAR_4->p_data->disc_res.p_raw_data,
                       VAR_5->p_data->disc_res.p_raw_data,
                       VAR_5->p_data->disc_res.raw_data_size);
            }
        }
        break;
        }
    }
}
