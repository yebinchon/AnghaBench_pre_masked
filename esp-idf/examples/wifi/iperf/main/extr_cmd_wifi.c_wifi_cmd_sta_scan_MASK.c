
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ssid; int member_0; } ;
typedef TYPE_1__ wifi_scan_config_t ;
typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const char* VAR_1)
{
    wifi_scan_config_t VAR_2 = { 0 };
    VAR_2.ssid = (uint8_t *) VAR_1;

    FUNC_0( FUNC_2(VAR_0) );
    FUNC_0( FUNC_1(&VAR_2, 0) );

    return 1;
}
