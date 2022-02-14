
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int ucs4_t ;
typedef int state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_3__ {int ostate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;

__attribute__((used)) static int
FUNC_4 (conv_t VAR_3, unsigned char *VAR_4, ucs4_t VAR_5, int VAR_6)
{
  state_t VAR_7 = VAR_3->ostate;
  unsigned int VAR_8 = VAR_5;
  int VAR_9 = 0;
  if (VAR_7 & 3)
    goto active;


  {
    if (VAR_2 ? FUNC_1(VAR_8) : FUNC_3(VAR_8)) {
      VAR_4[0] = (unsigned char) VAR_8;

      return 1;
    } else {
      *VAR_4++ = '+';
      if (VAR_8 == '+') {
        if (VAR_6 < 2)
          return VAR_1;
        *VAR_4 = '-';

        return 2;
      }
      VAR_9 = 1;
      VAR_7 = 1;
      goto active;
    }
  }

active:
  {

    if (VAR_2 ? FUNC_1(VAR_8) : FUNC_3(VAR_8)) {

      VAR_9 += ((VAR_7 & 3) >= 2 ? 1 : 0) + (FUNC_2(VAR_8) ? 1 : 0) + 1;
      if (VAR_6 < VAR_9)
        return VAR_1;
      if ((VAR_7 & 3) >= 2) {
        unsigned int VAR_10 = VAR_7 & -4;
        unsigned char VAR_11;
        if (VAR_10 < 26)
          VAR_11 = VAR_10+'A';
        else if (VAR_10 < 52)
          VAR_11 = VAR_10-26+'a';
        else if (VAR_10 < 62)
          VAR_11 = VAR_10-52+'0';
        else if (VAR_10 == 62)
          VAR_11 = '+';
        else if (VAR_10 == 63)
          VAR_11 = '/';
        else
          FUNC_0();
        *VAR_4++ = VAR_11;
      }
      if (FUNC_2(VAR_8))
        *VAR_4++ = '-';
      VAR_7 = 0;
      *VAR_4++ = (unsigned char) VAR_8;
      VAR_3->ostate = VAR_7;
      return VAR_9;
    } else {
      unsigned int VAR_12;
      if (VAR_8 < 0x10000) {
        VAR_12 = 2;
        VAR_9 += ((VAR_7 & 3) >= 2 ? 3 : 2);
      } else if (VAR_8 < 0x110000) {
        unsigned int VAR_13 = 0xd800 + ((VAR_8 - 0x10000) >> 10);
        unsigned int VAR_14 = 0xdc00 + ((VAR_8 - 0x10000) & 0x3ff);
        VAR_8 = (VAR_13 << 16) | VAR_14;
        VAR_12 = 4;
        VAR_9 += ((VAR_7 & 3) >= 3 ? 6 : 5);
      } else
        return VAR_0;
      if (VAR_6 < VAR_9)
        return VAR_1;
      for (;;) {
        unsigned int VAR_15;
        unsigned char VAR_16;
        switch (VAR_7 & 3) {
          case 0:
            VAR_16 = (VAR_7 & -4) >> 2; VAR_7 = 1; break;
          case 1:
            VAR_15 = (VAR_8 >> (8 * --VAR_12)) & 0xff;
            VAR_16 = VAR_15 >> 2; VAR_7 = ((VAR_15 & 3) << 4) | 2; break;
          case 2:
            VAR_15 = (VAR_8 >> (8 * --VAR_12)) & 0xff;
            VAR_16 = (VAR_7 & -4) | (VAR_15 >> 4); VAR_7 = ((VAR_15 & 15) << 2) | 3; break;
          case 3:
            VAR_15 = (VAR_8 >> (8 * --VAR_12)) & 0xff;
            VAR_16 = (VAR_7 & -4) | (VAR_15 >> 6); VAR_7 = ((VAR_15 & 63) << 2) | 0; break;
          default: FUNC_0();
        }
        if (VAR_16 < 26)
          VAR_16 = VAR_16+'A';
        else if (VAR_16 < 52)
          VAR_16 = VAR_16-26+'a';
        else if (VAR_16 < 62)
          VAR_16 = VAR_16-52+'0';
        else if (VAR_16 == 62)
          VAR_16 = '+';
        else if (VAR_16 == 63)
          VAR_16 = '/';
        else
          FUNC_0();
        *VAR_4++ = VAR_16;
        if ((VAR_7 & 3) && (VAR_12 == 0))
          break;
      }
      VAR_3->ostate = VAR_7;
      return VAR_9;
    }
  }
}
