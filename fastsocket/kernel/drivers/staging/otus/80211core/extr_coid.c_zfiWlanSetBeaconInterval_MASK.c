
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef void* u16_t ;
struct TYPE_3__ {void* beaconInterval; } ;
struct TYPE_4__ {TYPE_1__ ws; void* beaconInterval; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_1,
                              u16_t VAR_2,
                              u8_t VAR_3)
{
    FUNC_2(VAR_1);

    FUNC_0();

    if ( VAR_3 )
    {
        FUNC_1(VAR_1);
        VAR_0->beaconInterval = VAR_2;
        FUNC_3(VAR_1);


    }
    else
    {
        FUNC_1(VAR_1);
        VAR_0->ws.beaconInterval = VAR_2;
        FUNC_3(VAR_1);
    }
}
