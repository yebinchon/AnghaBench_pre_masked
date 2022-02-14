
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pidfile; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 () ;
 TYPE_1__ VAR_0 ;

void FUNC_4(void) {

    FILE *VAR_1 = FUNC_1(VAR_0.pidfile,"w");
    if (VAR_1) {
        FUNC_2(VAR_1,"%d\n",(int)FUNC_3());
        FUNC_0(VAR_1);
    }
}
