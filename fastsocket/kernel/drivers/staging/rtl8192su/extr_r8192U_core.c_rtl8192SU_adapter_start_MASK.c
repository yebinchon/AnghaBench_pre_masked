
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {scalar_t__ card_8192_version; scalar_t__ rf_type; scalar_t__ ResetProgress; int RegRfOff; int NumTotalRFPath; scalar_t__ RfOffReason; int chan; int eRFPowerState; TYPE_1__* ieee80211; int bInHctTest; int Rf_Mode; } ;
struct net_device {scalar_t__ dev_addr; } ;
struct TYPE_10__ {scalar_t__ HighestOperaRate; } ;
struct TYPE_12__ {TYPE_2__ MgntInfo; } ;
struct TYPE_11__ {int RtUsbCheckForHangWorkItem; } ;
struct TYPE_9__ {int mode; } ;
typedef int RF90_RADIO_PATH_E ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct net_device*) ;
 int VAR_10 ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (struct net_device*,int ,scalar_t__) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_4__*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_14 (int,char*,...) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int * VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 struct r8192_priv* FUNC_15 (struct net_device*) ;
 TYPE_3__* VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_16 (struct net_device*,scalar_t__) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct net_device*,int ) ;
 int FUNC_21 (struct net_device*,int ,int,int,...) ;
 int FUNC_22 (struct net_device*,scalar_t__,int) ;
 int FUNC_23 (struct net_device*,int ,int) ;
 int FUNC_24 (struct net_device*,int ,int ) ;

bool FUNC_25(struct net_device *VAR_42)
{
 struct r8192_priv *VAR_43 = FUNC_15(VAR_42);



 bool VAR_44 = 1;


 u8 VAR_45 = 1;


 FUNC_14(VAR_3, "--->InitializeAdapter8192SUsb()\n");
start:
 FUNC_19(VAR_42);




 VAR_44 = FUNC_2(VAR_42);
 if(VAR_44 != 1)
 {
  if(VAR_45 == 1){
   FUNC_14(VAR_3, "InitializeAdapter8192SUsb(): Download Firmware failed once, Download again!!\n");
   VAR_45 = VAR_45 + 1;
   goto start;
  }else{
   FUNC_14(VAR_3, "InitializeAdapter8192SUsb(): Download Firmware failed twice, end!!\n");
  goto end;
 }
 }



 FUNC_18(VAR_42);
 VAR_44 = FUNC_7(VAR_42);
 if(VAR_44 != 1)
 {
  FUNC_14(VAR_3, "InitializeAdapter8192SUsb(): Fail to configure MAC!!\n");
  goto end;
 }
 if (1){
  int VAR_46;
  for (VAR_46=0; VAR_46<4; VAR_46++)
   FUNC_23(VAR_42,VAR_32[VAR_46], 0x5e4322);
  FUNC_22(VAR_42,VAR_1, 0x01);
 }






 VAR_44 = FUNC_5(VAR_42);
 if(VAR_44 != 1)
 {
  FUNC_14(VAR_3, "InitializeAdapter8192SUsb(): Fail to configure BB!!\n");
  goto end;
 }

 FUNC_21(VAR_42, VAR_40, 0xff, 0x58);





 VAR_43->Rf_Mode = VAR_22;






 FUNC_22(VAR_42, VAR_0+1, 0xDB);



 if(VAR_43->card_8192_version == VAR_31)
  FUNC_22(VAR_42, VAR_30+3, (u8)(VAR_21|VAR_23|VAR_24));
 else
  FUNC_22(VAR_42, VAR_20, (u8)(VAR_21|VAR_23|VAR_24));

 VAR_44 = FUNC_8(VAR_42);
 if(VAR_44 != 1)
 {
  FUNC_14(VAR_3, "InitializeAdapter8192SUsb(): Fail to configure RF!!\n");
  goto end;
 }



 FUNC_21(VAR_42, VAR_41, VAR_35, 0x1);
 FUNC_21(VAR_42, VAR_41, VAR_36, 0x1);





 if(VAR_43->rf_type == VAR_17)
 {

  FUNC_21(VAR_42, VAR_41, 0xff000000, 0x03);


 }
 FUNC_17(VAR_42);





 FUNC_23(VAR_42, VAR_11, ((u32*)VAR_42->dev_addr)[0]);
 FUNC_24(VAR_42, VAR_12, ((u16*)(VAR_42->dev_addr + 4))[0]);
 if(!VAR_43->bInHctTest)
 {
  if(VAR_43->ResetProgress == VAR_16)
  {


   FUNC_20(VAR_42, VAR_43->ieee80211->mode);
         }
 }
 else
 {
  VAR_43->ieee80211->mode = VAR_34;
   FUNC_20(VAR_42, VAR_34);
 }
 FUNC_0(VAR_42);

 {
  u8 VAR_47 = 0x0;
  VAR_47 |= VAR_28;
  VAR_47 |= VAR_27;
  VAR_47 |= VAR_26;
  FUNC_22(VAR_42, VAR_29, VAR_47);
 }
 {

  FUNC_6(VAR_42);


  FUNC_9(VAR_42, VAR_43->chan);
 }

 {
 u8 VAR_48 = 0;

 VAR_48 = FUNC_16(VAR_42, VAR_13);
 FUNC_22(VAR_42, VAR_13, VAR_48&(~VAR_10));
 }
 FUNC_23(VAR_42, VAR_33, VAR_9);
 FUNC_1(VAR_42);
 FUNC_23(VAR_42, VAR_33, VAR_7);
 FUNC_1(VAR_42);
 FUNC_23(VAR_42, VAR_33, VAR_8);
 FUNC_1(VAR_42);
 FUNC_23(VAR_42, VAR_33, VAR_5);




end:
return VAR_44;
}
