
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

u8 FUNC_1(u8 VAR_1)
{
 u8 VAR_2 = 0;
 switch(VAR_1)
 {
  case 0:
   VAR_2 = 6;
   break;
  case 1:
   VAR_2 = 11;
   break;
  case 2:
   VAR_2 = 4;
   break;
  default:
   FUNC_0(VAR_0, "UsbOptionToEndPointNumber(): Invalid UsbOption(%#x)\n", VAR_1);
   break;
 }
 return VAR_2;
}
