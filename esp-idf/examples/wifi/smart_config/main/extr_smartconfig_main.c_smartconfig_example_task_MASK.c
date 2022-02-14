
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int smartconfig_start_config_t ;
typedef int EventBits_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,int,int,int ) ;

__attribute__((used)) static void FUNC_8(void * VAR_6)
{
    EventBits_t VAR_7;
    FUNC_0( FUNC_3(VAR_2) );
    smartconfig_start_config_t VAR_8 = FUNC_2();
    FUNC_0( FUNC_4(&VAR_8) );
    while (1) {
        VAR_7 = FUNC_7(VAR_5, VAR_0 | VAR_1, 1, 0, VAR_4);
        if(VAR_7 & VAR_0) {
            FUNC_1(VAR_3, "WiFi Connected to ap");
        }
        if(VAR_7 & VAR_1) {
            FUNC_1(VAR_3, "smartconfig over");
            FUNC_5();
            FUNC_6(((void*)0));
        }
    }
}
