
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ucontext_t ;
struct sigaction {int sa_flags; int sa_handler; int sa_mask; } ;
typedef int siginfo_t ;
typedef int sds ;
struct TYPE_2__ {int pidfile; scalar_t__ daemonize; int assert_line; int assert_file; int assert_failed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int,struct sigaction*,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;

void FUNC_19(int VAR_7, siginfo_t *VAR_8, void *VAR_9) {
    ucontext_t *VAR_10 = (ucontext_t*) VAR_9;
    sds VAR_11, VAR_12;
    struct sigaction VAR_13;
    FUNC_0(VAR_8);

    FUNC_2();
    FUNC_14(VAR_1,
        "    Disque %s crashed by signal: %d", VAR_0, VAR_7);
    FUNC_14(VAR_1,
        "    Failed assertion: %s (%s:%d)", VAR_6.assert_failed,
                        VAR_6.assert_file, VAR_6.assert_line);


    FUNC_14(VAR_1, "--- STACK TRACE");
    FUNC_10(VAR_10);


    FUNC_14(VAR_1, "--- INFO OUTPUT");
    VAR_11 = FUNC_4("all");
    VAR_11 = FUNC_12(VAR_11, "hash_init_value: %u\n",
        FUNC_3());
    FUNC_15(VAR_1, VAR_11);
    FUNC_14(VAR_1, "--- CLIENT LIST OUTPUT");
    VAR_12 = FUNC_5();
    FUNC_15(VAR_1, VAR_12);
    FUNC_13(VAR_11);
    FUNC_13(VAR_12);


    FUNC_8();


    FUNC_9(VAR_10);
    FUNC_14(VAR_1,
"\n=== DISQUE BUG REPORT END. Make sure to include from START to END. ===\n\n"
"       Please report the crash by opening an issue on github:\n\n"
"           http://github.com/antirez/disque/issues\n\n"
"  Suspect RAM error? Use disque-server --test-memory to verify it.\n\n"
);

    if (VAR_6.daemonize) FUNC_18(VAR_6.pidfile);



    FUNC_17 (&VAR_13.sa_mask);
    VAR_13.sa_flags = VAR_2 | VAR_3 | VAR_4;
    VAR_13.sa_handler = VAR_5;
    FUNC_16 (VAR_7, &VAR_13, ((void*)0));
    FUNC_7(FUNC_6(),VAR_7);
}
