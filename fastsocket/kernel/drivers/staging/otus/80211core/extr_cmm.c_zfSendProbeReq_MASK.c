
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct TYPE_9__ {scalar_t__ bIbssGMode; } ;
struct TYPE_8__ {int currentFrequency; } ;
struct TYPE_7__ {TYPE_1__* probingSsidList; } ;
struct TYPE_10__ {int supportMode; scalar_t__ wlanMode; TYPE_4__ wfc; TYPE_3__ sta; TYPE_2__ ws; } ;
struct TYPE_6__ {scalar_t__ ssidLen; int ssid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_5__* VAR_8 ;
 int FUNC_0 (int *,int *,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,scalar_t__) ;

u16_t FUNC_7(zdev_t* VAR_9, zbuf_t* VAR_10, u16_t VAR_11, u8_t VAR_12)
{
    FUNC_4(VAR_9);
    FUNC_2();



    if (VAR_12 == 0)
    {

        FUNC_6(VAR_9, VAR_10, VAR_11++, VAR_6);
        FUNC_6(VAR_9, VAR_10, VAR_11++, 0);
    }
    else
    {
        FUNC_3(VAR_9);
        if (VAR_8->ws.probingSsidList[VAR_12-1].ssidLen == 0)
        {
            FUNC_6(VAR_9, VAR_10, VAR_11++, VAR_6);
            FUNC_6(VAR_9, VAR_10, VAR_11++, 0);
        }
        else
        {
            FUNC_6(VAR_9, VAR_10, VAR_11++, VAR_6);
            FUNC_6(VAR_9, VAR_10, VAR_11++,
                    VAR_8->ws.probingSsidList[VAR_12-1].ssidLen);
            FUNC_0(VAR_9, VAR_10,
                    VAR_8->ws.probingSsidList[VAR_12-1].ssid,
                    VAR_11,
                    VAR_8->ws.probingSsidList[VAR_12-1].ssidLen);
            VAR_11 += VAR_8->ws.probingSsidList[VAR_12-1].ssidLen;
        }
        FUNC_5(VAR_9);
    }


    if ( VAR_8->sta.currentFrequency < 3000 )
    {
        VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_11,
                                      VAR_7, VAR_1);

        if (VAR_8->supportMode & (VAR_3|VAR_4)) {
            if (VAR_8->wlanMode == VAR_0) {
                if (VAR_8->wfc.bIbssGMode) {
                    VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_11,
                                      VAR_5, VAR_2);
                }
            } else {
                VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_11,
                                      VAR_5, VAR_2);
            }
        }
    }
    else
    {
        VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_11,
                                      VAR_7, VAR_2);
    }

    return VAR_11;
}
