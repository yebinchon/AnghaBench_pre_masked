
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_6__ {scalar_t__ count; TYPE_1__* entity; } ;
struct TYPE_7__ {scalar_t__ powerSaveMode; int staPSDataCount; int ** staPSDataQueue; int ibssPSDataCount; int ** ibssPSDataQueue; TYPE_2__ staPSList; } ;
struct TYPE_8__ {scalar_t__ wlanMode; TYPE_3__ sta; } ;
struct TYPE_5__ {void* bDataQueued; int macAddr; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 scalar_t__ FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;

u8_t FUNC_5(zdev_t* VAR_6, zbuf_t* VAR_7)
{
    u8_t VAR_8;
    u16_t VAR_9[3];

    FUNC_3(VAR_6);

    if ( !FUNC_2(VAR_6) )
    {
        return 0;
    }

    if ( VAR_5->wlanMode != VAR_2 )
    {
        return 0;
    }

    if ( VAR_5->sta.staPSList.count == 0 && VAR_5->sta.powerSaveMode <= VAR_3 )
    {
        return 0;
    }







    VAR_9[0] = FUNC_4(VAR_6, VAR_7, 0);
    VAR_9[1] = FUNC_4(VAR_6, VAR_7, 2);
    VAR_9[2] = FUNC_4(VAR_6, VAR_7, 4);


    if ( FUNC_0(VAR_9) )
    {
        VAR_5->sta.staPSList.entity[0].bDataQueued = VAR_0;
        VAR_5->sta.ibssPSDataQueue[VAR_5->sta.ibssPSDataCount++] = VAR_7;
        return 1;
    }



    for(VAR_8=1; VAR_8<VAR_1; VAR_8++)
    {
        if ( FUNC_1(VAR_5->sta.staPSList.entity[VAR_8].macAddr,
                             (u8_t*) VAR_9, 6) )
        {
            VAR_5->sta.staPSList.entity[VAR_8].bDataQueued = VAR_0;
            VAR_5->sta.ibssPSDataQueue[VAR_5->sta.ibssPSDataCount++] = VAR_7;

            return 1;
        }
    }
    return 0;
}
