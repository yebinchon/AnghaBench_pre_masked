
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_10 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

void FUNC_7(void)
{

    FUNC_1();



    int VAR_11[VAR_2];
    for (int VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
        int VAR_13 = (VAR_12 % 2 == 0) ? VAR_7 : VAR_8;
        int VAR_14 = (VAR_12 % 3 == 0) ? VAR_6 : VAR_5;
        VAR_11[VAR_12] = FUNC_3(VAR_14, VAR_13, VAR_4);
    }
    for (int VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
        FUNC_0(VAR_11[VAR_15]);
    }


    FUNC_6(25 / VAR_10);

    FUNC_2("Note: esp_netif_init() has been called. Until next reset, TCP/IP task will periodicially allocate memory and consume CPU time.\n");


    FUNC_5();
    FUNC_4(0, VAR_9, VAR_0);
    FUNC_4(VAR_3, VAR_9, VAR_1);
}
