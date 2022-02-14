
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FIRMWARE_8192S_STATUS ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

FIRMWARE_8192S_STATUS
FUNC_1(FIRMWARE_8192S_STATUS VAR_2)
{
 FIRMWARE_8192S_STATUS VAR_3 = 0;

 switch(VAR_2)
 {
  case 131:
   VAR_3 = 128;
   break;

  case 128:
   VAR_3 = 129;
   break;

  case 129:
   VAR_3 = 130;
   break;

  case 130:
   VAR_3 = VAR_1;
   break;

  default:
   FUNC_0(VAR_0,"Invalid FW Status(%#x)!!\n", VAR_2);
   break;
 }
 return VAR_3;
}
