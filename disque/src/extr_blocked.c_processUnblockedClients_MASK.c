
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
struct TYPE_8__ {int flags; scalar_t__ querybuf; int btype; } ;
typedef TYPE_2__ client ;
struct TYPE_9__ {int unblocked_clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 TYPE_3__ VAR_3 ;
 int FUNC_5 (int ) ;

void FUNC_6(void) {
    listNode *VAR_4;
    client *VAR_5;

    while (FUNC_2(VAR_3.unblocked_clients)) {
        VAR_4 = FUNC_1(VAR_3.unblocked_clients);
        FUNC_5(VAR_4 != ((void*)0));
        VAR_5 = VAR_4->value;
        FUNC_0(VAR_3.unblocked_clients,VAR_4);
        VAR_5->flags &= ~VAR_2;




        if (!(VAR_5->flags & VAR_1)) {
            VAR_5->btype = VAR_0;


            if (VAR_5->querybuf && FUNC_4(VAR_5->querybuf) > 0) {
                FUNC_3(VAR_5);
            }
        }
    }
}
