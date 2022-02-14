
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int listNode ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {int clients_to_close; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 TYPE_2__ VAR_1 ;

void FUNC_5(void) {
    while (FUNC_3(VAR_1.clients_to_close)) {
        listNode *VAR_2 = FUNC_2(VAR_1.clients_to_close);
        client *VAR_3 = FUNC_4(VAR_2);

        VAR_3->flags &= ~VAR_0;
        FUNC_0(VAR_3);
        FUNC_1(VAR_1.clients_to_close,VAR_2);
    }
}
