
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int CurrentChannelBW; int rf_chip; int nCur40MhzPrimeSC; void* SetBWModeInProgress; int up; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;


 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int) ;





 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct net_device*,scalar_t__) ;
 int FUNC_5 (struct net_device*,int ,int,int) ;
 int FUNC_6 (struct net_device*,scalar_t__,int) ;

void FUNC_7(struct net_device *VAR_13)
{
 struct r8192_priv *VAR_14 = FUNC_3(VAR_13);
 u8 VAR_15;




 u8 VAR_16;

 FUNC_2(VAR_3, "==>SetBWModeCallback8192SUsbWorkItem()  Switch to %s bandwidth\n", VAR_14->CurrentChannelBW == 134?"20MHz":"40MHz");


 if(VAR_14->rf_chip == 128)
 {
  VAR_14->SetBWModeInProgress= VAR_4;
  return;
 }

 if(!VAR_14->up)
  return;







 VAR_15 = FUNC_4(VAR_13, VAR_0);
 VAR_16 = FUNC_4(VAR_13, VAR_5+2);

 switch(VAR_14->CurrentChannelBW)
 {
  case 134:
   VAR_15 |= VAR_1;

   FUNC_6(VAR_13, VAR_0, VAR_15);
   break;

  case 133:
   VAR_15 &= ~VAR_1;

   FUNC_6(VAR_13, VAR_0, VAR_15);
   VAR_16 = (VAR_16&0x90) |(VAR_14->nCur40MhzPrimeSC<<5);
   FUNC_6(VAR_13, VAR_5+2, VAR_16);

   break;

  default:
   FUNC_2(VAR_2, "SetBWModeCallback8192SUsbWorkItem():						unknown Bandwidth: %#X\n",VAR_14->CurrentChannelBW);

   break;
 }


 switch(VAR_14->CurrentChannelBW)
 {
  case 134:
   FUNC_5(VAR_13, VAR_10, VAR_7, 0x0);
   FUNC_5(VAR_13, VAR_11, VAR_7, 0x0);

   FUNC_5(VAR_13, VAR_9, 0xff, 0x58);

   break;
  case 133:
   FUNC_5(VAR_13, VAR_10, VAR_7, 0x1);
   FUNC_5(VAR_13, VAR_11, VAR_7, 0x1);


   FUNC_5(VAR_13, VAR_8, VAR_6, (VAR_14->nCur40MhzPrimeSC>>1));
   FUNC_5(VAR_13, VAR_12, 0xC00, VAR_14->nCur40MhzPrimeSC);

   FUNC_5(VAR_13, VAR_9, 0xff, 0x18);

   break;


  default:
   FUNC_2(VAR_2, "SetBWModeCallback8192SUsbWorkItem(): unknown Bandwidth: %#X\n" ,VAR_14->CurrentChannelBW);

   break;

 }



 switch( VAR_14->rf_chip )
 {
  case 131:
   FUNC_1(VAR_13, VAR_14->CurrentChannelBW);
   break;

  case 130:


   break;

  case 132:
   FUNC_0(VAR_13, VAR_14->CurrentChannelBW);
   break;

  case 129:


   break;

  case 128:

   break;

  default:

   break;
 }

 VAR_14->SetBWModeInProgress= VAR_4;

 FUNC_2(VAR_3, "<==SetBWModeCallback8192SUsbWorkItem()" );
}
