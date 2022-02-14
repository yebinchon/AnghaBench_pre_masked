
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef int u16_t ;
struct TYPE_5__ {size_t allowChannelCnt; TYPE_1__* allowChannel; } ;
struct TYPE_6__ {TYPE_2__ regulationTable; } ;
struct TYPE_4__ {int channel; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *) ;

u16_t FUNC_1(zdev_t* VAR_1)
{
    u8_t VAR_2;

    FUNC_0(VAR_1);

    for( VAR_2=0; VAR_2<VAR_0->regulationTable.allowChannelCnt; VAR_2++ )
    {
        if ( VAR_0->regulationTable.allowChannel[VAR_2].channel < 3000 )
        {

            return VAR_0->regulationTable.allowChannel[VAR_2].channel;
        }
    }


    return 0;
}
