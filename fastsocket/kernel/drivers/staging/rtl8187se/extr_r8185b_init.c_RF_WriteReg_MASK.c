
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8180_priv {int rf_chip; int RegThreeWireMode; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (char*,int) ;



 int FUNC_1 (struct net_device*,int*,int,int,int) ;
 int FUNC_2 (struct net_device*,int*,int,int ,int) ;




 int FUNC_3 (struct net_device*,int,int,int) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

void
FUNC_5(
 struct net_device *VAR_0,
 u8 VAR_1,
 u32 VAR_2
 )
{

 u32 VAR_3;
 u8 VAR_4;
 u8 VAR_5;

 struct r8180_priv *VAR_6 = (struct r8180_priv *)FUNC_4(VAR_0);


 switch(VAR_6->rf_chip)
 {
 case 131:
 case 130:
 case 129:
  switch(VAR_6->RegThreeWireMode)
  {
  case 128:
   {
    VAR_3 = (VAR_2 << 4) | (u32)(VAR_1 & 0x0f);
    VAR_4 = 16;
    VAR_5 = 0;
    FUNC_3(VAR_0, VAR_3, VAR_4, VAR_5);
          }
   break;

   case 134:
   {
    VAR_3 = (VAR_2 << 4) | (u32)(VAR_1 & 0x0f);
    VAR_4 = 16;
    FUNC_2(
     VAR_0,
     (u8 *)(&VAR_3),
     VAR_4,
     0,
     1);
           }
   break;
   case 133:
   {
    VAR_3 = (VAR_2 << 4) | (u32)(VAR_1 & 0x0f);
    VAR_4 = 16;
     FUNC_1(
      VAR_0,
      (u8*)(&VAR_3),
      VAR_4,
      0,
      1);


   }
   break;

   case 132:
   {
    VAR_3 = (VAR_2 << 4) | (u32)(VAR_1 & 0x0f);
    VAR_4 = 16;




    FUNC_1(
     VAR_0,
     (u8*)(&VAR_3),
     VAR_4,
     1,
     1);


   }
   break;


  default:
   FUNC_0("RF_WriteReg(): invalid RegThreeWireMode(%d) !!!", VAR_6->RegThreeWireMode);
   break;
  }
  break;

 default:
  FUNC_0("RF_WriteReg(): unknown RFChipID: %#X", VAR_6->rf_chip);
  break;
 }
}
