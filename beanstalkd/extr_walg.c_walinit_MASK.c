
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tail; int cur; } ;
typedef TYPE_1__ Wal ;
typedef int Job ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(Wal *VAR_0, Job *VAR_1)
{
    int VAR_2;

    VAR_2 = FUNC_4(VAR_0);
    FUNC_3(VAR_0, VAR_1, VAR_2);


    if (!FUNC_1(VAR_0)) {
        FUNC_2("makenextfile");
        FUNC_0(1);
    }

    VAR_0->cur = VAR_0->tail;
}
