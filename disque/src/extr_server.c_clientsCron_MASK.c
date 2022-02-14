
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int listNode ;
typedef int client ;
struct TYPE_2__ {int hz; int mstime; int clients; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 TYPE_1__ VAR_1 ;

void FUNC_9(void) {




    int VAR_2 = FUNC_5(VAR_1.clients);
    int VAR_3 = VAR_2/VAR_1.hz;
    VAR_1.mstime = FUNC_8();




    if (VAR_3 < VAR_0)
        VAR_3 = (VAR_2 < VAR_0) ?
                     VAR_2 : VAR_0;

    while(FUNC_5(VAR_1.clients) && VAR_3--) {
        client *VAR_4;
        listNode *VAR_5;




        FUNC_7(VAR_1.clients);
        VAR_5 = FUNC_4(VAR_1.clients);
        VAR_4 = FUNC_6(VAR_5);



        if (FUNC_1(VAR_4,VAR_1.mstime)) continue;
        if (FUNC_2(VAR_4)) continue;
        if (FUNC_0(VAR_4)) continue;
        if (FUNC_3(VAR_4)) continue;
    }
}
