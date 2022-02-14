
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int features; size_t inband_enabled; int peer_addr; int app_id; int act_timer; int post_sco; int hsp_version; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
struct TYPE_16__ {size_t state; int ok_flag; int * str; int audio_handle; int num; } ;
struct TYPE_18__ {size_t result; TYPE_1__ data; } ;
typedef TYPE_3__ tBTA_AG_API_RESULT ;
typedef int UINT8 ;


 int FUNC_0 (char*,size_t) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int * VAR_9 ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int *) ;

void FUNC_14(tBTA_AG_SCB *VAR_10, tBTA_AG_API_RESULT *VAR_11)
{
    UINT8 VAR_12 = VAR_9[VAR_11->result];

    FUNC_0("bta_ag_hsp_result : res = %d", VAR_11->result);

    switch(VAR_11->result) {
        case 129:
        case 131:
            FUNC_9(VAR_10, VAR_12, ((void*)0), VAR_11->data.num);
            break;

        case 132:
        {

            FUNC_12(VAR_7, VAR_10->app_id, VAR_10->peer_addr);

            if (FUNC_4(VAR_10) || !FUNC_1(VAR_10) ||
                (VAR_10->features & VAR_1)) {
                FUNC_10(VAR_10, (tBTA_AG_DATA *) VAR_11);
            } else {


                if (VAR_10->hsp_version >= VAR_8) {
                    VAR_10->post_sco = VAR_5;
                } else {
                    VAR_10->post_sco = VAR_6;
                }
                FUNC_6(VAR_10, (tBTA_AG_DATA *) VAR_11);
            }
            break;
        }

        case 133:
        case 130:
        {

            if (VAR_11->result == 133) {
                FUNC_13(&VAR_10->act_timer);
            }

            if (!(VAR_10->features & VAR_1)) {

                if (VAR_11->data.audio_handle == FUNC_2(VAR_10)) {
                    FUNC_6(VAR_10, (tBTA_AG_DATA *) VAR_11);
                } else if (VAR_11->data.audio_handle == VAR_2) {

                    FUNC_3(VAR_10, (tBTA_AG_DATA *) VAR_11);
                }
            }
            break;
        }

        case 135:
        {

            FUNC_13(&VAR_10->act_timer);

            if ((FUNC_4(VAR_10) || FUNC_5(VAR_10)) && !(VAR_10->features & VAR_1)) {
                FUNC_3(VAR_10, (tBTA_AG_DATA *) VAR_11);
            } else {

                FUNC_11(VAR_7, VAR_10->app_id, VAR_10->peer_addr);
            }
            break;
        }

        case 134:
            VAR_10->inband_enabled = VAR_11->data.state;
            FUNC_0("inband_enabled set to %d", VAR_10->inband_enabled);
            break;

        case 128:
        {
            if (VAR_11->data.ok_flag != VAR_4) {
                if (VAR_11->data.str[0] != 0) {
                    FUNC_9(VAR_10, VAR_12, VAR_11->data.str, 0);
                }
                if (VAR_11->data.ok_flag == VAR_3) {
                    FUNC_8(VAR_10);
                }
            } else {
                FUNC_7(VAR_10, VAR_0);
            }
            break;
        }
        default:
            break;
    }
}
