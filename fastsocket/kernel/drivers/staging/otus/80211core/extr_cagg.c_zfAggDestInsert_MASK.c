
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u16_t ;
struct dest {struct dest* next; void* vtxq; void* tid_tx; scalar_t__ Qtype; } ;
struct TYPE_2__ {struct dest** dest; struct dest** Head; } ;
typedef void* TID_TX ;


 TYPE_1__ VAR_0 ;
 struct dest* FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_1, u16_t VAR_2, u16_t VAR_3, TID_TX VAR_4, void* VAR_5)
{
    struct dest* VAR_6;
    FUNC_3(VAR_1);

    FUNC_1();

    VAR_6 = FUNC_0(VAR_1, sizeof(struct dest));
    if(!VAR_6)
    {
        return;
    }
    VAR_6->Qtype = VAR_2;
    VAR_6->tid_tx = VAR_4;
    if (0 == VAR_2)
        VAR_6->tid_tx = VAR_4;
    else
        VAR_6->vtxq = VAR_5;
    if (!VAR_0.Head[VAR_3]) {

        FUNC_2(VAR_1);
        VAR_6->next = VAR_6;
        VAR_0.Head[VAR_3] = VAR_0.dest[VAR_3] = VAR_6;
        FUNC_4(VAR_1);
    }
    else {

        FUNC_2(VAR_1);
        VAR_6->next = VAR_0.dest[VAR_3]->next;
        VAR_0.dest[VAR_3]->next = VAR_6;
        FUNC_4(VAR_1);
    }



    return;
}
