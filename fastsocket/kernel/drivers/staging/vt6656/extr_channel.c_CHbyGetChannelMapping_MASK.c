
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t byChannelNumber; } ;
typedef size_t BYTE ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

BYTE FUNC_0(BYTE VAR_2)
{
BYTE VAR_3;
BYTE VAR_4 = 0;

    for (VAR_3=1; VAR_3<=VAR_0; VAR_3++ ) {
        if ( VAR_1[VAR_3].byChannelNumber == VAR_2 ) {
            VAR_4 = VAR_3;
        }
    }
    return VAR_4;
}
