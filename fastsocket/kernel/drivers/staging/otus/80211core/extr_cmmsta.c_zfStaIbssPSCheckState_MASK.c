
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
struct TYPE_6__ {scalar_t__ count; TYPE_1__* entity; } ;
struct TYPE_7__ {TYPE_2__ staPSList; scalar_t__ bssid; } ;
struct TYPE_8__ {scalar_t__ wlanMode; TYPE_3__ sta; } ;
struct TYPE_5__ {int* macAddr; void* bDataQueued; void* bUsed; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* VAR_7 ;
 int FUNC_0 (int *,int *,int*,int ,int) ;
 scalar_t__ FUNC_1 (int *,int *,int*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;

void FUNC_5(zdev_t* VAR_8, zbuf_t* VAR_9)
{
    u8_t VAR_10, VAR_11;

    FUNC_3(VAR_8);

    if ( !FUNC_2(VAR_8) )
    {
        return;
    }

    if ( VAR_7->wlanMode != VAR_4 )
    {
        return ;
    }


    if ( !FUNC_1(VAR_8, VAR_9, (u8_t*) VAR_7->sta.bssid,
                               VAR_6, 6) )
    {
        return;
    }

    VAR_11 = FUNC_4(VAR_8, VAR_9, 1);


    if ( VAR_11 & VAR_2 )
    {
        for(VAR_10=1; VAR_10<VAR_3; VAR_10++)
        {
            if ( !VAR_7->sta.staPSList.entity[VAR_10].bUsed )
            {
                continue;
            }


            if ( FUNC_1(VAR_8, VAR_9,
                                      VAR_7->sta.staPSList.entity[VAR_10].macAddr,
                                      VAR_5, 6) )
            {
                return;
            }
        }

        for(VAR_10=1; VAR_10<VAR_3; VAR_10++)
        {
            if ( !VAR_7->sta.staPSList.entity[VAR_10].bUsed )
            {
                VAR_7->sta.staPSList.entity[VAR_10].bUsed = VAR_1;
                VAR_7->sta.staPSList.entity[VAR_10].bDataQueued = VAR_0;
                break;
            }
        }

        if ( VAR_10 == VAR_3 )
        {

            return;
        }

        FUNC_0(VAR_8, VAR_9, VAR_7->sta.staPSList.entity[VAR_10].macAddr,
                           VAR_5, 6);

        if ( VAR_7->sta.staPSList.count == 0 )
        {


        }

        VAR_7->sta.staPSList.count++;
    }
    else if ( VAR_7->sta.staPSList.count )
    {
        for(VAR_10=1; VAR_10<VAR_3; VAR_10++)
        {
            if ( VAR_7->sta.staPSList.entity[VAR_10].bUsed )
            {
                if ( FUNC_1(VAR_8, VAR_9,
                                          VAR_7->sta.staPSList.entity[VAR_10].macAddr,
                                          VAR_5, 6) )
                {
                    VAR_7->sta.staPSList.entity[VAR_10].bUsed = VAR_0;
                    VAR_7->sta.staPSList.count--;

                    if ( VAR_7->sta.staPSList.entity[VAR_10].bDataQueued )
                    {

                    }
                }
            }
        }

        if ( VAR_7->sta.staPSList.count == 0 )
        {


        }

    }
}
