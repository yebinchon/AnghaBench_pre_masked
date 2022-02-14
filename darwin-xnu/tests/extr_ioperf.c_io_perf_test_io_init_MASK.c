
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int VAR_12 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (int,int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,int,int ) ;
 int FUNC_12 (int*,char* const,int *,int *,char* const*,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ,struct sched_param*) ;
 scalar_t__ FUNC_15 (int,int ,int) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int,int*,int ) ;
 scalar_t__ FUNC_19 (int,int ,int) ;

__attribute__((used)) static void
FUNC_20(void)
{
    int VAR_15, VAR_16;
    char *const VAR_17[] = {"/usr/local/sbin/mount_nand.sh", ((void*)0)};
    VAR_15 = FUNC_12(&VAR_16, VAR_17[0], ((void*)0), ((void*)0), VAR_17, VAR_14);
    if (VAR_15 < 0) {
 FUNC_5("NAND mounting in LTE not possible on this device. Skipping test!");
    }
    FUNC_18(VAR_16, &VAR_15, 0);
    if (FUNC_7(VAR_15) && !FUNC_6(VAR_15)) {
        FUNC_4("NAND mounted successfully");
    } else {
        FUNC_5("Unable to mount NAND. Skipping test!");
    }


    struct sched_param VAR_18 = {.sched_priority = VAR_11};
    FUNC_3(FUNC_14(FUNC_13(), VAR_9, &VAR_18),
            "pthread_setschedparam");


    FUNC_3(FUNC_16(VAR_4, VAR_3,
            VAR_2), "setiopolicy");


    VAR_13 = FUNC_10(VAR_5 * 16);
    FUNC_1(VAR_13, "Data buffer allocation");

    int VAR_19 = FUNC_11("/dev/urandom", VAR_7, VAR_10);
    FUNC_2(VAR_19, "Open /dev/urandom");
    FUNC_0((int)FUNC_15(VAR_19, VAR_13, VAR_5 * 16), 0, "read /dev/urandom");
    FUNC_8(VAR_19);


    int VAR_20 = FUNC_11("/mnt2/test", VAR_6 | VAR_8, VAR_10);
    FUNC_2(VAR_20, 0, "Open /mnt2/test for writing!");

    FUNC_3(FUNC_9(VAR_20, VAR_1, 1), "fcntl F_NOCACHE enable");
    for (int VAR_21 = 0; VAR_21 < VAR_0;) {
        VAR_12;
        FUNC_0((int)FUNC_19(VAR_20, VAR_13, VAR_5 * 16), 0, "write test file");
        VAR_21 += (VAR_5 * 16);
    }
    FUNC_8(VAR_20);
    FUNC_17();

}
