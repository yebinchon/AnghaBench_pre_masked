
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u16_t ;
struct TYPE_2__ {scalar_t__* aggQPool; } ;
typedef scalar_t__ TID_TX ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u16_t FUNC_4(zdev_t* VAR_2, TID_TX VAR_3) {
    u16_t VAR_4, VAR_5 = 0;
    FUNC_2(VAR_2);

    FUNC_0();

    FUNC_1(VAR_2);
    for (VAR_4=0; VAR_4<VAR_0; VAR_4++)
    {
        if (VAR_1->aggQPool[VAR_4] == VAR_3)
        {
            VAR_5 = 1;
            break;
        }
        else {
        }
    }
    FUNC_3(VAR_2);

    return VAR_5;
}
