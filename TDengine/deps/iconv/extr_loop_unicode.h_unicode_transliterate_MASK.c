
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ucs4_t ;
typedef void* state_t ;
typedef TYPE_2__* conv_t ;
struct TYPE_9__ {int (* xxx_wctomb ) (TYPE_2__*,unsigned char*,int,size_t) ;} ;
struct TYPE_10__ {int oflags; void* ostate; TYPE_1__ ofuncs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 unsigned short* VAR_5 ;
 int* VAR_6 ;
 int FUNC_1 (TYPE_2__*,int*,int) ;
 int FUNC_2 (TYPE_2__*,unsigned char*,int,size_t) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,int,size_t) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,int,size_t) ;
 int FUNC_5 (TYPE_2__*,unsigned char*,unsigned int const,size_t) ;
 unsigned int* VAR_7 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7 (conv_t VAR_8, ucs4_t VAR_9,
                                  unsigned char* VAR_10, size_t VAR_11)
{
  if (VAR_8->oflags & VAR_1) {



    ucs4_t VAR_12[3];
    int VAR_13 = FUNC_1(VAR_8,VAR_12,VAR_9);
    if (VAR_13 != VAR_3) {

      state_t VAR_14 = VAR_8->ostate;
      unsigned char* VAR_15 = VAR_10;
      size_t VAR_16 = VAR_11;
      int VAR_17, VAR_18;
      for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
        if (VAR_11 == 0) {
          VAR_18 = VAR_4;
          goto johab_hangul_failed;
        }
        VAR_18 = VAR_8->ofuncs.xxx_wctomb(VAR_8,VAR_10,VAR_12[VAR_17],VAR_11);
        if (VAR_18 <= VAR_3)
          goto johab_hangul_failed;
        if (!(VAR_18 <= VAR_11)) FUNC_0();
        VAR_10 += VAR_18; VAR_11 -= VAR_18;
      }
      return VAR_10-VAR_15;
    johab_hangul_failed:
      VAR_8->ostate = VAR_14;
      VAR_10 = VAR_15;
      VAR_11 = VAR_16;
      if (VAR_18 != VAR_3)
        return VAR_4;
    }
  }
  {



    int VAR_19 = -1;
    if (VAR_9 == 0x3006)
      VAR_19 = 0;
    else if (VAR_9 == 0x30f6)
      VAR_19 = 1;
    else if (VAR_9 >= 0x4e00 && VAR_9 < 0xa000)
      VAR_19 = VAR_6[VAR_9-0x4e00];
    if (VAR_19 >= 0) {
      for (;; VAR_19++) {
        ucs4_t VAR_20[2];
        unsigned short VAR_21 = VAR_5[VAR_19];
        unsigned short VAR_22 = VAR_21 & 0x8000;
        VAR_21 &= 0x7fff;
        VAR_21 += 0x3000;
        VAR_20[0] = VAR_21; VAR_20[1] = 0x303e;
        {
          state_t VAR_23 = VAR_8->ostate;
          unsigned char* VAR_24 = VAR_10;
          size_t VAR_25 = VAR_11;
          int VAR_26, VAR_27;
          for (VAR_26 = 0; VAR_26 < 2; VAR_26++) {
            if (VAR_11 == 0) {
              VAR_27 = VAR_4;
              goto variant_failed;
            }
            VAR_27 = VAR_8->ofuncs.xxx_wctomb(VAR_8,VAR_10,VAR_20[VAR_26],VAR_11);
            if (VAR_27 <= VAR_3)
              goto variant_failed;
            if (!(VAR_27 <= VAR_11)) FUNC_0();
            VAR_10 += VAR_27; VAR_11 -= VAR_27;
          }
          return VAR_10-VAR_24;
        variant_failed:
          VAR_8->ostate = VAR_23;
          VAR_10 = VAR_24;
          VAR_11 = VAR_25;
          if (VAR_27 != VAR_3)
            return VAR_4;
        }
        if (VAR_22)
          break;
      }
    }
  }
  if (VAR_9 >= 0x2018 && VAR_9 <= 0x201a) {

    ucs4_t VAR_28 =
      (VAR_8->oflags & VAR_2
       ? (VAR_9 == 0x201a ? 0x2018 : VAR_9)
       : (VAR_8->oflags & VAR_0
          ? (VAR_9==0x2019 ? 0x00b4 : 0x0060)
          : 0x0027
      ) );
    int VAR_29 = VAR_8->ofuncs.xxx_wctomb(VAR_8,VAR_10,VAR_28,VAR_11);
    if (VAR_29 != VAR_3)
      return VAR_29;
  }
  {

    int VAR_30 = FUNC_6(VAR_9);
    if (VAR_30 >= 0) {
      const unsigned int * VAR_31 = &VAR_7[VAR_30];
      unsigned int VAR_32 = *VAR_31++;
      state_t VAR_33 = VAR_8->ostate;
      unsigned char* VAR_34 = VAR_10;
      size_t VAR_35 = VAR_11;
      unsigned int VAR_36;
      int VAR_37;
      for (VAR_36 = 0; VAR_36 < VAR_32; VAR_36++) {
        if (VAR_11 == 0) {
          VAR_37 = VAR_4;
          goto translit_failed;
        }
        VAR_37 = VAR_8->ofuncs.xxx_wctomb(VAR_8,VAR_10,VAR_31[VAR_36],VAR_11);
        if (VAR_37 == VAR_3)

          VAR_37 = FUNC_7(VAR_8,VAR_31[VAR_36],VAR_10,VAR_11);
        if (VAR_37 <= VAR_3)
          goto translit_failed;
        if (!(VAR_37 <= VAR_11)) FUNC_0();
        VAR_10 += VAR_37; VAR_11 -= VAR_37;
      }
      return VAR_10-VAR_34;
    translit_failed:
      VAR_8->ostate = VAR_33;
      VAR_10 = VAR_34;
      VAR_11 = VAR_35;
      if (VAR_37 != VAR_3)
        return VAR_4;
    }
  }
  return VAR_3;
}
