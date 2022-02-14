
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct radeon_cs_packet {size_t idx; int opcode; int count; } ;



 int FUNC_0 (char*) ;
 int VAR_0 ;






 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_7,
          u32 *VAR_8, struct radeon_cs_packet *VAR_9)
{
 u32 VAR_10 = VAR_9->idx + 1;
 u32 VAR_11 = VAR_8[VAR_10];
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 u32 VAR_16, VAR_17;

 switch (VAR_9->opcode) {
 case 145:
 case 142:
 case 172:
 case 150:
 case 166:
 case 165:
 case 147:
 case 135:
 case 171:
 case 143:
 case 155:
 case 160:
 case 151:
 case 163:
 case 169:
 case 157:
 case 149:
 case 164:
 case 162:
 case 161:
 case 144:
 case 159:
 case 130:
 case 156:
 case 158:
 case 146:
 case 128:
 case 148:
 case 129:
 case 154:
 case 153:
 case 152:
 case 139:
 case 141:
 case 136:
 case 134:
 case 131:
 case 137:
 case 132:
 case 138:
 case 133:
 case 173:
  break;
 case 170:
  if (VAR_11 & 0x100) {
   VAR_14 = VAR_8[VAR_10 + 5] * 4;
   if (!FUNC_1(VAR_14))
    return -VAR_0;
  }
  break;
 case 168:
  if (VAR_11 & 0x2) {
   VAR_14 = VAR_8[VAR_10 + 3] * 4;
   if (!FUNC_1(VAR_14))
    return -VAR_0;
  }
  break;
 case 140:
  VAR_12 = (VAR_11 << 2) + VAR_6;
  VAR_13 = 4 * VAR_9->count + VAR_12 - 4;
  if ((VAR_12 < VAR_6) ||
      (VAR_12 >= VAR_5) ||
      (VAR_13 >= VAR_5)) {
   FUNC_0("bad PACKET3_SET_CONFIG_REG\n");
   return -VAR_0;
  }
  for (VAR_15 = 0; VAR_15 < VAR_9->count; VAR_15++) {
   VAR_14 = VAR_12 + (4 * VAR_15);
   if (!FUNC_1(VAR_14))
    return -VAR_0;
  }
  break;
 case 167:
  VAR_16 = VAR_8[VAR_10 + 4];
  VAR_17 = VAR_8[VAR_10 + 1];
  if ((((VAR_17 & 0x60000000) >> 29) != 0) ||
      (((VAR_17 & 0x00300000) >> 20) != 0) ||
      ((((VAR_17 & 0x00300000) >> 20) == 0) &&
       (VAR_16 & VAR_2)) ||
      ((((VAR_17 & 0x60000000) >> 29) == 0) &&
       (VAR_16 & VAR_4))) {

   if ((VAR_16 & 0x1fffff) % 4) {
    FUNC_0("CP DMA command requires dw count alignment\n");
    return -VAR_0;
   }
  }
  if (VAR_16 & VAR_4) {

   if (((VAR_17 & 0x60000000) >> 29) == 0) {
    VAR_12 = VAR_11 << 2;
    if (VAR_16 & VAR_3) {
     VAR_14 = VAR_12;
     if (!FUNC_1(VAR_14)) {
      FUNC_0("CP DMA Bad SRC register\n");
      return -VAR_0;
     }
    } else {
     for (VAR_15 = 0; VAR_15 < (VAR_16 & 0x1fffff); VAR_15++) {
      VAR_14 = VAR_12 + (4 * VAR_15);
      if (!FUNC_1(VAR_14)) {
       FUNC_0("CP DMA Bad SRC register\n");
       return -VAR_0;
      }
     }
    }
   }
  }
  if (VAR_16 & VAR_2) {

   if (((VAR_17 & 0x00300000) >> 20) == 0) {
    VAR_12 = VAR_8[VAR_10 + 2];
    if (VAR_16 & VAR_1) {
     VAR_14 = VAR_12;
     if (!FUNC_1(VAR_14)) {
      FUNC_0("CP DMA Bad DST register\n");
      return -VAR_0;
     }
    } else {
     for (VAR_15 = 0; VAR_15 < (VAR_16 & 0x1fffff); VAR_15++) {
      VAR_14 = VAR_12 + (4 * VAR_15);
      if (!FUNC_1(VAR_14)) {
       FUNC_0("CP DMA Bad DST register\n");
       return -VAR_0;
      }
     }
    }
   }
  }
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
