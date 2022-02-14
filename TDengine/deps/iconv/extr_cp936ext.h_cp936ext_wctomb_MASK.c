
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

__attribute__((used)) static int
FUNC_0 (conv_t VAR_5, unsigned char *VAR_6, ucs4_t VAR_7, int VAR_8)
{
  if (VAR_8 >= 2) {
    unsigned short VAR_9 = 0;
    if (VAR_7 >= 0x0140 && VAR_7 < 0x0150)
      VAR_9 = VAR_2[VAR_7-0x0140];
    else if (VAR_7 >= 0x0250 && VAR_7 < 0x0268)
      VAR_9 = VAR_3[VAR_7-0x0250];
    else if (VAR_7 >= 0xfe30 && VAR_7 < 0xfe48)
      VAR_9 = VAR_4[VAR_7-0xfe30];
    if (VAR_9 != 0) {
      VAR_6[0] = (VAR_9 >> 8); VAR_6[1] = (VAR_9 & 0xff);
      return 2;
    }
    return VAR_0;
  }
  return VAR_1;
}
