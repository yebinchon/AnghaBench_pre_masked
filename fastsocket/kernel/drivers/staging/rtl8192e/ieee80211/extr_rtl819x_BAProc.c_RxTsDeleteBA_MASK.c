
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ bValid; } ;
struct TYPE_5__ {TYPE_2__ RxAdmittedBARecord; } ;
typedef TYPE_1__* PRX_TS_RECORD ;
typedef TYPE_2__* PBA_RECORD ;


 int FUNC_0 (struct ieee80211_device*,TYPE_2__*) ;

u8 FUNC_1( struct ieee80211_device* VAR_0, PRX_TS_RECORD VAR_1)
{
 PBA_RECORD VAR_2 = &VAR_1->RxAdmittedBARecord;
 u8 VAR_3 = 0;

 if(VAR_2->bValid)
 {
  FUNC_0(VAR_0, VAR_2);
  VAR_3 = 1;
 }

 return VAR_3;
}
