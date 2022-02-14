
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int serviceTxtData ;
struct TYPE_3__ {char* member_0; char* member_1; } ;
typedef TYPE_1__ mdns_txt_item_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,char*,int,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
    FUNC_2();
    FUNC_1(VAR_0);
    FUNC_3(VAR_1);

    mdns_txt_item_t VAR_2[] = {
        {"board", "esp32"},
        {"path", "/"}
    };

    FUNC_0(FUNC_4("ESP32-WebServer", "_http", "_tcp", 80, VAR_2,
                                     sizeof(VAR_2) / sizeof(VAR_2[0])));
}
