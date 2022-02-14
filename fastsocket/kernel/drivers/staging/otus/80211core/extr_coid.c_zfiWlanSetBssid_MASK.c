
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_3__ {int bDesiredBssid; int * desiredBssid; } ;
struct TYPE_4__ {TYPE_1__ ws; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_2, u8_t* VAR_3)
{
    u16_t VAR_4;
    FUNC_2(VAR_2);

    FUNC_0();

    FUNC_1(VAR_2);
    for (VAR_4=0; VAR_4<6; VAR_4++)
    {
        VAR_1->ws.desiredBssid[VAR_4] = VAR_3[VAR_4];
    }
    VAR_1->ws.bDesiredBssid = VAR_0;
    FUNC_3(VAR_2);

}
