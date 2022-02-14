
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; int data; int setpos; int less; } ;
typedef int Job ;
typedef TYPE_1__ Heap ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_5 (int,int ,int,int ,int ) ;

void
FUNC_6()
{
    Heap VAR_2 = {
        .less = VAR_0,
        .setpos = VAR_1,
    };

    Job *VAR_3 = FUNC_5(1, 0, 1, 0, 0);
    FUNC_0(*VAR_3, "allocate job");

    int VAR_4 = FUNC_2(&VAR_2, VAR_3);
    FUNC_0(VAR_4, "insert should succeed");

    Job *VAR_5 = FUNC_3(&VAR_2, 0);
    FUNC_0(VAR_5 == VAR_3, "j1 should come back out");
    FUNC_0(VAR_2.len == 0, "h should be empty.");

    FUNC_1(VAR_2.data);
    FUNC_4(VAR_3);
}
