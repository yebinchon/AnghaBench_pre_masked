
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int length; int * packet; } ;
typedef TYPE_1__ flow_control_msg_t ;
typedef int esp_eth_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static esp_err_t FUNC_4(esp_eth_handle_t VAR_6, uint8_t *VAR_7, uint32_t VAR_8)
{
    esp_err_t VAR_9 = VAR_1;
    flow_control_msg_t VAR_10 = {
        .packet = VAR_7,
        .length = VAR_8
    };
    if (FUNC_3(VAR_4, &VAR_10, FUNC_2(VAR_2)) != VAR_5) {
        FUNC_0(VAR_3, "send flow control message failed or timeout");
        FUNC_1(VAR_7);
        VAR_9 = VAR_0;
    }
    return VAR_9;
}
