
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int rf_pathmap; scalar_t__ rf_type; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ RT_STATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct net_device*,int ,int) ;

extern bool
FUNC_5(struct net_device* VAR_9)
{
 RT_STATUS VAR_10 = VAR_6;

 u8 VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 struct r8192_priv *VAR_14 = FUNC_1(VAR_9);
 FUNC_3(VAR_9);
   VAR_10 = FUNC_2(VAR_9);
 VAR_11 = (u8)(FUNC_4(VAR_9, VAR_7, 0xf) |
    FUNC_4(VAR_9, VAR_8, 0xf));
 VAR_14->rf_pathmap = VAR_11;
 for(VAR_12 = 0; VAR_12<4; VAR_12++)
 {
  if((VAR_11>>VAR_12)&0x1)
   VAR_13++;
 }

 if((VAR_14->rf_type==VAR_1 && VAR_13!=1) ||
  (VAR_14->rf_type==VAR_2 && VAR_13!=2) ||
  (VAR_14->rf_type==VAR_3 && VAR_13!=2) ||
  (VAR_14->rf_type==VAR_4 && VAR_13!=2) ||
  (VAR_14->rf_type==VAR_5 && VAR_13!=4))
 {
  FUNC_0( VAR_0, "PHY_BBConfig8192S: RF_Type(%x) does not match RF_Num(%x)!!\n", VAR_14->rf_type, VAR_13);
 }
 return (VAR_10 == VAR_6) ? 1:0;
}
