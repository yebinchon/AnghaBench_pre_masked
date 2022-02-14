
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct TYPE_2__ {int frequency; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(zdev_t* VAR_1, u8_t VAR_2, u16_t VAR_3, u8_t VAR_4)
{
    FUNC_6(VAR_1);

    FUNC_4();

    if (VAR_2)
    {

        FUNC_2(VAR_1, VAR_3);
    }
    else
    {

        FUNC_3(VAR_1, VAR_3);
    }

    if (VAR_4) {
        FUNC_5(VAR_1);
        VAR_0->frequency = FUNC_0(VAR_1, ((void*)0));
        FUNC_7(VAR_1);
        FUNC_1(VAR_1, VAR_0->frequency);
    }
}
