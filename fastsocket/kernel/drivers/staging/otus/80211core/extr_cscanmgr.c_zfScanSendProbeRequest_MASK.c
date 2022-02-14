
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_6__ {TYPE_1__* probingSsidList; } ;
struct TYPE_7__ {scalar_t__ disableProbingWithSsid; int scanFrequency; scalar_t__ DFSEnable; scalar_t__ bPassiveScan; int rxBeaconCount; } ;
struct TYPE_8__ {TYPE_2__ ws; TYPE_3__ sta; } ;
struct TYPE_5__ {scalar_t__ ssidLen; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int*,int,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(zdev_t* VAR_3)
{
    u8_t VAR_4;
    u16_t VAR_5[3] = { 0xffff, 0xffff, 0xffff };

    FUNC_3(VAR_3);


    if (FUNC_2(VAR_3))
    {
        VAR_2->sta.rxBeaconCount++;
    }

    if ( VAR_2->sta.bPassiveScan )
    {
        return;
    }

    if (VAR_2->sta.DFSEnable)
    {
        if (FUNC_0(VAR_3, VAR_2->sta.scanFrequency))
        {
            return;
        }
    }

    FUNC_1(VAR_3, VAR_1, VAR_5, 0, 0, 0);

    if ( VAR_2->sta.disableProbingWithSsid )
    {
        return;
    }

    for (VAR_4=1; VAR_4<=VAR_0; VAR_4++)
    {
        if ( VAR_2->ws.probingSsidList[VAR_4-1].ssidLen != 0 )
        {
            FUNC_1(VAR_3, VAR_1, VAR_5, VAR_4, 0, 0);
        }
    }
}
