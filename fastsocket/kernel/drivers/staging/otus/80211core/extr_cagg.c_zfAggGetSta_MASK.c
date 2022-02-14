
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef scalar_t__ u16_t ;
struct TYPE_2__ {scalar_t__ wlanMode; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int) ;

u16_t FUNC_6(zdev_t* VAR_2, zbuf_t* VAR_3)
{
    u16_t VAR_4;
    u16_t VAR_5[3];

    FUNC_3(VAR_2);

    FUNC_1();

    VAR_5[0] = FUNC_5(VAR_2, VAR_3, 0);
    VAR_5[1] = FUNC_5(VAR_2, VAR_3, 2);
    VAR_5[2] = FUNC_5(VAR_2, VAR_3, 4);

    FUNC_2(VAR_2);

    if(VAR_1->wlanMode == VAR_0) {
        VAR_4 = FUNC_0(VAR_2, VAR_5);
    }
    else {
        VAR_4 = 0;
    }
    FUNC_4(VAR_2);





    return VAR_4;
}
