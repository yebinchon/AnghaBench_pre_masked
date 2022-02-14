
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ password; scalar_t__ ssid; } ;
struct TYPE_5__ {TYPE_1__ sta; int member_0; } ;
typedef TYPE_2__ wifi_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,char const*,int) ;
 int VAR_6 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int ,int,int) ;

__attribute__((used)) static bool FUNC_8(const char* VAR_7, const char* VAR_8)
{
    int VAR_9 = FUNC_7(VAR_6, VAR_0, 0, 1, 0);

    wifi_config_t VAR_10 = { 0 };

    FUNC_5((char*) VAR_10.sta.ssid, VAR_7, sizeof(VAR_10.sta.ssid));
    if (VAR_8) {
        FUNC_5((char*) VAR_10.sta.password, VAR_8, sizeof(VAR_10.sta.password));
    }

    if (VAR_9 & VAR_0) {
        VAR_5 = 0;
        FUNC_6(VAR_6, VAR_0);
        FUNC_0( FUNC_2() );
        FUNC_7(VAR_6, VAR_1, 0, 1, VAR_4);
    }

    VAR_5 = 1;
    FUNC_0( FUNC_4(VAR_3) );
    FUNC_0( FUNC_3(VAR_2, &VAR_10) );
    FUNC_0( FUNC_1() );

    FUNC_7(VAR_6, VAR_0, 0, 1, 5000/VAR_4);

    return 1;
}
