
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 unsigned short* VAR_5 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_6, unsigned char *VAR_7, ucs4_t VAR_8, int VAR_9)
{
  if (VAR_9 >= 2) {
    if (VAR_8 >= 0x3131 && VAR_8 < 0x3164) {
      unsigned short VAR_10 = VAR_5[VAR_8-0x3131];
      VAR_7[0] = (VAR_10 >> 8); VAR_7[1] = (VAR_10 & 0xff);
      return 2;
    } else if (VAR_8 >= 0xac00 && VAR_8 < 0xd7a4) {
      unsigned int VAR_11;
      unsigned int VAR_12;
      unsigned int VAR_13;
      unsigned short VAR_14;
      unsigned int VAR_15 = VAR_8 - 0xac00;
      VAR_13 = VAR_15 % 28; VAR_15 = VAR_15 / 28;
      VAR_12 = VAR_15 % 21; VAR_15 = VAR_15 / 21;
      VAR_11 = VAR_15;
      VAR_14 = (((((1 << 5)
              | VAR_3[VAR_11]) << 5)
            | VAR_4[VAR_12]) << 5)
          | VAR_2[VAR_13];
      VAR_7[0] = (VAR_14 >> 8); VAR_7[1] = (VAR_14 & 0xff);
      return 2;
    }
    return VAR_0;
  }
  return VAR_1;
}
