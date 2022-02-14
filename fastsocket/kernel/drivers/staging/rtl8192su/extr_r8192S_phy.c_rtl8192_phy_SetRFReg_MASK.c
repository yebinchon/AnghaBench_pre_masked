
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8192_priv {int rf_pathmap; int rf_sem; } ;
struct net_device {int dummy; } ;
typedef int RF90_RADIO_PATH_E ;
typedef int Original_Value ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,int,int) ;
 int FUNC_5 (struct net_device*,int,int,int) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct net_device* VAR_2, RF90_RADIO_PATH_E VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6)
{

 struct r8192_priv *VAR_7 = FUNC_2(VAR_2);
 u32 VAR_8, VAR_9, VAR_10;

 FUNC_0(VAR_0, "--->PHY_SetRFReg(): RegAddr(%#x), BitMask(%#x), Data(%#x), eRFPath(%#x)\n",
  VAR_4, VAR_5, VAR_6, VAR_3);

 if (!((VAR_7->rf_pathmap >> VAR_3) & 0x1))
 {
  FUNC_6("EEEEEError: rfpath off! rf_pathmap=%x eRFPath=%x\n", VAR_7->rf_pathmap, VAR_3);
  return ;
 }
 if (!FUNC_7(VAR_2, VAR_3))
 {
  FUNC_6("EEEEEError: not legal rfpath! eRFPath=%x\n", VAR_3);
  return;
 }




 FUNC_1(&VAR_7->rf_sem);
  if (VAR_5 != VAR_1)
  {
   VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4);
   VAR_9 = FUNC_3(VAR_5);
   VAR_10 = (((VAR_8)&(~VAR_5))|(VAR_6<< VAR_9));
   FUNC_5(VAR_2, VAR_3, VAR_4, VAR_10);
  }
  else
   FUNC_5(VAR_2, VAR_3, VAR_4, VAR_6);


 FUNC_8(&VAR_7->rf_sem);

 FUNC_0(VAR_0, "<---PHY_SetRFReg(): RegAddr(%#x), BitMask(%#x), Data(%#x), eRFPath(%#x)\n",
   VAR_4, VAR_5, VAR_6, VAR_3);

}
