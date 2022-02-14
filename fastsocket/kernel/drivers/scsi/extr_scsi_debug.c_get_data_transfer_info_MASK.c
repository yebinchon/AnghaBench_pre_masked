
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
__attribute__((used)) static void FUNC_0(unsigned char *VAR_0,
       unsigned long long *VAR_1, unsigned int *VAR_2,
       u32 *VAR_3)
{
 *VAR_3 = 0;

 switch (*VAR_0) {
 case 135:
  *VAR_1 = (u64)VAR_0[19] | (u64)VAR_0[18] << 8 |
   (u64)VAR_0[17] << 16 | (u64)VAR_0[16] << 24 |
   (u64)VAR_0[15] << 32 | (u64)VAR_0[14] << 40 |
   (u64)VAR_0[13] << 48 | (u64)VAR_0[12] << 56;

  *VAR_3 = (u32)VAR_0[23] | (u32)VAR_0[22] << 8 |
   (u32)VAR_0[21] << 16 | (u32)VAR_0[20] << 24;

  *VAR_2 = (u32)VAR_0[31] | (u32)VAR_0[30] << 8 | (u32)VAR_0[29] << 16 |
   (u32)VAR_0[28] << 24;
  break;

 case 129:
 case 132:
 case 137:
  *VAR_1 = (u64)VAR_0[9] | (u64)VAR_0[8] << 8 |
   (u64)VAR_0[7] << 16 | (u64)VAR_0[6] << 24 |
   (u64)VAR_0[5] << 32 | (u64)VAR_0[4] << 40 |
   (u64)VAR_0[3] << 48 | (u64)VAR_0[2] << 56;

  *VAR_2 = (u32)VAR_0[13] | (u32)VAR_0[12] << 8 | (u32)VAR_0[11] << 16 |
   (u32)VAR_0[10] << 24;
  break;
 case 133:
 case 138:
  *VAR_1 = (u32)VAR_0[5] | (u32)VAR_0[4] << 8 | (u32)VAR_0[3] << 16 |
   (u32)VAR_0[2] << 24;

  *VAR_2 = (u32)VAR_0[9] | (u32)VAR_0[8] << 8 | (u32)VAR_0[7] << 16 |
   (u32)VAR_0[6] << 24;
  break;
 case 130:
 case 134:
 case 139:
 case 128:
  *VAR_1 = (u32)VAR_0[5] | (u32)VAR_0[4] << 8 | (u32)VAR_0[3] << 16 |
   (u32)VAR_0[2] << 24;

  *VAR_2 = (u32)VAR_0[8] | (u32)VAR_0[7] << 8;
  break;
 case 131:
 case 136:
  *VAR_1 = (u32)VAR_0[3] | (u32)VAR_0[2] << 8 |
   (u32)(VAR_0[1] & 0x1f) << 16;
  *VAR_2 = (0 == VAR_0[4]) ? 256 : VAR_0[4];
  break;
 default:
  break;
 }
}
