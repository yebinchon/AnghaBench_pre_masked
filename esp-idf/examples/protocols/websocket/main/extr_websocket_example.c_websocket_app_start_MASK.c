
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ esp_websocket_client_handle_t ;
struct TYPE_3__ {int uri; } ;
typedef TYPE_1__ esp_websocket_client_config_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*,int,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,int ,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_10(void)
{
    FUNC_0(VAR_0, "Connectiong to %s...", VAR_1);

    const esp_websocket_client_config_t VAR_6 = {
        .uri = VAR_1,
    };

    esp_websocket_client_handle_t VAR_7 = FUNC_2(&VAR_6);
    FUNC_7(VAR_7, VAR_2, VAR_5, (void *)VAR_7);

    FUNC_5(VAR_7);
    char VAR_8[32];
    int VAR_9 = 0;
    while (VAR_9 < 10) {
        if (FUNC_3(VAR_7)) {
            int VAR_10 = FUNC_8(VAR_8, "hello %04d", VAR_9++);
            FUNC_0(VAR_0, "Sending %s", VAR_8);
            FUNC_4(VAR_7, VAR_8, VAR_10, VAR_3);
        }
        FUNC_9(1000 / VAR_4);
    }
    FUNC_6(VAR_7);
    FUNC_0(VAR_0, "Websocket Stopped");
    FUNC_1(VAR_7);
}
