
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_device*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

u8 FUNC_2(struct ieee80211_device* VAR_1, u8* VAR_2, u8* VAR_3)
{
 u8 VAR_4, VAR_5;
 u8 VAR_6;
 u8 VAR_7 = 0;
 u8 VAR_8[16];
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  FUNC_1(VAR_0, "pMCSRateSet or pMCSFilter can't be null in HTGetHighestMCSRate()\n");
  return 0;
 }
 for(VAR_4=0; VAR_4<16; VAR_4++)
  VAR_8[VAR_4] = VAR_2[VAR_4] & VAR_3[VAR_4];

 for(VAR_4 = 0; VAR_4 < 16; VAR_4++)
 {
  if(VAR_8[VAR_4] != 0)
   break;
 }
 if(VAR_4 == 16)
  return 0;

 for(VAR_4 = 0; VAR_4 < 16; VAR_4++)
 {
  if(VAR_8[VAR_4] != 0)
  {
   VAR_6 = VAR_8[VAR_4];
   for(VAR_5 = 0; VAR_5 < 8; VAR_5++)
   {
    if((VAR_6%2) != 0)
    {
     if(FUNC_0(VAR_1, (8*VAR_4+VAR_5)) > FUNC_0(VAR_1, VAR_7))
      VAR_7 = (8*VAR_4+VAR_5);
    }
    VAR_6 = VAR_6>>1;
   }
  }
 }
 return (VAR_7|0x80);
}
