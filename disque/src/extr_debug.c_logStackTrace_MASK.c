
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ucontext_t ;
struct TYPE_2__ {char* logfile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void**,int) ;
 int FUNC_1 (void**,int,int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int) ;
 TYPE_1__ VAR_4 ;

void FUNC_5(ucontext_t *VAR_5) {
    void *VAR_6[100];
    int VAR_7 = 0, VAR_8;
    int VAR_9 = VAR_4.logfile[0] == '\0';


    VAR_8 = VAR_9 ?
        VAR_3 :
        FUNC_4(VAR_4.logfile, VAR_0|VAR_1|VAR_2, 0644);
    if (VAR_8 == -1) return;


    VAR_7 = FUNC_0(VAR_6, 100);


    if (FUNC_3(VAR_5) != ((void*)0))
        VAR_6[1] = FUNC_3(VAR_5);


    FUNC_1(VAR_6, VAR_7, VAR_8);


    if (!VAR_9) FUNC_2(VAR_8);
}
