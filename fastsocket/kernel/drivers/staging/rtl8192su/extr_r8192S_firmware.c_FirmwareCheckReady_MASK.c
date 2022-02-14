
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct r8192_priv {TYPE_1__* pFirmware; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ FWStatus; } ;
typedef TYPE_1__ rt_firmware ;
typedef scalar_t__ RT_STATUS ;
typedef scalar_t__ FIRMWARE_8192S_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_19 ;
 int VAR_20 ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct net_device*,int ,int ) ;
 int FUNC_7 (struct net_device*,int ,int) ;

bool
FUNC_8(struct net_device *VAR_21, u8 VAR_22)
{
 struct r8192_priv *VAR_23 = FUNC_2(VAR_21);
 RT_STATUS VAR_24 = VAR_18;
 rt_firmware *VAR_25 = VAR_23->pFirmware;
 int VAR_26 = 1000;

 u8 VAR_27 = 0;
 u32 VAR_28;


 FUNC_1(VAR_1, "--->FirmwareCheckReady(): LoadStaus(%d),", VAR_22);

 VAR_25->FWStatus = (FIRMWARE_8192S_STATUS)VAR_22;
 if( VAR_22 == VAR_8)
 {
  do
  {
   VAR_27 = FUNC_3(VAR_21, VAR_19);
   if(VAR_27& VAR_10)
    break;

   FUNC_5(5);
  }while(VAR_26--);
  if(!(VAR_27 & VAR_9) || VAR_26 <= 0)
  {
   FUNC_1(VAR_0, "FW_STATUS_LOAD_IMEM FAIL CPU, Status=%x\r\n", VAR_27);
   return 0;
  }
 }
 else if( VAR_22 == VAR_7)
 {
  do
  {
   VAR_27 = FUNC_3(VAR_21, VAR_19);
   if(VAR_27& VAR_4)
    break;

   FUNC_5(5);
  }while(VAR_26--);
  if(!(VAR_27 & VAR_3))
  {
   FUNC_1(VAR_0, "FW_STATUS_LOAD_EMEM FAIL CPU, Status=%x\r\n", VAR_27);
   return 0;
  }


  VAR_24 = FUNC_0(VAR_21);
  if(VAR_24 != VAR_18)
  {
   FUNC_1(VAR_0, "Enable CPU fail ! \n" );
   return 0;
  }
 }
 else if( VAR_22 == VAR_6)
 {
  do
  {
   VAR_27 = FUNC_3(VAR_21, VAR_19);
   if(VAR_27& VAR_2)
    break;

   FUNC_5(5);
  }while(VAR_26--);

  if(!(VAR_27 & VAR_2))
  {
   FUNC_1(VAR_0, "Polling  DMEM code done fail ! CPUStatus(%#x)\n", VAR_27);
   return 0;
  }

  FUNC_1(VAR_1, "DMEM code download success, CPUStatus(%#x)\n", VAR_27);


              VAR_26 = 10000;

  do
  {
   VAR_27 = FUNC_3(VAR_21, VAR_19);
   if(VAR_27 & VAR_5)
    break;

   FUNC_5(100);
  }while(VAR_26--);

  FUNC_1(VAR_1, "Polling Load Firmware ready, CPUStatus(%x)\n", VAR_27);



  if((VAR_27 & VAR_13) != VAR_13)
  {
   FUNC_1(VAR_0, "Polling Load Firmware ready fail ! CPUStatus(%x)\n", VAR_27);
   return 0;
  }
              VAR_28 = FUNC_4(VAR_21,VAR_19);
  FUNC_7(VAR_21, VAR_19, (VAR_28&(~VAR_20)));

  VAR_28 = FUNC_4(VAR_21, VAR_14);
  FUNC_7(VAR_21, VAR_14,
   (VAR_28|VAR_15|VAR_16|VAR_17));

  FUNC_1(VAR_1, "FirmwareCheckReady(): Current RCR settings(%#x)\n", VAR_28);



  FUNC_6(VAR_21, VAR_11, VAR_12);

 }

 FUNC_1(VAR_1, "<---FirmwareCheckReady(): LoadFWStatus(%d), rtStatus(%x)\n", VAR_22, VAR_24);
 return (VAR_24 == VAR_18) ? 1:0;
}
