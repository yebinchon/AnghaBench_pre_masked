
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rw; int sock; struct TYPE_4__* next; } ;
typedef TYPE_1__ Conn ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3()
{
    Conn *VAR_1;

    while (VAR_0) {
        VAR_1 = VAR_0;
        VAR_0 = VAR_0->next;
        VAR_1->next = ((void*)0);
        int VAR_2 = FUNC_1(&VAR_1->sock, VAR_1->rw);
        if (VAR_2 == -1) {
            FUNC_2("sockwant");
            FUNC_0(VAR_1);
        }
    }
}
