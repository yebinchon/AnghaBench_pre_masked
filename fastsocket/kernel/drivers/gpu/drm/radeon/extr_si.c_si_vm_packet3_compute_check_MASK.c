
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct radeon_cs_packet {size_t idx; int opcode; int count; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_1,
           u32 *VAR_2, struct radeon_cs_packet *VAR_3)
{
 u32 VAR_4 = VAR_3->idx + 1;
 u32 VAR_5 = VAR_2[VAR_4];
 u32 VAR_6, VAR_7, VAR_8;

 switch (VAR_3->opcode) {
 case 144:
 case 140:
 case 158:
 case 152:
 case 151:
 case 161:
 case 128:
 case 159:
 case 160:
 case 143:
 case 137:
 case 157:
 case 141:
 case 155:
 case 134:
 case 130:
 case 146:
 case 142:
 case 133:
 case 150:
 case 149:
 case 148:
 case 139:
 case 138:
 case 136:
 case 135:
 case 147:
 case 131:
 case 132:
 case 145:
  break;
 case 154:
  if ((VAR_5 & 0xf00) == 0) {
   VAR_7 = VAR_2[VAR_4 + 3] * 4;
   if (!FUNC_1(VAR_7))
    return -VAR_0;
  }
  break;
 case 129:
  if ((VAR_5 & 0xf00) == 0) {
   VAR_6 = VAR_2[VAR_4 + 1] * 4;
   if (VAR_5 & 0x10000) {
    if (!FUNC_1(VAR_6))
     return -VAR_0;
   } else {
    for (VAR_8 = 0; VAR_8 < (VAR_3->count - 2); VAR_8++) {
     VAR_7 = VAR_6 + (4 * VAR_8);
     if (!FUNC_1(VAR_7))
      return -VAR_0;
    }
   }
  }
  break;
 case 156:
  if (VAR_5 & 0x100) {
   VAR_7 = VAR_2[VAR_4 + 5] * 4;
   if (!FUNC_1(VAR_7))
    return -VAR_0;
  }
  break;
 case 153:
  if (VAR_5 & 0x2) {
   VAR_7 = VAR_2[VAR_4 + 3] * 4;
   if (!FUNC_1(VAR_7))
    return -VAR_0;
  }
  break;
 default:
  FUNC_0("Invalid Compute packet3: 0x%x\n", VAR_3->opcode);
  return -VAR_0;
 }
 return 0;
}
