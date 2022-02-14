
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bssid_set; int bssid; int password; int ssid; } ;
struct TYPE_5__ {TYPE_1__ sta; } ;
typedef TYPE_2__ wifi_config_t ;
typedef int uint8_t ;
typedef scalar_t__ EventBits_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int,int ,int) ;

__attribute__((used)) static void FUNC_6(uint8_t *VAR_6)
{
    EventBits_t VAR_7;

    wifi_config_t VAR_8 = {
        .sta.ssid = VAR_1,
        .sta.password = VAR_0,
        .sta.bssid_set = 1,
    };

    FUNC_4(VAR_8.sta.bssid, VAR_6, 6);

    FUNC_1(FUNC_3(VAR_3, &VAR_8));
    FUNC_1(FUNC_2());
    VAR_7 = FUNC_5(VAR_5, VAR_2, 1, 0, 5000/VAR_4);
    FUNC_0(VAR_7 == VAR_2);
}
