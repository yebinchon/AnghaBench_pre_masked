
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ieee80211_device {int dummy; } ;
struct TYPE_3__ {int InactTimer; int SetupTimer; } ;
typedef TYPE_1__* PTS_COMMON_INFO ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;

void FUNC_3(struct ieee80211_device *VAR_1, PTS_COMMON_INFO VAR_2, u32 VAR_3)
{
 FUNC_1(&VAR_2->SetupTimer);
 FUNC_1(&VAR_2->InactTimer);

 if(VAR_3!=0)
  FUNC_2(&VAR_2->InactTimer, VAR_0 + FUNC_0(VAR_3));
}
