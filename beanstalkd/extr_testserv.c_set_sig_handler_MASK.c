
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; int sa_mask; scalar_t__ sa_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct sigaction*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4()
{
    struct sigaction VAR_2;

    VAR_2.sa_flags = 0;
    int VAR_3 = FUNC_2(&VAR_2.sa_mask);
    if (VAR_3 == -1) {
        FUNC_3("sigemptyset()");
        FUNC_0(111);
    }


    VAR_2.sa_handler = VAR_1;
    VAR_3 = FUNC_1(VAR_0, &VAR_2, 0);
    if (VAR_3 == -1) {
        FUNC_3("sigaction(SIGTERM)");
        FUNC_0(111);
    }
}
