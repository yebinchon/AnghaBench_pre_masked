
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ password; scalar_t__ ssid; } ;
typedef TYPE_1__ wifi_sta_config_t ;


 int FUNC_0 (int ,char*,char const*,char const*,...) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,char,size_t) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int) ;

__attribute__((used)) static void FUNC_4(wifi_sta_config_t VAR_1, const char* VAR_2)
{
    size_t VAR_3 = FUNC_2((const char*) VAR_1.password);
    FUNC_0(VAR_0, "%s Wi-Fi SSID     : %.*s", VAR_2,
             FUNC_3((const char *) VAR_1.ssid, sizeof(VAR_1.ssid)), (const char *) VAR_1.ssid);

    if (VAR_3) {

        FUNC_1(VAR_1.password + (VAR_3 > 3), '*', VAR_3 - 2*(VAR_3 > 3));
        FUNC_0(VAR_0, "%s Wi-Fi Password : %s", VAR_2, (const char *) VAR_1.password);
    }
}
