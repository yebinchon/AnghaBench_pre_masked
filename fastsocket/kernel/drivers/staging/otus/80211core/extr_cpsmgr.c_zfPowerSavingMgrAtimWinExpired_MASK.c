
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {scalar_t__ powerSaveMode; scalar_t__ ibssPrevPSDataCount; scalar_t__ txBeaconInd; scalar_t__ recvAtim; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_2)
{
    FUNC_2(VAR_2);


    if ( VAR_1->sta.powerSaveMode == VAR_0 )
    {
        return;
    }




    if ( VAR_1->sta.recvAtim )
    {
        VAR_1->sta.recvAtim = 0;
        FUNC_1("Can't sleep due to receving ATIM window!");
        return;
    }



    if ( VAR_1->sta.txBeaconInd )
    {
        FUNC_1("Can't sleep due to just transmit a beacon!");
        return;
    }


    if ( VAR_1->sta.ibssPrevPSDataCount != 0 )
    {
        FUNC_1("Can't sleep due to buffering data for the others!");
        return;
    }



    FUNC_0(VAR_2);
}
