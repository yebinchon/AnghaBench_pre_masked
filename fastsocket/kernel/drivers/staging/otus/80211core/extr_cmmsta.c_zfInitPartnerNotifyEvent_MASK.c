
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
struct zsPartnerNotifyEvent {int bssid; scalar_t__ peerMacAddr; } ;
struct TYPE_3__ {scalar_t__ bssid; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,scalar_t__) ;

void FUNC_3(zdev_t* VAR_2, zbuf_t* VAR_3, struct zsPartnerNotifyEvent *VAR_4)
{
    u16_t *VAR_5;

    FUNC_1(VAR_2);

    VAR_5 = (u16_t *)VAR_4->peerMacAddr;

    FUNC_0(VAR_4->bssid, (u8_t *)(VAR_1->sta.bssid), 6);
    VAR_5[0] = FUNC_2(VAR_2, VAR_3, VAR_0);
    VAR_5[1] = FUNC_2(VAR_2, VAR_3, VAR_0 + 2);
    VAR_5[2] = FUNC_2(VAR_2, VAR_3, VAR_0 + 4);
}
