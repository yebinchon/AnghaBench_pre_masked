
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; int sa_mask; scalar_t__ sa_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (int ,struct sigaction*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5()
{
    struct sigaction VAR_6;

    VAR_6.sa_handler = VAR_3;
    VAR_6.sa_flags = 0;
    int VAR_7 = FUNC_3(&VAR_6.sa_mask);
    if (VAR_7 == -1) {
        FUNC_4("sigemptyset()");
        FUNC_0(111);
    }

    VAR_7 = FUNC_2(VAR_0, &VAR_6, 0);
    if (VAR_7 == -1) {
        FUNC_4("sigaction(SIGPIPE)");
        FUNC_0(111);
    }

    VAR_6.sa_handler = VAR_4;
    VAR_7 = FUNC_2(VAR_2, &VAR_6, 0);
    if (VAR_7 == -1) {
        FUNC_4("sigaction(SIGUSR1)");
        FUNC_0(111);
    }




    if (FUNC_1() == 1) {
        VAR_6.sa_handler = VAR_5;
        VAR_7 = FUNC_2(VAR_1, &VAR_6, 0);
        if (VAR_7 == -1) {
            FUNC_4("sigaction(SIGTERM)");
            FUNC_0(111);
        }
    }
}
