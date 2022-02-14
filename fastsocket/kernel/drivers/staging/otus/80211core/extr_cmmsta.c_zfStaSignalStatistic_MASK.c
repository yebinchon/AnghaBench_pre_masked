
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_2__ {int SignalStrength; int SignalQuality; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t* VAR_1, u8_t VAR_2, u8_t VAR_3)
{
    FUNC_0(VAR_1);


    VAR_0->SignalStrength = (VAR_0->SignalStrength * 7 + VAR_2 * 3)/10;
    VAR_0->SignalQuality = (VAR_0->SignalQuality * 7 + VAR_3 * 3)/10;

}
