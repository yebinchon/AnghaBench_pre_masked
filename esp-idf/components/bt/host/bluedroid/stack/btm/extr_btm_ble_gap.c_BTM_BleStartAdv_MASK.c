
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_2__ {int (* supports_ble ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;

tBTM_STATUS FUNC_4(void)
{
    tBTM_STATUS VAR_2 = VAR_1;
    if (!FUNC_2()->supports_ble()) {
        return VAR_0;
    }

    FUNC_1();

    VAR_2 = FUNC_0();

    return VAR_2;
}
