
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intr_handle_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int,scalar_t__) ;

void FUNC_10(void)
{
    intr_handle_t VAR_6;
    esp_err_t VAR_7;
    VAR_7=FUNC_1(VAR_2, 0, VAR_4, ((void*)0), &VAR_6);
    FUNC_0(VAR_7==VAR_1);
    FUNC_6("Int timer 1 intno %d\n", FUNC_5(VAR_6));
    FUNC_9(1, FUNC_8()+8000000);
    VAR_3=0;
    FUNC_7(1000 / VAR_5);
    FUNC_6("Timer val after 1 sec: %d\n", VAR_3);
    FUNC_0(VAR_3!=0);
    FUNC_6("Disabling int\n");
    FUNC_2(VAR_6);
    VAR_3=0;
    FUNC_7(1000 / VAR_5);
    FUNC_6("Timer val after 1 sec: %d\n", VAR_3);
    FUNC_0(VAR_3==0);
    FUNC_6("Re-enabling\n");
    FUNC_3(VAR_6);
    FUNC_7(1000 / VAR_5);
    FUNC_6("Timer val after 1 sec: %d\n", VAR_3);
    FUNC_0(VAR_3!=0);

    FUNC_6("Free int, re-alloc disabled\n");
    VAR_7=FUNC_4(VAR_6);
    FUNC_0(VAR_7==VAR_1);
    VAR_7=FUNC_1(VAR_2, VAR_0, VAR_4, ((void*)0), &VAR_6);
    FUNC_0(VAR_7==VAR_1);
    VAR_3=0;
    FUNC_7(1000 / VAR_5);
    FUNC_6("Timer val after 1 sec: %d\n", VAR_3);
    FUNC_0(VAR_3==0);
    FUNC_6("Re-enabling\n");
    FUNC_3(VAR_6);
    FUNC_7(1000 / VAR_5);
    FUNC_6("Timer val after 1 sec: %d\n", VAR_3);
    FUNC_0(VAR_3!=0);
    VAR_7=FUNC_4(VAR_6);
    FUNC_0(VAR_7==VAR_1);
    FUNC_6("Done.\n");
}
