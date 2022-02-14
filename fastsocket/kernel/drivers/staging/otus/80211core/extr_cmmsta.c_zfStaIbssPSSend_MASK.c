
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef int u16_t ;
struct TYPE_6__ {TYPE_1__* entity; } ;
struct TYPE_7__ {size_t ibssPSDataCount; size_t ibssPrevPSDataCount; int * ibssPSDataQueue; TYPE_2__ staPSList; } ;
struct TYPE_8__ {scalar_t__ wlanMode; TYPE_3__ sta; } ;
struct TYPE_5__ {scalar_t__ bDataQueued; scalar_t__ macAddr; scalar_t__ bUsed; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_0 (int *,int ,int*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_6)
{
    u8_t VAR_7;
    u16_t VAR_8[3] = {0xffff, 0xffff, 0xffff};

    FUNC_3(VAR_6);

    if ( !FUNC_1(VAR_6) )
    {
        return ;
    }

    if ( VAR_5->wlanMode != VAR_3 )
    {
        return ;
    }

    for(VAR_7=0; VAR_7<VAR_2; VAR_7++)
    {
        if ( VAR_5->sta.staPSList.entity[VAR_7].bDataQueued )
        {
            if ( VAR_7 == 0 )
            {
                FUNC_0(VAR_6, VAR_4,
                              VAR_8,
                              0, 0, 0);
            }
            else if ( VAR_5->sta.staPSList.entity[VAR_7].bUsed )
            {

                FUNC_0(VAR_6, VAR_4,
                              (u16_t*) VAR_5->sta.staPSList.entity[VAR_7].macAddr,
                              0, 0, 0);
            }

            VAR_5->sta.staPSList.entity[VAR_7].bDataQueued = VAR_0;
        }
    }

    for(VAR_7=0; VAR_7<VAR_5->sta.ibssPSDataCount; VAR_7++)
    {
        FUNC_2(VAR_6, VAR_5->sta.ibssPSDataQueue[VAR_7], 0,
                    VAR_1, 0);
    }

    VAR_5->sta.ibssPrevPSDataCount = VAR_5->sta.ibssPSDataCount;
    VAR_5->sta.ibssPSDataCount = 0;
}
