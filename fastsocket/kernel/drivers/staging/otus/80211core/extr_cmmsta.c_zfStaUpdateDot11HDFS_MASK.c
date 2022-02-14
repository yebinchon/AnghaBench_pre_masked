
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct TYPE_3__ {scalar_t__ DFSDisableTx; int rxBeaconCount; int currentFrequency; } ;
struct TYPE_4__ {TYPE_1__ sta; int frequency; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int) ;

void FUNC_10(zdev_t* VAR_4, zbuf_t* VAR_5)
{

    u16_t VAR_6;

    FUNC_8(VAR_4);
    if ( (VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_2)) == 0xffff )
    {

        return;
    }
    else if ( FUNC_9(VAR_4, VAR_5, VAR_6+1) == 0x3 )
    {
        FUNC_6("EID(Channel Switch Announcement) found");






        if (FUNC_9(VAR_4, VAR_5, VAR_6+2) == 0x1 )
        {


         if (VAR_3->sta.DFSDisableTx != VAR_1)
         {


                VAR_3->sta.DFSDisableTx = VAR_1;

                FUNC_4(VAR_4);
            }




        }

        if (FUNC_9(VAR_4, VAR_5, VAR_6+4) <= 0x2 )
        {







            FUNC_3(VAR_4, VAR_3->sta.currentFrequency);
         VAR_3->frequency = FUNC_0(VAR_4, FUNC_9(VAR_4, VAR_5, VAR_6+3), 0);

         FUNC_7("CWY - jump to frequency = ", VAR_3->frequency);
         FUNC_1(VAR_4, VAR_3->frequency);
         VAR_3->sta.DFSDisableTx = VAR_0;

            if (FUNC_5(VAR_4))
            {
                VAR_3->sta.rxBeaconCount = 1 << 6;
            }
        }
    }

}
