
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int status; int mac_addr; } ;
struct TYPE_5__ {TYPE_3__ send_cb; } ;
struct TYPE_6__ {int id; TYPE_1__ info; } ;
typedef TYPE_2__ example_espnow_event_t ;
typedef TYPE_3__ example_espnow_event_send_cb_t ;
typedef int esp_now_send_status_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int const*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4(const uint8_t *VAR_6, esp_now_send_status_t VAR_7)
{
    example_espnow_event_t VAR_8;
    example_espnow_event_send_cb_t *VAR_9 = &VAR_8.info.send_cb;

    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_2, "Send cb arg error");
        return;
    }

    VAR_8.id = VAR_1;
    FUNC_2(VAR_9->mac_addr, VAR_6, VAR_0);
    VAR_9->status = VAR_7;
    if (FUNC_3(VAR_5, &VAR_8, VAR_4) != VAR_3) {
        FUNC_1(VAR_2, "Send send queue fail");
    }
}
