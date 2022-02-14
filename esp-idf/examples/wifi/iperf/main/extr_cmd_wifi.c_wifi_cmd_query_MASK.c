
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wifi_mode_t ;
struct TYPE_4__ {int ssid; int password; } ;
struct TYPE_5__ {TYPE_1__ ap; } ;
typedef TYPE_2__ wifi_config_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (scalar_t__*) ;
 int VAR_6 ;
 int FUNC_3 (int ,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_7, char** VAR_8)
{
    wifi_config_t VAR_9;
    wifi_mode_t VAR_10;

    FUNC_2(&VAR_10);
    if (VAR_4 == VAR_10) {
        FUNC_1(VAR_2, &VAR_9);
        FUNC_0(VAR_1, "AP mode, %s %s", VAR_9.ap.ssid, VAR_9.ap.password);
    } else if (VAR_5 == VAR_10) {
        int VAR_11 = FUNC_3(VAR_6, VAR_0, 0, 1, 0);
        if (VAR_11 & VAR_0) {
            FUNC_1(VAR_3, &VAR_9);
            FUNC_0(VAR_1, "sta mode, connected %s", VAR_9.ap.ssid);
        } else {
            FUNC_0(VAR_1, "sta mode, disconnected");
        }
    } else {
        FUNC_0(VAR_1, "NULL mode");
        return 0;
    }

    return 0;
}
