
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_5__ {int ibssSiteSurveyStatus; int ibssReceiveBeaconCount; int ReceivedPacketRateCounter; int ReceivedPktRatePerSecond; int TotalNumberOfReceivePackets; int avgSizeOfReceivePackets; int TotalNumberOfReceiveBytes; scalar_t__ NonNAPcount; int RTSInAGGMode; } ;
struct TYPE_4__ {scalar_t__ cw_enable; } ;
struct TYPE_6__ {int tick; scalar_t__ wlanMode; int tickIbssReceiveBeacon; TYPE_2__ sta; int modeMDKEnable; TYPE_1__ cwm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;

void FUNC_12(zdev_t* VAR_4)
{
    FUNC_11(VAR_4);

    VAR_3->tick++;
    if ((VAR_3->tick & 0xff) == 0)
    {
        FUNC_0(VAR_4, 1);
    }





    if ((VAR_3->tick % 10) == 9)
    {
        FUNC_3(VAR_4);






    }
    if ( VAR_3->wlanMode == VAR_2 )
    {
        if ( FUNC_8(VAR_4) )
        {
            VAR_3->tickIbssReceiveBeacon++;

            if ( (VAR_3->sta.ibssSiteSurveyStatus == 2) &&
                 (VAR_3->tickIbssReceiveBeacon == 300) &&
                 (VAR_3->sta.ibssReceiveBeaconCount < 3) )
            {
                FUNC_10("It is happen!!! No error message");
                FUNC_6(VAR_4);
            }
        }
    }

    if(VAR_3->sta.ReceivedPacketRateCounter <= 0)
    {
        VAR_3->sta.ReceivedPktRatePerSecond = VAR_3->sta.TotalNumberOfReceivePackets;

     if (VAR_3->sta.TotalNumberOfReceivePackets != 0)
     {
         VAR_3->sta.avgSizeOfReceivePackets = VAR_3->sta.TotalNumberOfReceiveBytes/VAR_3->sta.TotalNumberOfReceivePackets;
     }
     else
     {
         VAR_3->sta.avgSizeOfReceivePackets = 640;
     }
        VAR_3->sta.TotalNumberOfReceivePackets = 0;
        VAR_3->sta.TotalNumberOfReceiveBytes = 0;
        VAR_3->sta.ReceivedPacketRateCounter = 100;
    }
    else
    {
        VAR_3->sta.ReceivedPacketRateCounter--;
    }


 if((VAR_3->tick & 0x7f) == 0x3f)
 {
  if( VAR_3->sta.NonNAPcount > 0)
  {
   VAR_3->sta.RTSInAGGMode = VAR_1;
   VAR_3->sta.NonNAPcount = 0;
  }
  else
  {
   VAR_3->sta.RTSInAGGMode = VAR_0;
  }
 }




    FUNC_4(VAR_4);
    FUNC_5(VAR_4);




    FUNC_2(VAR_4);

}
