
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8180_priv {int CurrAntennaIndex; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int) ;
 int FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (struct net_device*,int,int) ;

bool
FUNC_4(
 struct net_device *VAR_1,
 u8 VAR_2,
 bool VAR_3
)
{
 struct r8180_priv *VAR_4 = (struct r8180_priv *)FUNC_0(VAR_1);
 bool VAR_5 = 1;




 FUNC_2(VAR_1, 0x0c, 0x09);

 if( VAR_3 )
 {
  if( VAR_2 == 1 )
  {

   FUNC_1(VAR_1, VAR_0, 0x00);


   FUNC_2(VAR_1, 0x11, 0xbb);
   FUNC_2(VAR_1, 0x01, 0xc7);


   FUNC_3(VAR_1, 0x0D, 0x54);
   FUNC_3(VAR_1, 0x18, 0xb2);
  }
  else
  {

   FUNC_1(VAR_1, VAR_0, 0x03);


   FUNC_2(VAR_1, 0x11, 0x9b);
   FUNC_2(VAR_1, 0x01, 0xc7);


   FUNC_3(VAR_1, 0x0d, 0x5c);
   FUNC_3(VAR_1, 0x18, 0xb2);
  }
 }
 else
 {
  if( VAR_2 == 1 )
  {

   FUNC_1(VAR_1, VAR_0, 0x00);


   FUNC_2(VAR_1, 0x11, 0xbb);
   FUNC_2(VAR_1, 0x01, 0x47);


   FUNC_3(VAR_1, 0x0D, 0x54);
   FUNC_3(VAR_1, 0x18, 0x32);
  }
  else
  {

   FUNC_1(VAR_1, VAR_0, 0x03);


   FUNC_2(VAR_1, 0x11, 0x9b);
   FUNC_2(VAR_1, 0x01, 0x47);


   FUNC_3(VAR_1, 0x0D, 0x5c);
   FUNC_3(VAR_1, 0x18, 0x32);
  }
 }
 VAR_4->CurrAntennaIndex = VAR_2;
 return VAR_5;
}
