
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short* VAR_2 ;
 unsigned short* VAR_3 ;
 unsigned short* VAR_4 ;
 unsigned short* VAR_5 ;
 unsigned short* VAR_6 ;
 unsigned short* VAR_7 ;
 unsigned short* VAR_8 ;
 unsigned short* VAR_9 ;
 unsigned short* VAR_10 ;
 unsigned short* VAR_11 ;
 unsigned short* VAR_12 ;
 unsigned short* VAR_13 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_14, unsigned char *VAR_15, ucs4_t VAR_16, int VAR_17)
{
  if (VAR_17 >= 2) {
    unsigned short VAR_18 = 0;
    if (VAR_16 == 0x01f9)
      VAR_18 = 0xa8bf;
    else if (VAR_16 == 0x20ac)
      VAR_18 = 0xa2e3;
    else if (VAR_16 >= 0x2e80 && VAR_16 < 0x2ed0)
      VAR_18 = VAR_2[VAR_16-0x2e80];
    else if (VAR_16 >= 0x2ff0 && VAR_16 < 0x3000)
      VAR_18 = VAR_3[VAR_16-0x2ff0];
    else if (VAR_16 == 0x303e)
      VAR_18 = 0xa989;
    else if (VAR_16 >= 0x3440 && VAR_16 < 0x3478)
      VAR_18 = VAR_4[VAR_16-0x3440];
    else if (VAR_16 == 0x359e)
      VAR_18 = 0xfe5a;
    else if (VAR_16 >= 0x3608 && VAR_16 < 0x3620)
      VAR_18 = VAR_5[VAR_16-0x3608];
    else if (VAR_16 == 0x3918)
      VAR_18 = 0xfe60;
    else if (VAR_16 == 0x396e)
      VAR_18 = 0xfe5f;
    else if (VAR_16 >= 0x39c8 && VAR_16 < 0x39e0)
      VAR_18 = VAR_6[VAR_16-0x39c8];
    else if (VAR_16 == 0x3a73)
      VAR_18 = 0xfe64;
    else if (VAR_16 == 0x3b4e)
      VAR_18 = 0xfe68;
    else if (VAR_16 == 0x3c6e)
      VAR_18 = 0xfe69;
    else if (VAR_16 == 0x3ce0)
      VAR_18 = 0xfe6a;
    else if (VAR_16 == 0x4056)
      VAR_18 = 0xfe6f;
    else if (VAR_16 == 0x415f)
      VAR_18 = 0xfe70;
    else if (VAR_16 == 0x4337)
      VAR_18 = 0xfe72;
    else if (VAR_16 >= 0x43a8 && VAR_16 < 0x43e0)
      VAR_18 = VAR_7[VAR_16-0x43a8];
    else if (VAR_16 == 0x44d6)
      VAR_18 = 0xfe7b;
    else if (VAR_16 >= 0x4648 && VAR_16 < 0x4668)
      VAR_18 = VAR_8[VAR_16-0x4648];
    else if (VAR_16 >= 0x4720 && VAR_16 < 0x4730)
      VAR_18 = VAR_9[VAR_16-0x4720];
    else if (VAR_16 >= 0x4778 && VAR_16 < 0x4790)
      VAR_18 = VAR_10[VAR_16-0x4778];
    else if (VAR_16 >= 0x4940 && VAR_16 < 0x49b8)
      VAR_18 = VAR_11[VAR_16-0x4940];
    else if (VAR_16 >= 0x4c70 && VAR_16 < 0x4ca8)
      VAR_18 = VAR_12[VAR_16-0x4c70];
    else if (VAR_16 >= 0x4d10 && VAR_16 < 0x4d20)
      VAR_18 = VAR_13[VAR_16-0x4d10];
    else if (VAR_16 == 0x4dae)
      VAR_18 = 0xfe9f;
    if (VAR_18 != 0) {
      VAR_15[0] = (VAR_18 >> 8); VAR_15[1] = (VAR_18 & 0xff);
      return 2;
    }
    return VAR_0;
  }
  return VAR_1;
}
