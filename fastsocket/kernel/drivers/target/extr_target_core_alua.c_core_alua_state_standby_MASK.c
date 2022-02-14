
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct se_cmd {int dummy; } ;


 int VAR_0 ;
__attribute__((used)) static inline int FUNC_0(
 struct se_cmd *VAR_1,
 unsigned char *VAR_2,
 u8 *VAR_3)
{




 switch (VAR_2[0]) {
 case 144:
 case 143:
 case 142:
 case 138:
 case 137:
 case 131:
 case 132:
 case 129:
  return 0;
 case 141:
  switch (VAR_2[1] & 0x1f) {
  case 139:
   return 0;
  default:
   *VAR_3 = VAR_0;
   return 1;
  }
 case 140:
  switch (VAR_2[1]) {
  case 136:
   return 0;
  default:
   *VAR_3 = VAR_0;
   return 1;
  }
 case 130:
 case 135:
 case 134:
 case 133:
 case 128:
  return 0;
 default:
  *VAR_3 = VAR_0;
  return 1;
 }

 return 0;
}
