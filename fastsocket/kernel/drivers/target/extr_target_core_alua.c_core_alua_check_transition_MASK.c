
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sense_reason_t ;







 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static sense_reason_t
FUNC_1(int VAR_1, int *VAR_2)
{
 switch (VAR_1) {
 case 131:
 case 132:
 case 129:
 case 128:




  *VAR_2 = 1;
  break;
 case 130:




  *VAR_2 = 0;
  break;
 default:
  FUNC_0("Unknown ALUA access state: 0x%02x\n", VAR_1);
  return VAR_0;
 }

 return 0;
}
