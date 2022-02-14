
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct r8192_priv {scalar_t__ card_8192_version; scalar_t__ rf_type; int* AntennaTxPwDiff; int CrystalCap; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ RT_STATUS ;
typedef int RF90_RADIO_PATH_E ;
typedef scalar_t__ HW90_BLOCK_E ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 scalar_t__ FUNC_5 (struct net_device*,scalar_t__,int ) ;
 int FUNC_6 (struct net_device*,int ,int,int) ;
 int FUNC_7 (struct net_device*,int ,scalar_t__) ;
 int FUNC_8 (struct net_device*,int ,int) ;

__attribute__((used)) static RT_STATUS FUNC_9(struct net_device* VAR_25)
{
 struct r8192_priv *VAR_26 = FUNC_1(VAR_25);
 RT_STATUS VAR_27 = VAR_11;
 u8 VAR_28 = 0, VAR_29 = 0;
 u32 VAR_30 = 0;





 VAR_28 = FUNC_2(VAR_25, VAR_0);
 FUNC_7(VAR_25, VAR_0,(VAR_28|VAR_1));


 VAR_30 = FUNC_3(VAR_25, VAR_6);
 FUNC_8(VAR_25, VAR_6, (VAR_30&(~VAR_7)));



 for(VAR_29=(HW90_BLOCK_E)VAR_8; VAR_29<=VAR_9; VAR_29++)
 {
  VAR_27 = FUNC_5(VAR_25, (HW90_BLOCK_E)VAR_29, (RF90_RADIO_PATH_E)0);
  if(VAR_27 != VAR_11)
  {
   FUNC_0((VAR_4 | VAR_5), "PHY_RF8256_Config():Check PHY%d Fail!!\n", VAR_29-1);
   return VAR_27;
  }
 }

 FUNC_6(VAR_25, VAR_23, VAR_13|VAR_14, 0x0);


 FUNC_4(VAR_25, VAR_3);


 VAR_30 = FUNC_3(VAR_25, VAR_6);
 FUNC_8(VAR_25, VAR_6, (VAR_30|VAR_7));



 FUNC_4(VAR_25, VAR_2);

 if (VAR_26->card_8192_version > VAR_12)
 {
  if(VAR_26->rf_type == VAR_10)
  {

  VAR_30 = ( VAR_26->AntennaTxPwDiff[2]<<8 |
      VAR_26->AntennaTxPwDiff[1]<<4 |
      VAR_26->AntennaTxPwDiff[0]);
  }
  else
   VAR_30 = 0x0;
  FUNC_6(VAR_25, VAR_24,
   (VAR_15|VAR_16|VAR_17), VAR_30);
 }




 return VAR_27;
}
