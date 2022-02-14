
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ucs4_t ;
typedef void* state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_7__ {void* ostate; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int,int) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,int,int) ;
 int FUNC_3 (TYPE_1__*,unsigned char*,int,int) ;
 int FUNC_4 (TYPE_1__*,unsigned char*,int,int) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;

__attribute__((used)) static int
FUNC_5 (conv_t VAR_24, unsigned char *VAR_25, ucs4_t VAR_26, int VAR_27)
{
  state_t VAR_28 = VAR_24->ostate;
  VAR_6;
  unsigned char VAR_29[3];
  int VAR_30;





  VAR_30 = FUNC_1(VAR_24,VAR_29,VAR_26,1);
  if (VAR_30 != VAR_2) {
    if (VAR_30 != 1) FUNC_0();
    if (VAR_29[0] < 0x80) {
      int VAR_31 = (VAR_20 == VAR_18 ? 1 : 2);
      if (VAR_27 < VAR_31)
        return VAR_3;
      if (VAR_20 != VAR_18) {
        VAR_25[0] = VAR_4;
        VAR_25 += 1;
        VAR_20 = VAR_18;
      }
      VAR_25[0] = VAR_29[0];
      if (VAR_26 == 0x000a || VAR_26 == 0x000d) {
        VAR_21 = VAR_10; VAR_22 = VAR_12; VAR_23 = VAR_12;
      }
      VAR_0;
      VAR_24->ostate = VAR_28;
      return VAR_31;
    }
  }


  VAR_30 = FUNC_3(VAR_24,VAR_29,VAR_26,2);
  if (VAR_30 != VAR_2) {
    if (VAR_30 != 2) FUNC_0();
    if (VAR_29[0] < 0x80 && VAR_29[1] < 0x80) {
      int VAR_32 = (VAR_21 == VAR_8 ? 0 : 4) + (VAR_20 == VAR_19 ? 0 : 1) + 2;
      if (VAR_27 < VAR_32)
        return VAR_3;
      if (VAR_21 != VAR_8) {
        VAR_25[0] = VAR_1;
        VAR_25[1] = '$';
        VAR_25[2] = ')';
        VAR_25[3] = 'A';
        VAR_25 += 4;
        VAR_21 = VAR_8;
      }
      if (VAR_20 != VAR_19) {
        VAR_25[0] = VAR_5;
        VAR_25 += 1;
        VAR_20 = VAR_19;
      }
      VAR_25[0] = VAR_29[0];
      VAR_25[1] = VAR_29[1];
      VAR_0;
      VAR_24->ostate = VAR_28;
      return VAR_32;
    }
  }

  VAR_30 = FUNC_2(VAR_24,VAR_29,VAR_26,3);
  if (VAR_30 != VAR_2) {
    if (VAR_30 != 3) FUNC_0();


    if (VAR_29[0] == 1 && VAR_29[1] < 0x80 && VAR_29[2] < 0x80) {
      int VAR_33 = (VAR_21 == VAR_7 ? 0 : 4) + (VAR_20 == VAR_19 ? 0 : 1) + 2;
      if (VAR_27 < VAR_33)
        return VAR_3;
      if (VAR_21 != VAR_7) {
        VAR_25[0] = VAR_1;
        VAR_25[1] = '$';
        VAR_25[2] = ')';
        VAR_25[3] = 'G';
        VAR_25 += 4;
        VAR_21 = VAR_7;
      }
      if (VAR_20 != VAR_19) {
        VAR_25[0] = VAR_5;
        VAR_25 += 1;
        VAR_20 = VAR_19;
      }
      VAR_25[0] = VAR_29[1];
      VAR_25[1] = VAR_29[2];
      VAR_0;
      VAR_24->ostate = VAR_28;
      return VAR_33;
    }


    if (VAR_29[0] == 2 && VAR_29[1] < 0x80 && VAR_29[2] < 0x80) {
      int VAR_34 = (VAR_22 == VAR_11 ? 0 : 4) + 4;
      if (VAR_27 < VAR_34)
        return VAR_3;
      if (VAR_22 != VAR_11) {
        VAR_25[0] = VAR_1;
        VAR_25[1] = '$';
        VAR_25[2] = '*';
        VAR_25[3] = 'H';
        VAR_25 += 4;
        VAR_22 = VAR_11;
      }
      VAR_25[0] = VAR_1;
      VAR_25[1] = 'N';
      VAR_25[2] = VAR_29[1];
      VAR_25[3] = VAR_29[2];
      VAR_0;
      VAR_24->ostate = VAR_28;
      return VAR_34;
    }


    if (VAR_29[0] == 3 && VAR_29[1] < 0x80 && VAR_29[2] < 0x80) {
      int VAR_35 = (VAR_23 == VAR_13 ? 0 : 4) + 4;
      if (VAR_27 < VAR_35)
        return VAR_3;
      if (VAR_23 != VAR_13) {
        VAR_25[0] = VAR_1;
        VAR_25[1] = '$';
        VAR_25[2] = '+';
        VAR_25[3] = 'I';
        VAR_25 += 4;
        VAR_23 = VAR_13;
      }
      VAR_25[0] = VAR_1;
      VAR_25[1] = 'O';
      VAR_25[2] = VAR_29[1];
      VAR_25[3] = VAR_29[2];
      VAR_0;
      VAR_24->ostate = VAR_28;
      return VAR_35;
    }


    if (VAR_29[0] == 4 && VAR_29[1] < 0x80 && VAR_29[2] < 0x80) {
      int VAR_36 = (VAR_23 == VAR_14 ? 0 : 4) + 4;
      if (VAR_27 < VAR_36)
        return VAR_3;
      if (VAR_23 != VAR_14) {
        VAR_25[0] = VAR_1;
        VAR_25[1] = '$';
        VAR_25[2] = '+';
        VAR_25[3] = 'J';
        VAR_25 += 4;
        VAR_23 = VAR_14;
      }
      VAR_25[0] = VAR_1;
      VAR_25[1] = 'O';
      VAR_25[2] = VAR_29[1];
      VAR_25[3] = VAR_29[2];
      VAR_0;
      VAR_24->ostate = VAR_28;
      return VAR_36;
    }


    if (VAR_29[0] == 5 && VAR_29[1] < 0x80 && VAR_29[2] < 0x80) {
      int VAR_37 = (VAR_23 == VAR_15 ? 0 : 4) + 4;
      if (VAR_27 < VAR_37)
        return VAR_3;
      if (VAR_23 != VAR_15) {
        VAR_25[0] = VAR_1;
        VAR_25[1] = '$';
        VAR_25[2] = '+';
        VAR_25[3] = 'K';
        VAR_25 += 4;
        VAR_23 = VAR_15;
      }
      VAR_25[0] = VAR_1;
      VAR_25[1] = 'O';
      VAR_25[2] = VAR_29[1];
      VAR_25[3] = VAR_29[2];
      VAR_0;
      VAR_24->ostate = VAR_28;
      return VAR_37;
    }


    if (VAR_29[0] == 6 && VAR_29[1] < 0x80 && VAR_29[2] < 0x80) {
      int VAR_38 = (VAR_23 == VAR_16 ? 0 : 4) + 4;
      if (VAR_27 < VAR_38)
        return VAR_3;
      if (VAR_23 != VAR_16) {
        VAR_25[0] = VAR_1;
        VAR_25[1] = '$';
        VAR_25[2] = '+';
        VAR_25[3] = 'L';
        VAR_25 += 4;
        VAR_23 = VAR_16;
      }
      VAR_25[0] = VAR_1;
      VAR_25[1] = 'O';
      VAR_25[2] = VAR_29[1];
      VAR_25[3] = VAR_29[2];
      VAR_0;
      VAR_24->ostate = VAR_28;
      return VAR_38;
    }


    if (VAR_29[0] == 7 && VAR_29[1] < 0x80 && VAR_29[2] < 0x80) {
      int VAR_39 = (VAR_23 == VAR_17 ? 0 : 4) + 4;
      if (VAR_27 < VAR_39)
        return VAR_3;
      if (VAR_23 != VAR_17) {
        VAR_25[0] = VAR_1;
        VAR_25[1] = '$';
        VAR_25[2] = '+';
        VAR_25[3] = 'M';
        VAR_25 += 4;
        VAR_23 = VAR_17;
      }
      VAR_25[0] = VAR_1;
      VAR_25[1] = 'O';
      VAR_25[2] = VAR_29[1];
      VAR_25[3] = VAR_29[2];
      VAR_0;
      VAR_24->ostate = VAR_28;
      return VAR_39;
    }

  }


  VAR_30 = FUNC_4(VAR_24,VAR_29,VAR_26,2);
  if (VAR_30 != VAR_2) {
    if (VAR_30 != 2) FUNC_0();
    if (VAR_29[0] < 0x80 && VAR_29[1] < 0x80) {
      int VAR_40 = (VAR_21 == VAR_9 ? 0 : 4) + (VAR_20 == VAR_19 ? 0 : 1) + 2;
      if (VAR_27 < VAR_40)
        return VAR_3;
      if (VAR_21 != VAR_9) {
        VAR_25[0] = VAR_1;
        VAR_25[1] = '$';
        VAR_25[2] = ')';
        VAR_25[3] = 'E';
        VAR_25 += 4;
        VAR_21 = VAR_9;
      }
      if (VAR_20 != VAR_19) {
        VAR_25[0] = VAR_5;
        VAR_25 += 1;
        VAR_20 = VAR_19;
      }
      VAR_25[0] = VAR_29[0];
      VAR_25[1] = VAR_29[1];
      VAR_0;
      VAR_24->ostate = VAR_28;
      return VAR_40;
    }
  }

  return VAR_2;
}
