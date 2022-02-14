
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_2, unsigned char *VAR_3, ucs4_t VAR_4, int VAR_5)
{
  int VAR_6;
  if (VAR_4 < 0x80)
    VAR_6 = 1;
  else if (VAR_4 < 0x800)
    VAR_6 = 2;
  else if (VAR_4 < 0x10000)
    VAR_6 = 3;
  else if (VAR_4 < 0x200000)
    VAR_6 = 4;
  else if (VAR_4 < 0x4000000)
    VAR_6 = 5;
  else if (VAR_4 <= 0x7fffffff)
    VAR_6 = 6;
  else
    return VAR_0;
  if (VAR_5 < VAR_6)
    return VAR_1;
  switch (VAR_6) {
    case 6: VAR_3[5] = 0x80 | (VAR_4 & 0x3f); VAR_4 = VAR_4 >> 6; VAR_4 |= 0x4000000;
    case 5: VAR_3[4] = 0x80 | (VAR_4 & 0x3f); VAR_4 = VAR_4 >> 6; VAR_4 |= 0x200000;
    case 4: VAR_3[3] = 0x80 | (VAR_4 & 0x3f); VAR_4 = VAR_4 >> 6; VAR_4 |= 0x10000;
    case 3: VAR_3[2] = 0x80 | (VAR_4 & 0x3f); VAR_4 = VAR_4 >> 6; VAR_4 |= 0x800;
    case 2: VAR_3[1] = 0x80 | (VAR_4 & 0x3f); VAR_4 = VAR_4 >> 6; VAR_4 |= 0xc0;
    case 1: VAR_3[0] = VAR_4;
  }
  return VAR_6;
}
