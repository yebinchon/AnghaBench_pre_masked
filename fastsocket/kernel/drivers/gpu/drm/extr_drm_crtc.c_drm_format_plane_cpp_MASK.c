
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
 int FUNC_0 (int,unsigned int*,int*) ;
 int FUNC_1 (int) ;

int FUNC_2(uint32_t VAR_0, int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 if (VAR_1 >= FUNC_1(VAR_0))
  return 0;

 switch (VAR_0) {
 case 134:
 case 128:
 case 141:
 case 140:
  return 2;
 case 147:
 case 145:
 case 146:
 case 142:
 case 144:
 case 143:
  return VAR_1 ? 2 : 1;
 case 139:
 case 133:
 case 138:
 case 132:
 case 137:
 case 131:
 case 136:
 case 130:
 case 135:
 case 129:
  return 1;
 default:
  FUNC_0(VAR_0, &VAR_2, &VAR_3);
  return VAR_3 >> 3;
 }
}
