
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_ccmp_data {scalar_t__ tfm; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct ieee80211_ccmp_data *VAR_1 = VAR_0;

 if (VAR_1 && VAR_1->tfm)
  FUNC_0((void*)VAR_1->tfm);
 FUNC_1(VAR_0);
}
