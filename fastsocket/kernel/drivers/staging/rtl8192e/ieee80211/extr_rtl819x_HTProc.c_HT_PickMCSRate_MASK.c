
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_device {int mode; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

u8 FUNC_1(struct ieee80211_device* VAR_4, u8* VAR_5)
{
 u8 VAR_6;
 if (VAR_5 == ((void*)0))
 {
  FUNC_0(VAR_0, "pOperateMCS can't be null in HT_PickMCSRate()\n");
  return 0;
 }

 switch(VAR_4->mode)
 {
 case 132:
 case 131:
 case 130:



   for(VAR_6=0;VAR_6<=15;VAR_6++){
    VAR_5[VAR_6] = 0;
   }
   break;

 case 129:
 case 128:





   VAR_5[0] &=VAR_1;
   VAR_5[1] &=VAR_2;
   VAR_5[3] &=VAR_3;
   break;


 default:

   break;

 }

 return 1;
}
