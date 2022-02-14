
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; char* member_1; } ;
typedef TYPE_1__ mdns_txt_item_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,char*,int,TYPE_1__*,int) ;
 int FUNC_8 (char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    char* VAR_2 = FUNC_3();

    FUNC_0( FUNC_5() );

    FUNC_0( FUNC_4(VAR_2) );
    FUNC_1(VAR_1, "mdns hostname set to: [%s]", VAR_2);

    FUNC_0( FUNC_6(VAR_0) );


    mdns_txt_item_t VAR_3[3] = {
        {"board","esp32"},
        {"u","user"},
        {"p","password"}
    };


    FUNC_0( FUNC_7("ESP32-WebServer", "_http", "_tcp", 80, VAR_3, 3) );

    FUNC_0( FUNC_8("_http", "_tcp", "path", "/foobar") );

    FUNC_0( FUNC_8("_http", "_tcp", "u", "admin") );
    FUNC_2(VAR_2);
}
