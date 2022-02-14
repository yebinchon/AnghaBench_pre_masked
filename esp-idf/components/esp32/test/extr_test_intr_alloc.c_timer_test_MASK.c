
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timer_isr_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_6 ;
 int FUNC_6 (char*,...) ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,int ,void*,int,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(int VAR_8) {
    int VAR_9;
    timer_isr_handle_t VAR_10[4];
    FUNC_5(VAR_3, VAR_1, 110000);
    FUNC_5(VAR_3, VAR_2, 120000);
    FUNC_5(VAR_4, VAR_1, 130000);
    FUNC_5(VAR_4, VAR_2, 140000);
    FUNC_7(VAR_3, VAR_1, VAR_7, (void*)0, VAR_8|VAR_0, &VAR_10[0]);
    FUNC_7(VAR_3, VAR_2, VAR_7, (void*)1, VAR_8, &VAR_10[1]);
    FUNC_7(VAR_4, VAR_1, VAR_7, (void*)2, VAR_8, &VAR_10[2]);
    FUNC_7(VAR_4, VAR_2, VAR_7, (void*)3, VAR_8, &VAR_10[3]);
    FUNC_8(VAR_3, VAR_1);
    FUNC_8(VAR_3, VAR_2);
    FUNC_8(VAR_4, VAR_1);
    FUNC_8(VAR_4, VAR_2);

    for (VAR_9=0; VAR_9<4; VAR_9++) VAR_5[VAR_9]=0;
    FUNC_6("Interrupts allocated: %d (dis) %d %d %d\n",
            FUNC_4(VAR_10[0]), FUNC_4(VAR_10[1]),
            FUNC_4(VAR_10[2]), FUNC_4(VAR_10[3]));
    FUNC_6("Timer values on start: %d %d %d %d\n", VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
    FUNC_9(1000 / VAR_6);
    FUNC_6("Timer values after 1 sec: %d %d %d %d\n", VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
    FUNC_0(VAR_5[0]==0);
    FUNC_0(VAR_5[1]!=0);
    FUNC_0(VAR_5[2]!=0);
    FUNC_0(VAR_5[3]!=0);

    FUNC_6("Disabling timers 1 and 2...\n");
    FUNC_2(VAR_10[0]);
    FUNC_1(VAR_10[1]);
    FUNC_1(VAR_10[2]);
    for (VAR_9=0; VAR_9<4; VAR_9++) VAR_5[VAR_9]=0;
    FUNC_9(1000 / VAR_6);
    FUNC_6("Timer values after 1 sec: %d %d %d %d\n", VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
    FUNC_0(VAR_5[0]!=0);
    FUNC_0(VAR_5[1]==0);
    FUNC_0(VAR_5[2]==0);
    FUNC_0(VAR_5[3]!=0);
    FUNC_6("Disabling other half...\n");
    FUNC_2(VAR_10[1]);
    FUNC_2(VAR_10[2]);
    FUNC_1(VAR_10[0]);
    FUNC_1(VAR_10[3]);
    for (VAR_9=0; VAR_9<4; VAR_9++) VAR_5[VAR_9]=0;
    FUNC_9(1000 / VAR_6);
    FUNC_6("Timer values after 1 sec: %d %d %d %d\n", VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
    FUNC_0(VAR_5[0]==0);
    FUNC_0(VAR_5[1]!=0);
    FUNC_0(VAR_5[2]!=0);
    FUNC_0(VAR_5[3]==0);
    FUNC_6("Done.\n");
    FUNC_3(VAR_10[0]);
    FUNC_3(VAR_10[1]);
    FUNC_3(VAR_10[2]);
    FUNC_3(VAR_10[3]);
}
