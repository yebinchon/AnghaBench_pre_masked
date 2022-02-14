
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int len; int event; TYPE_3__* p_data; } ;
typedef TYPE_2__ tBTA_DM_SEARCH_PARAM ;
typedef int tBTA_DM_SEARCH ;
typedef int btc_msg_t ;
struct TYPE_8__ {int raw_data_size; TYPE_3__* p_raw_data; } ;
struct TYPE_10__ {TYPE_1__ disc_res; } ;
typedef TYPE_3__ UINT8 ;



 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 TYPE_3__* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(btc_msg_t *VAR_0, void *VAR_1, void *VAR_2)
{
    tBTA_DM_SEARCH_PARAM *VAR_3 = (tBTA_DM_SEARCH_PARAM *) VAR_1;
    tBTA_DM_SEARCH_PARAM *VAR_4 = (tBTA_DM_SEARCH_PARAM *) VAR_2;

    if (!VAR_2) {
        return;
    }
    VAR_3->p_data = FUNC_2(VAR_3->len);
    FUNC_1(VAR_3->p_data, 0x00, VAR_3->len);
    FUNC_0(VAR_3->p_data, VAR_4->p_data, VAR_3->len);
    if ( VAR_3->len > sizeof(tBTA_DM_SEARCH)){
        switch (VAR_3->event) {
        case 128: {
            if (VAR_4->p_data->disc_res.p_raw_data && VAR_4->p_data->disc_res.raw_data_size > 0) {
                VAR_3->p_data->disc_res.p_raw_data = (UINT8 *)(VAR_3->p_data) + sizeof(tBTA_DM_SEARCH);
                FUNC_0(VAR_3->p_data->disc_res.p_raw_data,
                       VAR_4->p_data->disc_res.p_raw_data,
                       VAR_4->p_data->disc_res.raw_data_size);
            }
        }
        break;

        default:
            break;
        }
    }
}
