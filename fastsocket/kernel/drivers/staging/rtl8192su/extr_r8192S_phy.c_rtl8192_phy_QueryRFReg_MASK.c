
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8192_priv {int rf_pathmap; int rf_sem; } ;
struct net_device {int dummy; } ;
typedef int RF90_RADIO_PATH_E ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int *) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,int,int) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (int *) ;

u32 FUNC_8(struct net_device* VAR_1, RF90_RADIO_PATH_E VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 struct r8192_priv *VAR_8 = FUNC_2(VAR_1);


 FUNC_0(VAR_0, "--->PHY_QueryRFReg(): RegAddr(%#x), eRFPath(%#x), BitMask(%#x)\n", VAR_3, VAR_2,VAR_4);

 if (!((VAR_8->rf_pathmap >> VAR_2) & 0x1))
 {
  FUNC_5("EEEEEError: rfpath off! rf_pathmap=%x eRFPath=%x\n", VAR_8->rf_pathmap, VAR_2);
  return 0;
 }

 if (!FUNC_6(VAR_1, VAR_2))
 {
  FUNC_5("EEEEEError: not legal rfpath! eRFPath=%x\n", VAR_2);
  return 0;
 }




 FUNC_1(&VAR_8->rf_sem);
 VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3);

 VAR_7 = FUNC_3(VAR_4);
 VAR_6 = (VAR_5 & VAR_4) >> VAR_7;

 FUNC_7(&VAR_8->rf_sem);




 return (VAR_6);
}
