
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** data; int setpos; int less; } ;
typedef int Job ;
typedef TYPE_1__ Heap ;


 int FUNC_0 (int *,char*) ;
 int ** FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int **) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_8 (int,int ,int,int ,int ) ;

void
FUNC_9(int VAR_2)
{
    Heap VAR_3 = {
        .less = VAR_0,
        .setpos = VAR_1,
    };
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        Job *VAR_5 = FUNC_8(1, 0, 1, 0, 0);
        FUNC_0(VAR_5, "allocate job");
        FUNC_5(&VAR_3, VAR_5);
    }
    Job **VAR_6 = FUNC_1(VAR_2, sizeof(Job *));

    FUNC_2();
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_6[VAR_4] = (Job *)FUNC_6(&VAR_3, 0);
    }
    FUNC_3();

    FUNC_4(VAR_3.data);
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        FUNC_7(VAR_6[VAR_4]);
    FUNC_4(VAR_6);
}
