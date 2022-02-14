
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int status; int cmd; } ;
struct TYPE_4__ {TYPE_1__ media_ctrl_stat; } ;
typedef TYPE_2__ esp_a2d_cb_param_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_3(uint16_t VAR_12, void *VAR_13)
{
    esp_a2d_cb_param_t *VAR_14 = ((void*)0);
    switch (VAR_10) {
    case 131: {
        if (VAR_12 == VAR_1) {
            FUNC_0(VAR_2, "a2dp media ready checking ...");
            FUNC_1(VAR_5);
        } else if (VAR_12 == VAR_3) {
            VAR_14 = (esp_a2d_cb_param_t *)(VAR_13);
            if (VAR_14->media_ctrl_stat.cmd == VAR_5 &&
                    VAR_14->media_ctrl_stat.status == VAR_4) {
                FUNC_0(VAR_2, "a2dp media ready, starting ...");
                FUNC_1(VAR_6);
                VAR_10 = 129;
            }
        }
        break;
    }
    case 129: {
        if (VAR_12 == VAR_3) {
            VAR_14 = (esp_a2d_cb_param_t *)(VAR_13);
            if (VAR_14->media_ctrl_stat.cmd == VAR_6 &&
                    VAR_14->media_ctrl_stat.status == VAR_4) {
                FUNC_0(VAR_2, "a2dp media start successfully.");
                VAR_9 = 0;
                VAR_10 = 130;
            } else {

                FUNC_0(VAR_2, "a2dp media start failed.");
                VAR_10 = 131;
            }
        }
        break;
    }
    case 130: {
        if (VAR_12 == VAR_1) {
            if (++VAR_9 >= 10) {
                FUNC_0(VAR_2, "a2dp media stopping...");
                FUNC_1(VAR_7);
                VAR_10 = 128;
                VAR_9 = 0;
            }
        }
        break;
    }
    case 128: {
        if (VAR_12 == VAR_3) {
            VAR_14 = (esp_a2d_cb_param_t *)(VAR_13);
            if (VAR_14->media_ctrl_stat.cmd == VAR_7 &&
                    VAR_14->media_ctrl_stat.status == VAR_4) {
                FUNC_0(VAR_2, "a2dp media stopped successfully, disconnecting...");
                VAR_10 = 131;
                FUNC_2(VAR_11);
                VAR_8 = VAR_0;
            } else {
                FUNC_0(VAR_2, "a2dp media stopping...");
                FUNC_1(VAR_7);
            }
        }
        break;
    }
    }
}
