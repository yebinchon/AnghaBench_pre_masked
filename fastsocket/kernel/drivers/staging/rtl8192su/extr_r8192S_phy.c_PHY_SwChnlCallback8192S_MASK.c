
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct r8192_priv {scalar_t__ rf_chip; void* SwChnlInProgress; int SwChnlStep; int SwChnlStage; int chan; int up; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct net_device*,int ,int *,int *,scalar_t__*) ;

void FUNC_4(struct net_device *VAR_3)
{

 struct r8192_priv *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5;


 FUNC_0(VAR_0, "==>SwChnlCallback8190Pci(), switch to channel %d\n", VAR_4->chan);

 if(!VAR_4->up)
  return;

 if(VAR_4->rf_chip == VAR_2)
 {
  VAR_4->SwChnlInProgress=VAR_1;
  return;
 }

 do{
  if(!VAR_4->SwChnlInProgress)
   break;


  if(!FUNC_3(VAR_3, VAR_4->chan, &VAR_4->SwChnlStage, &VAR_4->SwChnlStep, &VAR_5))
  {
   if(VAR_5>0)
   {
    FUNC_2(VAR_5);




   }
   else
   continue;
  }
  else
  {
   VAR_4->SwChnlInProgress=VAR_1;
   break;
  }
 }while(1);
}
