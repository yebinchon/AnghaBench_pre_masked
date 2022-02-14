
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {scalar_t__ rxBeaconCount; int beaconMissState; int bssid; } ;
struct TYPE_4__ {scalar_t__ wlanMode; int beaconInterval; int tick; TYPE_1__ sta; int ExtOffset; int BandWidth40; int frequency; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ,int *,int) ;
 int FUNC_1 (int *,int ,int ,int,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_5)
{
    FUNC_4(VAR_5);

    if (( VAR_4->wlanMode == VAR_0 ) && (FUNC_3(VAR_5)))
    {
        if (VAR_4->beaconInterval == 0)
        {
            VAR_4->beaconInterval = 100;
        }
        if ( (VAR_4->tick % ((VAR_4->beaconInterval * 10) / VAR_1)) == 0 )
        {

            if (VAR_4->sta.rxBeaconCount == 0)
            {
                if (VAR_4->sta.beaconMissState == 1)
                {

             FUNC_1(VAR_5, VAR_3, VAR_4->sta.bssid, 3, 0, 0);

                FUNC_2(VAR_5, VAR_2,
                        VAR_4->sta.bssid, 0);
                }
                else
                {
                    VAR_4->sta.beaconMissState = 1;

                    FUNC_0(VAR_5, VAR_4->frequency, VAR_4->BandWidth40,
                            VAR_4->ExtOffset, ((void*)0), 1);
                }
            }
            else
            {
                VAR_4->sta.beaconMissState = 0;
            }
            VAR_4->sta.rxBeaconCount = 0;
        }
    }
}
