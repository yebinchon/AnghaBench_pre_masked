
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct filter_data {int* tbl_5_to_8; int* tbl_6_to_8; int* RGBtoYUV; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(void * VAR_3)
{
   uint32_t VAR_4;
   struct filter_data *VAR_5 = (struct filter_data*)VAR_3;

   VAR_5->tbl_5_to_8[0] = 0;
   VAR_5->tbl_5_to_8[1] = 8;
   VAR_5->tbl_5_to_8[2] = 16;
   VAR_5->tbl_5_to_8[3] = 25;
   VAR_5->tbl_5_to_8[4] = 33;
   VAR_5->tbl_5_to_8[5] = 41;
   VAR_5->tbl_5_to_8[6] = 49;
   VAR_5->tbl_5_to_8[7] = 58;
   VAR_5->tbl_5_to_8[8] = 66;
   VAR_5->tbl_5_to_8[9] = 74;
   VAR_5->tbl_5_to_8[10] = 82;
   VAR_5->tbl_5_to_8[11] = 90;
   VAR_5->tbl_5_to_8[12] = 99;
   VAR_5->tbl_5_to_8[13] = 107;
   VAR_5->tbl_5_to_8[14] = 115;
   VAR_5->tbl_5_to_8[15] = 123;
   VAR_5->tbl_5_to_8[16] = 132;
   VAR_5->tbl_5_to_8[17] = 140;
   VAR_5->tbl_5_to_8[18] = 148;
   VAR_5->tbl_5_to_8[19] = 156;
   VAR_5->tbl_5_to_8[20] = 165;
   VAR_5->tbl_5_to_8[21] = 173;
   VAR_5->tbl_5_to_8[22] = 181;
   VAR_5->tbl_5_to_8[23] = 189;
   VAR_5->tbl_5_to_8[24] = 197;
   VAR_5->tbl_5_to_8[25] = 206;
   VAR_5->tbl_5_to_8[26] = 214;
   VAR_5->tbl_5_to_8[27] = 222;
   VAR_5->tbl_5_to_8[28] = 230;
   VAR_5->tbl_5_to_8[29] = 239;
   VAR_5->tbl_5_to_8[30] = 247;
   VAR_5->tbl_5_to_8[31] = 255;

   VAR_5->tbl_6_to_8[0] = 0;
   VAR_5->tbl_6_to_8[1] = 4;
   VAR_5->tbl_6_to_8[2] = 8;
   VAR_5->tbl_6_to_8[3] = 12;
   VAR_5->tbl_6_to_8[4] = 16;
   VAR_5->tbl_6_to_8[5] = 20;
   VAR_5->tbl_6_to_8[6] = 24;
   VAR_5->tbl_6_to_8[7] = 28;
   VAR_5->tbl_6_to_8[8] = 32;
   VAR_5->tbl_6_to_8[9] = 36;
   VAR_5->tbl_6_to_8[10] = 40;
   VAR_5->tbl_6_to_8[11] = 45;
   VAR_5->tbl_6_to_8[12] = 49;
   VAR_5->tbl_6_to_8[13] = 53;
   VAR_5->tbl_6_to_8[14] = 57;
   VAR_5->tbl_6_to_8[15] = 61;
   VAR_5->tbl_6_to_8[16] = 65;
   VAR_5->tbl_6_to_8[17] = 69;
   VAR_5->tbl_6_to_8[18] = 73;
   VAR_5->tbl_6_to_8[19] = 77;
   VAR_5->tbl_6_to_8[20] = 81;
   VAR_5->tbl_6_to_8[21] = 85;
   VAR_5->tbl_6_to_8[22] = 89;
   VAR_5->tbl_6_to_8[23] = 93;
   VAR_5->tbl_6_to_8[24] = 97;
   VAR_5->tbl_6_to_8[25] = 101;
   VAR_5->tbl_6_to_8[26] = 105;
   VAR_5->tbl_6_to_8[27] = 109;
   VAR_5->tbl_6_to_8[28] = 113;
   VAR_5->tbl_6_to_8[29] = 117;
   VAR_5->tbl_6_to_8[30] = 121;
   VAR_5->tbl_6_to_8[31] = 125;
   VAR_5->tbl_6_to_8[32] = 130;
   VAR_5->tbl_6_to_8[33] = 134;
   VAR_5->tbl_6_to_8[34] = 138;
   VAR_5->tbl_6_to_8[35] = 142;
   VAR_5->tbl_6_to_8[36] = 146;
   VAR_5->tbl_6_to_8[37] = 150;
   VAR_5->tbl_6_to_8[38] = 154;
   VAR_5->tbl_6_to_8[39] = 158;
   VAR_5->tbl_6_to_8[40] = 162;
   VAR_5->tbl_6_to_8[41] = 166;
   VAR_5->tbl_6_to_8[42] = 170;
   VAR_5->tbl_6_to_8[43] = 174;
   VAR_5->tbl_6_to_8[44] = 178;
   VAR_5->tbl_6_to_8[45] = 182;
   VAR_5->tbl_6_to_8[46] = 186;
   VAR_5->tbl_6_to_8[47] = 190;
   VAR_5->tbl_6_to_8[48] = 194;
   VAR_5->tbl_6_to_8[49] = 198;
   VAR_5->tbl_6_to_8[50] = 202;
   VAR_5->tbl_6_to_8[51] = 206;
   VAR_5->tbl_6_to_8[52] = 210;
   VAR_5->tbl_6_to_8[53] = 215;
   VAR_5->tbl_6_to_8[54] = 219;
   VAR_5->tbl_6_to_8[55] = 223;
   VAR_5->tbl_6_to_8[56] = 227;
   VAR_5->tbl_6_to_8[57] = 231;
   VAR_5->tbl_6_to_8[58] = 235;
   VAR_5->tbl_6_to_8[59] = 239;
   VAR_5->tbl_6_to_8[60] = 243;
   VAR_5->tbl_6_to_8[61] = 247;
   VAR_5->tbl_6_to_8[62] = 251;
   VAR_5->tbl_6_to_8[63] = 255;

   for (VAR_4 = 0; VAR_4 < 65536; VAR_4++)
   {
      uint16_t VAR_6 = VAR_5->tbl_5_to_8[(VAR_4 & VAR_2) >> 11];
      uint16_t VAR_7 = VAR_5->tbl_6_to_8[(VAR_4 & VAR_1) >> 5];
      uint16_t VAR_8 = VAR_5->tbl_5_to_8[(VAR_4 & VAR_0) ];
      uint16_t VAR_9 = ((VAR_6 << 4) + (VAR_7 << 5) + (VAR_8 << 2));
      uint16_t VAR_10 = ( -VAR_6 - (VAR_7 << 1) + (VAR_8 << 2));
      uint16_t VAR_11 = ((VAR_6 << 1) - (VAR_7 << 1) - (VAR_8 >> 1));
      VAR_5->RGBtoYUV[VAR_4] = VAR_9 + VAR_10 + VAR_11;
   }
}
