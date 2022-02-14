
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u16_t ;
struct dest {scalar_t__ tid_tx; struct dest* next; } ;
struct TYPE_2__ {struct dest** Head; } ;
typedef scalar_t__ TID_TX ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u16_t FUNC_4(zdev_t* VAR_1, u16_t VAR_2, u16_t VAR_3, TID_TX VAR_4, void* VAR_5) {
    struct dest* VAR_6;
    u16_t VAR_7 = 0;
    FUNC_2(VAR_1);

    FUNC_0();

    FUNC_1(VAR_1);
    if (!VAR_0.Head[VAR_3]) {
        VAR_7 = 0;
    }
    else {
        VAR_6 = VAR_0.Head[VAR_3];
        if (VAR_6->tid_tx == VAR_4) {
            VAR_7 = 1;
        }
        else {
            while (VAR_6->next != VAR_0.Head[VAR_3]) {
                VAR_6 = VAR_6->next;
                if (VAR_6->tid_tx == VAR_4){
                    VAR_7 = 1;
                    break;
                }
            }
        }
    }

    FUNC_3(VAR_1);

    return VAR_7;
}
