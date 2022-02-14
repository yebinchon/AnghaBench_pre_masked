
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (char*,char*,int) ;

int FUNC_8(int VAR_6, char *VAR_7[])
{
    VAR_4 = FUNC_5("/dev/watchdog", VAR_0);

    if (VAR_4 == -1) {
 FUNC_2(VAR_5, "Watchdog device not enabled.\n");
 FUNC_1(VAR_5);
 FUNC_0(-1);
    }

    if (VAR_6 > 1) {
 if (!FUNC_7(VAR_7[1], "-d", 2)) {
     FUNC_3(VAR_4, VAR_1, VAR_2);
     FUNC_2(VAR_5, "Watchdog card disabled.\n");
     FUNC_1(VAR_5);
     FUNC_0(0);
 } else if (!FUNC_7(VAR_7[1], "-e", 2)) {
     FUNC_3(VAR_4, VAR_1, VAR_3);
     FUNC_2(VAR_5, "Watchdog card enabled.\n");
     FUNC_1(VAR_5);
     FUNC_0(0);
 } else {
     FUNC_2(VAR_5, "-d to disable, -e to enable.\n");
     FUNC_2(VAR_5, "run by itself to tick the card.\n");
     FUNC_1(VAR_5);
     FUNC_0(0);
 }
    } else {
 FUNC_2(VAR_5, "Watchdog Ticking Away!\n");
 FUNC_1(VAR_5);
    }

    while(1) {
 FUNC_4();
 FUNC_6(1);
    }
}
