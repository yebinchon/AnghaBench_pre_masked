
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_3__ {int mTxRate; int uTxRate; int mmTxRate; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ sta; } ;


 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int *) ;

u8_t FUNC_2(zdev_t* VAR_3, u8_t VAR_4[6], u8_t VAR_5)
{
    FUNC_1(VAR_3);


    if ( VAR_2->wlanMode == VAR_0 )
    {
        return 0;
    }


    if ( (VAR_5 & 0x0c) == VAR_1 )
    {
        if ( FUNC_0(VAR_4) )
        {
            return VAR_2->sta.mTxRate;
        }
        else
        {
            return VAR_2->sta.uTxRate;
        }
    }

    return VAR_2->sta.mmTxRate;
}
