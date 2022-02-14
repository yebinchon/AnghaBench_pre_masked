
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
typedef int RT_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,int ,int) ;
 int FUNC_5 (struct net_device*,int ,int) ;

RT_STATUS
FUNC_6(struct net_device *VAR_9)
{

 RT_STATUS VAR_10 = VAR_4;
 u8 VAR_11, VAR_12 = 0;
 u16 VAR_13;
 u32 VAR_14 = 200;

 FUNC_0(VAR_0, "-->FirmwareEnableCPU()\n" );

 VAR_11 = FUNC_1(VAR_9, VAR_5);
 FUNC_4(VAR_9, VAR_5, (VAR_11|VAR_6));

 VAR_13 = FUNC_2(VAR_9, VAR_7);
 FUNC_5(VAR_9, VAR_7, (VAR_13|VAR_1));


 do
 {
  VAR_12 = FUNC_1(VAR_9, VAR_8);
  if(VAR_12& VAR_2)
  {
   FUNC_0(VAR_0, "IMEM Ready after CPU has refilled.\n");
   break;
  }


  FUNC_3(100);
 }while(VAR_14--);

 if(!(VAR_12 & VAR_2))
  return VAR_3;

 FUNC_0(VAR_0, "<--FirmwareEnableCPU(): rtStatus(%#x)\n", VAR_10);
 return VAR_10;
}
