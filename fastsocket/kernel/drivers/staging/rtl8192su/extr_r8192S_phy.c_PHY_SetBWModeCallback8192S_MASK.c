
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int CurrentChannelBW; int rf_chip; int nCur40MhzPrimeSC; void* SetBWModeInProgress; int card_8192_version; int up; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;


 int FUNC_0 (struct net_device*,int) ;





 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct net_device*,scalar_t__) ;
 int FUNC_5 (struct net_device*,int ,int,int) ;
 int FUNC_6 (struct net_device*,scalar_t__,int) ;

void FUNC_7(struct net_device *VAR_14)
{
 struct r8192_priv *VAR_15 = FUNC_2(VAR_14);
 u8 VAR_16;






 u8 VAR_17;

 FUNC_1(VAR_3, "==>SetBWModeCallback8190Pci()  Switch to %s bandwidth\n", VAR_15->CurrentChannelBW == 134?"20MHz":"40MHz");


 if(VAR_15->rf_chip == 128)
 {
  VAR_15->SetBWModeInProgress= VAR_4;
  return;
 }

 if(!VAR_15->up)
  return;
 VAR_16 = FUNC_4(VAR_14, VAR_0);
 VAR_17 = FUNC_4(VAR_14, VAR_5+2);

 switch(VAR_15->CurrentChannelBW)
 {
  case 134:



   VAR_16 |= VAR_1;

   FUNC_6(VAR_14, VAR_0, VAR_16);
   break;

  case 133:



   VAR_16 &= ~VAR_1;

   FUNC_6(VAR_14, VAR_0, VAR_16);
   VAR_17 = (VAR_17&0x90) |(VAR_15->nCur40MhzPrimeSC<<5);
   FUNC_6(VAR_14, VAR_5+2, VAR_17);
   break;

  default:
   FUNC_1(VAR_2, "SetBWModeCallback8190Pci():						unknown Bandwidth: %#X\n",VAR_15->CurrentChannelBW);

   break;
 }




 switch(VAR_15->CurrentChannelBW)
 {

  case 134:
   FUNC_5(VAR_14, VAR_11, VAR_8, 0x0);
   FUNC_5(VAR_14, VAR_12, VAR_8, 0x0);







   if (VAR_15->card_8192_version >= VAR_6)
    FUNC_6(VAR_14, VAR_10, 0x58);


   break;


  case 133:
   FUNC_5(VAR_14, VAR_11, VAR_8, 0x1);
   FUNC_5(VAR_14, VAR_12, VAR_8, 0x1);







   FUNC_5(VAR_14, VAR_9, VAR_7, (VAR_15->nCur40MhzPrimeSC>>1));
   FUNC_5(VAR_14, VAR_13, 0xC00, VAR_15->nCur40MhzPrimeSC);


   if (VAR_15->card_8192_version >= VAR_6)
    FUNC_6(VAR_14, VAR_10, 0x18);

   break;

  default:
   FUNC_1(VAR_2, "SetBWModeCallback8190Pci(): unknown Bandwidth: %#X\n" ,VAR_15->CurrentChannelBW);

   break;

 }
 switch( VAR_15->rf_chip )
 {
  case 131:

   break;

  case 130:


   break;

  case 129:


   break;

  case 128:

   break;

  case 132:
   FUNC_0(VAR_14, VAR_15->CurrentChannelBW);
   break;
  default:
   FUNC_3("Unknown rf_chip: %d\n", VAR_15->rf_chip);
   break;
 }

 VAR_15->SetBWModeInProgress= VAR_4;

 FUNC_1(VAR_3, "<==SetBWModeCallback8190Pci() \n" );
}
