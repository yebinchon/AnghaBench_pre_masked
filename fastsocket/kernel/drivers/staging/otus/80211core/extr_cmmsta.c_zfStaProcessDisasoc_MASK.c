
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef scalar_t__ u16_t ;
struct TYPE_3__ {scalar_t__* bssid; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ sta; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int *,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,scalar_t__) ;

void FUNC_5(zdev_t* VAR_5, zbuf_t* VAR_6)
{
    u16_t VAR_7[3];

    FUNC_3(VAR_5);


    if ( VAR_4->wlanMode == VAR_0 )
    {
        VAR_7[0] = FUNC_4(VAR_5, VAR_6, VAR_3);
        VAR_7[1] = FUNC_4(VAR_5, VAR_6, VAR_3+2);
        VAR_7[2] = FUNC_4(VAR_5, VAR_6, VAR_3+4);

        if ((VAR_7[0] == VAR_4->sta.bssid[0]) && (VAR_7[1] == VAR_4->sta.bssid[1]) && (VAR_7[2] == VAR_4->sta.bssid[2]))
        {
            if (FUNC_2(VAR_5, VAR_6) >= 24+2)
            {
                if ( FUNC_1(VAR_5) )
                {
                    FUNC_0(VAR_5, VAR_2, VAR_4->sta.bssid, 2);
                }
                else
                {
                    FUNC_0(VAR_5, VAR_1, VAR_4->sta.bssid, 3);
                }
            }
        }
    }
}
