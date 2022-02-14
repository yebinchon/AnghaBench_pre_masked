
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_3__ {scalar_t__ bProtectionMode; int NonNAPcount; int bssid; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ sta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int *,int*,int ,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;

void FUNC_7(zdev_t* VAR_9, zbuf_t* VAR_10)
{
    u16_t VAR_11;
    u8_t VAR_12;
    u8_t VAR_13[6];

    FUNC_5(VAR_9);

    if ( (VAR_8->wlanMode == VAR_3)&&(FUNC_4(VAR_9)) )
    {
        FUNC_0(VAR_8->sta.bssid, VAR_13);

        if (FUNC_3(VAR_9, VAR_10, VAR_13, VAR_6, 6))
        {
            if ( (VAR_11=FUNC_1(VAR_9, VAR_10, VAR_4)) != 0xffff )
            {
                VAR_12 = FUNC_6(VAR_9, VAR_10, VAR_11+2);

                if ( VAR_12 & VAR_2 )
                {

                    if (VAR_8->sta.bProtectionMode == VAR_0)
                    {
                        VAR_8->sta.bProtectionMode = VAR_1;
                        FUNC_2(VAR_9, 0);
                    }
                }
                else
                {

                    if (VAR_8->sta.bProtectionMode == VAR_1)
                    {
                        VAR_8->sta.bProtectionMode = VAR_0;
                        FUNC_2(VAR_9, 1);
                    }
                }
            }
        }


   if ((VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_5)) != 0xffff)
   {}
   else if ((VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_7)) != 0xffff)
   {}
   else
   {VAR_8->sta.NonNAPcount++;}
    }
}
