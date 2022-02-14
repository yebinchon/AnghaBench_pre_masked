
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ucs4_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_5__ {unsigned short base; unsigned short composed; } ;
struct TYPE_4__ {unsigned short ostate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 TYPE_3__* VAR_12 ;
 unsigned short FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (conv_t VAR_13, unsigned char *VAR_14, ucs4_t VAR_15, int VAR_16)
{
  int VAR_17 = 0;
  unsigned short VAR_18 = VAR_13->ostate;

  if (VAR_18) {

    unsigned int VAR_19;
    unsigned int VAR_20;

    if (VAR_15 == 0x02e5)
      VAR_19 = VAR_2,
      VAR_20 = VAR_3;
    else if (VAR_15 == 0x02e9)
      VAR_19 = VAR_4,
      VAR_20 = VAR_5;
    else if (VAR_15 == 0x0300)
      VAR_19 = VAR_6,
      VAR_20 = VAR_7;
    else if (VAR_15 == 0x0301)
      VAR_19 = VAR_8,
      VAR_20 = VAR_9;
    else if (VAR_15 == 0x309a)
      VAR_19 = VAR_10,
      VAR_20 = VAR_11;
    else
      goto not_combining;

    do
      if (VAR_12[VAR_19].base == VAR_18)
        break;
    while (++VAR_19, --VAR_20 > 0);

    if (VAR_20 > 0) {

      if (VAR_16 >= 2) {
        VAR_18 = VAR_12[VAR_19].composed;
        VAR_14[0] = (VAR_18 >> 8) & 0xff;
        VAR_14[1] = VAR_18 & 0xff;
        VAR_13->ostate = 0;
        return 2;
      } else
        return VAR_1;
    }

  not_combining:

    if (VAR_16 < 2)
      return VAR_1;
    VAR_14[0] = (VAR_18 >> 8) & 0xff;
    VAR_14[1] = VAR_18 & 0xff;
    VAR_14 += 2;
    VAR_17 = 2;
  }

  if (VAR_15 < 0x80 && VAR_15 != 0x5c && VAR_15 != 0x7e) {

    if (VAR_16 > VAR_17) {
      VAR_14[0] = (unsigned char) VAR_15;
      VAR_13->ostate = 0;
      return VAR_17+1;
    } else
      return VAR_1;
  } else if (VAR_15 == 0x00a5) {
    if (VAR_16 > VAR_17) {
      VAR_14[0] = 0x5c;
      VAR_13->ostate = 0;
      return VAR_17+1;
    } else
      return VAR_1;
  } else if (VAR_15 == 0x203e) {
    if (VAR_16 > VAR_17) {
      VAR_14[0] = 0x7e;
      VAR_13->ostate = 0;
      return VAR_17+1;
    } else
      return VAR_1;
  } else if (VAR_15 >= 0xff61 && VAR_15 <= 0xff9f) {

    if (VAR_16 > VAR_17) {
      VAR_14[0] = VAR_15 - 0xfec0;
      VAR_13->ostate = 0;
      return VAR_17+1;
    } else
      return VAR_1;
  } else {
    unsigned int VAR_21, VAR_22;
    unsigned short VAR_23 = FUNC_1(VAR_15);
    if (VAR_23 != 0) {

      VAR_21 = VAR_23 >> 8;
      VAR_22 = VAR_23 & 0x7f;
      VAR_21 -= 0x21;
      VAR_22 -= 0x21;
      if (VAR_21 >= 0x5e) {

        if (VAR_21 >= 0xcd)
          VAR_21 -= 102;
        else if (VAR_21 >= 0x8b || VAR_21 == 0x87)
          VAR_21 -= 40;
        else
          VAR_21 -= 34;

      }
      if (VAR_21 & 1)
        VAR_22 += 0x5e;
      VAR_21 = VAR_21 >> 1;
      if (VAR_21 < 0x1f)
        VAR_21 += 0x81;
      else
        VAR_21 += 0xc1;
      if (VAR_22 < 0x3f)
        VAR_22 += 0x40;
      else
        VAR_22 += 0x41;
      if (VAR_23 & 0x0080) {


        if (VAR_23 & 0x8000) FUNC_0();
        VAR_13->ostate = (VAR_21 << 8) | VAR_22;
        return VAR_17+0;
      }

      if (VAR_16 >= VAR_17+2) {
        VAR_14[0] = VAR_21;
        VAR_14[1] = VAR_22;
        VAR_13->ostate = 0;
        return VAR_17+2;
      } else
        return VAR_1;
    }
    return VAR_0;
  }
}
