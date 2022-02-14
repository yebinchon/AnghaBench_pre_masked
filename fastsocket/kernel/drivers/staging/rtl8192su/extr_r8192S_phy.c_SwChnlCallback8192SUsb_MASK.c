
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
 scalar_t__ VAR_3 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int *,int *,scalar_t__*) ;

void FUNC_3(struct net_device *VAR_4)
{

 struct r8192_priv *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6;


 FUNC_0(VAR_0, "==>SwChnlCallback8190Pci(), switch to channel				%d\n", VAR_5->chan);



 if(!VAR_5->up)
  return;

 if(VAR_5->rf_chip == VAR_2)
 {
  VAR_5->SwChnlInProgress=VAR_1;
  return;
 }

 do{
  if(!VAR_5->SwChnlInProgress)
   break;

  if(!FUNC_2(VAR_4, VAR_5->chan, &VAR_5->SwChnlStage, &VAR_5->SwChnlStep, &VAR_6))
  {
   if(VAR_6>0)
   {


   }
   else
   continue;
  }
  else
  {
   VAR_5->SwChnlInProgress=VAR_1;
  }
  break;
 }while(VAR_3);
}
