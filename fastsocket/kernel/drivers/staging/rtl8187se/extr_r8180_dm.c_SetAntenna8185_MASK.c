
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8180_priv {int rf_chip; int CurrAntennaIndex; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (struct net_device*,int,int) ;
 int FUNC_4 (struct net_device*,int,int) ;

bool
FUNC_5(
 struct net_device *VAR_1,
 u8 VAR_2
 )
{
 struct r8180_priv *VAR_3 = (struct r8180_priv *)FUNC_0(VAR_1);
 bool VAR_4 = 0;



 switch(VAR_2)
 {
 case 0:
  switch(VAR_3->rf_chip)
  {
  case 129:
  case 128:

   FUNC_2(VAR_1, VAR_0, 0x03);

   FUNC_3(VAR_1,0x11, 0x9b);
   FUNC_4(VAR_1, 0x0d, 0x5c);


   VAR_4 = 1;
   break;

  default:
   FUNC_1("SetAntenna8185: unkown RFChipID(%d)\n", VAR_3->rf_chip);
   break;
  }
  break;

 case 1:
  switch(VAR_3->rf_chip)
  {
  case 129:
  case 128:

   FUNC_2(VAR_1, VAR_0, 0x00);

   FUNC_3(VAR_1, 0x11, 0xbb);
   FUNC_4(VAR_1, 0x0d, 0x54);

   VAR_4 = 1;
   break;

  default:
   FUNC_1("SetAntenna8185: unkown RFChipID(%d)\n", VAR_3->rf_chip);
   break;
  }
  break;

 default:
  FUNC_1("SetAntenna8185: unkown u1bAntennaIndex(%d)\n", VAR_2);
  break;
 }

 if(VAR_4)
 {
  VAR_3->CurrAntennaIndex = VAR_2;
 }



 return VAR_4;
}
