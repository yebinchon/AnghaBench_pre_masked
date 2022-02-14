
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {scalar_t__ eRFPowerState; int rf_chip; int InitialGain; int InitialGainBackUp; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (char*,int) ;

 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,int,int) ;

void
FUNC_4(
 struct net_device *VAR_1
 )
{
 struct r8180_priv *VAR_2 = (struct r8180_priv *)FUNC_1(VAR_1);





 if(VAR_2->eRFPowerState != VAR_0)
 {



  VAR_2->InitialGain= VAR_2->InitialGainBackUp;
  return;
 }

 switch(VAR_2->rf_chip)
 {
 case 128:

  switch(VAR_2->InitialGain)
  {
   case 1:

    FUNC_3(VAR_1, 0x17, 0x26); FUNC_2(1);
    FUNC_3(VAR_1, 0x24, 0x86); FUNC_2(1);
    FUNC_3(VAR_1, 0x05, 0xfa); FUNC_2(1);
    break;

   case 2:

    FUNC_3(VAR_1, 0x17, 0x36); FUNC_2(1);
    FUNC_3(VAR_1, 0x24, 0x86); FUNC_2(1);
    FUNC_3(VAR_1, 0x05, 0xfa); FUNC_2(1);
    break;

   case 3:

    FUNC_3(VAR_1, 0x17, 0x36); FUNC_2(1);
    FUNC_3(VAR_1, 0x24, 0x86); FUNC_2(1);
    FUNC_3(VAR_1, 0x05, 0xfb); FUNC_2(1);
    break;

   case 4:

    FUNC_3(VAR_1, 0x17, 0x46); FUNC_2(1);
    FUNC_3(VAR_1, 0x24, 0x86); FUNC_2(1);
    FUNC_3(VAR_1, 0x05, 0xfb); FUNC_2(1);
    break;

   case 5:

    FUNC_3(VAR_1, 0x17, 0x46); FUNC_2(1);
    FUNC_3(VAR_1, 0x24, 0x96); FUNC_2(1);
    FUNC_3(VAR_1, 0x05, 0xfb); FUNC_2(1);
    break;

   case 6:

    FUNC_3(VAR_1, 0x17, 0x56); FUNC_2(1);
    FUNC_3(VAR_1, 0x24, 0x96); FUNC_2(1);
    FUNC_3(VAR_1, 0x05, 0xfc); FUNC_2(1);
    break;

   case 7:

    FUNC_3(VAR_1, 0x17, 0x56); FUNC_2(1);
    FUNC_3(VAR_1, 0x24, 0xa6); FUNC_2(1);
    FUNC_3(VAR_1, 0x05, 0xfc); FUNC_2(1);
    break;

   case 8:

    FUNC_3(VAR_1, 0x17, 0x66); FUNC_2(1);
    FUNC_3(VAR_1, 0x24, 0xb6); FUNC_2(1);
    FUNC_3(VAR_1, 0x05, 0xfc); FUNC_2(1);
    break;


   default:

    FUNC_3(VAR_1, 0x17, 0x26); FUNC_2(1);
    FUNC_3(VAR_1, 0x24, 0x86); FUNC_2(1);
    FUNC_3(VAR_1, 0x05, 0xfa); FUNC_2(1);
    break;
  }
  break;


 default:
  FUNC_0("UpdateInitialGain(): unknown RFChipID: %#X\n", VAR_2->rf_chip);
  break;
 }
}
