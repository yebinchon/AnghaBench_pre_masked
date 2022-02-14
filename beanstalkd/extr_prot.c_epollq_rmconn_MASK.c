
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ Conn ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_0(Conn *VAR_1)
{
    Conn *VAR_2, *VAR_3 = ((void*)0);

    while (VAR_0) {

        VAR_2 = VAR_0;
        VAR_0 = VAR_0->next;
        VAR_2->next = ((void*)0);


        if (VAR_2 != VAR_1) {
            VAR_2->next = VAR_3;
            VAR_3 = VAR_2;
        }
    }
    VAR_0 = VAR_3;
}
