
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u16_t ;
struct dest {void* vtxq; struct dest* next; TYPE_1__* tid_tx; } ;
struct TYPE_7__ {int ** dest; struct dest** Head; } ;
struct TYPE_6__ {scalar_t__ destLock; } ;
struct TYPE_5__ {int size; int aggTail; int aggHead; } ;
typedef TYPE_1__* TID_TX ;


 TYPE_4__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,struct dest*,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(zdev_t* VAR_2, u16_t VAR_3, TID_TX VAR_4, void* VAR_5)
{
    struct dest* VAR_6, *VAR_7;
    u16_t VAR_8;

    FUNC_4(VAR_2);

    FUNC_2();

    FUNC_3(VAR_2);
    if (VAR_1->destLock) {
        FUNC_5(VAR_2);
        return;
    }



    for (VAR_8=0; VAR_8<4; VAR_8++) {
        if (!VAR_0.Head[VAR_8]) continue;
        VAR_6 = VAR_0.Head[VAR_8];
        if (!VAR_6) continue;


        while (VAR_6 && (VAR_6->next != VAR_0.Head[VAR_8])) {
            if (VAR_3 == 0 && VAR_6->next->tid_tx == VAR_4){
                break;
            }
            if (VAR_3 == 1 && VAR_6->next->vtxq == VAR_5) {
                break;
            }
            VAR_6 = VAR_6->next;
        }

        if ((VAR_3 == 0 && VAR_6->next->tid_tx == VAR_4) || (VAR_3 == 1 && VAR_6->next->vtxq == VAR_5)) {

            VAR_4->size = FUNC_1(VAR_2, VAR_4->aggHead, VAR_4->aggTail);
            if (VAR_4->size) {
                FUNC_5(VAR_2);
                return;
            }
            if (!VAR_0.Head[VAR_8]) {
                VAR_7 = ((void*)0);
            }
            else {
                VAR_7 = VAR_6->next;
                if (VAR_7 == VAR_6) {
                    VAR_0.Head[VAR_8] = VAR_0.dest[VAR_8] = ((void*)0);

                }
                else {
                    VAR_6->next = VAR_6->next->next;
                }
            }

            if (VAR_7 == ((void*)0))
                { }
            else
                FUNC_0(VAR_2, VAR_7, sizeof(struct dest));






        }

    }
    FUNC_5(VAR_2);
    return;
}
