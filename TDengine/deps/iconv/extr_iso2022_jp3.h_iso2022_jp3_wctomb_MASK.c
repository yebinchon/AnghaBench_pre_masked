
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ucs4_t ;
typedef scalar_t__ state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_8__ {int base; int composed; } ;
struct TYPE_7__ {scalar_t__ ostate; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int,int) ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 TYPE_5__* VAR_22 ;
 int FUNC_2 (TYPE_1__*,unsigned char*,int,int) ;
 int FUNC_3 (TYPE_1__*,unsigned char*,int,int) ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 unsigned short FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5 (conv_t VAR_25, unsigned char *VAR_26, ucs4_t VAR_27, int VAR_28)
{
  int VAR_29 = 0;
  unsigned char VAR_30[2];
  unsigned short VAR_31;
  int VAR_32;
  state_t VAR_33 = VAR_25->ostate;
  VAR_5;

  if (VAR_23) {

    unsigned int VAR_34;
    unsigned int VAR_35;

    if (VAR_27 == 0x02e5)
      VAR_34 = VAR_12,
      VAR_35 = VAR_13;
    else if (VAR_27 == 0x02e9)
      VAR_34 = VAR_14,
      VAR_35 = VAR_15;
    else if (VAR_27 == 0x0300)
      VAR_34 = VAR_16,
      VAR_35 = VAR_17;
    else if (VAR_27 == 0x0301)
      VAR_34 = VAR_18,
      VAR_35 = VAR_19;
    else if (VAR_27 == 0x309a)
      VAR_34 = VAR_20,
      VAR_35 = VAR_21;
    else
      goto not_combining;

    do
      if (VAR_22[VAR_34].base == VAR_23)
        break;
    while (++VAR_34, --VAR_35 > 0);

    if (VAR_35 > 0) {




      VAR_29 = (VAR_33 != VAR_10 ? 4 : 0) + 2;
      if (VAR_28 < VAR_29)
        return VAR_4;
      if (VAR_33 != VAR_10) {
        VAR_26[0] = VAR_2;
        VAR_26[1] = '$';
        VAR_26[2] = '(';
        VAR_26[3] = 'Q';
        VAR_26 += 4;
        VAR_33 = VAR_10;
      }
      VAR_23 = VAR_22[VAR_34].composed;
      VAR_26[0] = (VAR_23 >> 8) & 0xff;
      VAR_26[1] = VAR_23 & 0xff;
      VAR_1;
      VAR_25->ostate = VAR_33;
      return VAR_29;
    }

  not_combining:


    VAR_29 = (VAR_24 != VAR_33 ? 3 : 0) + 2;
    if (VAR_28 < VAR_29)
      return VAR_4;
    if (VAR_24 != VAR_33) {
      if (VAR_33 != VAR_9) FUNC_0();
      VAR_26[0] = VAR_2;
      VAR_26[1] = '$';
      VAR_26[2] = 'B';
      VAR_26 += 3;
    }
    VAR_26[0] = (VAR_23 >> 8) & 0xff;
    VAR_26[1] = VAR_23 & 0xff;
    VAR_26 += 2;
  }


  VAR_32 = FUNC_1(VAR_25,VAR_30,VAR_27,1);
  if (VAR_32 != VAR_3) {
    if (VAR_32 != 1) FUNC_0();
    if (VAR_30[0] < 0x80) {
      VAR_29 += (VAR_33 == VAR_6 ? 1 : 4);
      if (VAR_28 < VAR_29)
        return VAR_4;
      if (VAR_33 != VAR_6) {
        VAR_26[0] = VAR_2;
        VAR_26[1] = '(';
        VAR_26[2] = 'B';
        VAR_26 += 3;
        VAR_33 = VAR_6;
      }
      VAR_26[0] = VAR_30[0];
      VAR_1;
      VAR_25->ostate = VAR_33;
      return VAR_29;
    }
  }


  VAR_32 = FUNC_2(VAR_25,VAR_30,VAR_27,1);
  if (VAR_32 != VAR_3) {
    if (VAR_32 != 1) FUNC_0();
    if (VAR_30[0] < 0x80) {
      VAR_29 += (VAR_33 == VAR_8 ? 1 : 4);
      if (VAR_28 < VAR_29)
        return VAR_4;
      if (VAR_33 != VAR_8) {
        VAR_26[0] = VAR_2;
        VAR_26[1] = '(';
        VAR_26[2] = 'J';
        VAR_26 += 3;
        VAR_33 = VAR_8;
      }
      VAR_26[0] = VAR_30[0];
      VAR_1;
      VAR_25->ostate = VAR_33;
      return VAR_29;
    }
  }

  VAR_31 = FUNC_4(VAR_27);


  VAR_32 = FUNC_3(VAR_25,VAR_30,VAR_27,2);
  if (VAR_32 != VAR_3) {
    if (VAR_32 != 2) FUNC_0();
    if (VAR_30[0] < 0x80 && VAR_30[1] < 0x80) {
      if (VAR_31 & 0x0080) {

        VAR_24 = VAR_33;
        VAR_23 = VAR_31 & 0x7f7f;
        VAR_33 = VAR_9;
        VAR_0;
        VAR_25->ostate = VAR_33;
        return VAR_29;
      } else {
        VAR_29 += (VAR_33 == VAR_9 ? 2 : 5);
        if (VAR_28 < VAR_29)
          return VAR_4;
        if (VAR_33 != VAR_9) {
          VAR_26[0] = VAR_2;
          VAR_26[1] = '$';
          VAR_26[2] = 'B';
          VAR_26 += 3;
          VAR_33 = VAR_9;
        }
        VAR_26[0] = VAR_30[0];
        VAR_26[1] = VAR_30[1];
        VAR_1;
        VAR_25->ostate = VAR_33;
        return VAR_29;
      }
    }
  }


  if (VAR_31 != 0) {
    if (VAR_31 & 0x8000) {

      if (VAR_33 != VAR_11) {
        VAR_29 += 4;
        if (VAR_28 < VAR_29)
          return VAR_4;
        VAR_26[0] = VAR_2;
        VAR_26[1] = '$';
        VAR_26[2] = '(';
        VAR_26[3] = 'P';
        VAR_26 += 4;
        VAR_33 = VAR_11;
      }
    } else {

      if (VAR_33 != VAR_10) {
        VAR_29 += 4;
        if (VAR_28 < VAR_29)
          return VAR_4;
        VAR_26[0] = VAR_2;
        VAR_26[1] = '$';
        VAR_26[2] = '(';
        VAR_26[3] = 'Q';
        VAR_26 += 4;
        VAR_33 = VAR_10;
      }
    }
    if (VAR_31 & 0x0080) {


      if (VAR_31 & 0x8000) FUNC_0();
      VAR_24 = VAR_33;
      VAR_23 = VAR_31 & 0x7f7f;
      VAR_0;
      VAR_25->ostate = VAR_33;
      return VAR_29;
    }
    VAR_29 += 2;
    if (VAR_28 < VAR_29)
      return VAR_4;
    VAR_26[0] = (VAR_31 >> 8) & 0x7f;
    VAR_26[1] = VAR_31 & 0x7f;
    VAR_1;
    VAR_25->ostate = VAR_33;
    return VAR_29;
  }



  VAR_32 = FUNC_2(VAR_25,VAR_30,VAR_27,1);
  if (VAR_32 != VAR_3) {
    if (VAR_32 != 1) FUNC_0();
    if (VAR_30[0] >= 0x80) {
      VAR_29 += (VAR_33 == VAR_7 ? 1 : 4);
      if (VAR_28 < VAR_29)
        return VAR_4;
      if (VAR_33 != VAR_7) {
        VAR_26[0] = VAR_2;
        VAR_26[1] = '(';
        VAR_26[2] = 'I';
        VAR_26 += 3;
        VAR_33 = VAR_7;
      }
      VAR_26[0] = VAR_30[0]-0x80;
      VAR_1;
      VAR_25->ostate = VAR_33;
      return VAR_29;
    }
  }

  return VAR_3;
}
