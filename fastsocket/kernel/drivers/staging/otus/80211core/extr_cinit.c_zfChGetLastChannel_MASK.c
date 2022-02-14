
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
struct TYPE_4__ {int channelFlags; int channel; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int *) ;

u16_t FUNC_1(zdev_t* VAR_4, u8_t* VAR_5)
{
    u8_t VAR_6;
    u8_t VAR_7;

    FUNC_0(VAR_4);

    VAR_7 = VAR_3->regulationTable.allowChannelCnt-1;


    if ( VAR_5 == ((void*)0) )
    {
        VAR_5 = &VAR_6;
    }

    if ( VAR_3->regulationTable.allowChannel[VAR_7].channelFlags
            & VAR_2 )
    {
        *VAR_5 = VAR_1;
    }
    else
    {
        *VAR_5 = VAR_0;
    }

    return VAR_3->regulationTable.allowChannel[VAR_7].channel;
}
