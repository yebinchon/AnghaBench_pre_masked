
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ieee80211_device {int dummy; } ;
struct TYPE_3__ {int bValid; int Timer; } ;
typedef TYPE_1__* PBA_RECORD ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;

void FUNC_2(struct ieee80211_device* VAR_1, PBA_RECORD VAR_2, u16 VAR_3)
{
 VAR_2->bValid = 1;
 if(VAR_3 != 0)
  FUNC_1(&VAR_2->Timer, VAR_0 + FUNC_0(VAR_3));
}
