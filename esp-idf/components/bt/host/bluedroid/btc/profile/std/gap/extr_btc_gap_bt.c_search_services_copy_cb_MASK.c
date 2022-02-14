
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int len; int event; TYPE_3__* p_data; } ;
typedef TYPE_2__ tBTA_DM_SEARCH_PARAM ;
typedef int tBTA_DM_SEARCH ;
typedef int btc_msg_t ;
struct TYPE_9__ {int num_uuids; TYPE_3__* p_raw_data; TYPE_3__* p_uuid_list; int result; } ;
struct TYPE_11__ {TYPE_1__ disc_res; } ;
typedef TYPE_3__ UINT8 ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(btc_msg_t *VAR_2, void *VAR_3, void *VAR_4)
{
    tBTA_DM_SEARCH_PARAM *VAR_5 = (tBTA_DM_SEARCH_PARAM *) VAR_3;
    tBTA_DM_SEARCH_PARAM *VAR_6 = (tBTA_DM_SEARCH_PARAM *) VAR_4;

    if (!VAR_4) {
        return;
    }
    VAR_5->p_data = FUNC_3(VAR_5->len);
    FUNC_1(VAR_5->p_data, 0x00, VAR_5->len);
    FUNC_0(VAR_5->p_data, VAR_6->p_data, VAR_5->len);

    if ( VAR_5->len > sizeof(tBTA_DM_SEARCH)){
        switch (VAR_5->event) {
        case 128: {
            if (VAR_6->p_data->disc_res.result == VAR_0) {
                if (VAR_6->p_data->disc_res.num_uuids > 0) {
                    VAR_5->p_data->disc_res.p_uuid_list = (UINT8 *)(VAR_5->p_data) + sizeof(tBTA_DM_SEARCH);
                    FUNC_0(VAR_5->p_data->disc_res.p_uuid_list, VAR_6->p_data->disc_res.p_uuid_list,
                           VAR_6->p_data->disc_res.num_uuids * VAR_1);
                    FUNC_2(VAR_6->p_data->disc_res.p_uuid_list);
                    VAR_6->p_data->disc_res.p_uuid_list = ((void*)0);
                }
                if (VAR_6->p_data->disc_res.p_raw_data != ((void*)0)) {
                    FUNC_2(VAR_6->p_data->disc_res.p_raw_data);
                    VAR_6->p_data->disc_res.p_raw_data = ((void*)0);
                }
            }
        } break;
        }
    }
}
