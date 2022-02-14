
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ucs4_t ;
typedef void* state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_6__ {void* ostate; } ;


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
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int,int) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,int,int) ;
 int FUNC_3 (TYPE_1__*,unsigned char*,int,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static int
FUNC_4 (conv_t VAR_17, unsigned char *VAR_18, ucs4_t VAR_19, int VAR_20)
{
  state_t VAR_21 = VAR_17->ostate;
  VAR_6;
  unsigned char VAR_22[3];
  int VAR_23;





  VAR_23 = FUNC_1(VAR_17,VAR_22,VAR_19,1);
  if (VAR_23 != VAR_2) {
    if (VAR_23 != 1) FUNC_0();
    if (VAR_22[0] < 0x80) {
      int VAR_24 = (VAR_14 == VAR_12 ? 1 : 2);
      if (VAR_20 < VAR_24)
        return VAR_3;
      if (VAR_14 != VAR_12) {
        VAR_18[0] = VAR_4;
        VAR_18 += 1;
        VAR_14 = VAR_12;
      }
      VAR_18[0] = VAR_22[0];
      if (VAR_19 == 0x000a || VAR_19 == 0x000d) {
        VAR_15 = VAR_9; VAR_16 = VAR_11;
      }
      VAR_0;
      VAR_17->ostate = VAR_21;
      return VAR_24;
    }
  }


  VAR_23 = FUNC_3(VAR_17,VAR_22,VAR_19,2);
  if (VAR_23 != VAR_2) {
    if (VAR_23 != 2) FUNC_0();
    if (VAR_22[0] < 0x80 && VAR_22[1] < 0x80) {
      int VAR_25 = (VAR_15 == VAR_8 ? 0 : 4) + (VAR_14 == VAR_13 ? 0 : 1) + 2;
      if (VAR_20 < VAR_25)
        return VAR_3;
      if (VAR_15 != VAR_8) {
        VAR_18[0] = VAR_1;
        VAR_18[1] = '$';
        VAR_18[2] = ')';
        VAR_18[3] = 'A';
        VAR_18 += 4;
        VAR_15 = VAR_8;
      }
      if (VAR_14 != VAR_13) {
        VAR_18[0] = VAR_5;
        VAR_18 += 1;
        VAR_14 = VAR_13;
      }
      VAR_18[0] = VAR_22[0];
      VAR_18[1] = VAR_22[1];
      VAR_0;
      VAR_17->ostate = VAR_21;
      return VAR_25;
    }
  }

  VAR_23 = FUNC_2(VAR_17,VAR_22,VAR_19,3);
  if (VAR_23 != VAR_2) {
    if (VAR_23 != 3) FUNC_0();


    if (VAR_22[0] == 1 && VAR_22[1] < 0x80 && VAR_22[2] < 0x80) {
      int VAR_26 = (VAR_15 == VAR_7 ? 0 : 4) + (VAR_14 == VAR_13 ? 0 : 1) + 2;
      if (VAR_20 < VAR_26)
        return VAR_3;
      if (VAR_15 != VAR_7) {
        VAR_18[0] = VAR_1;
        VAR_18[1] = '$';
        VAR_18[2] = ')';
        VAR_18[3] = 'G';
        VAR_18 += 4;
        VAR_15 = VAR_7;
      }
      if (VAR_14 != VAR_13) {
        VAR_18[0] = VAR_5;
        VAR_18 += 1;
        VAR_14 = VAR_13;
      }
      VAR_18[0] = VAR_22[1];
      VAR_18[1] = VAR_22[2];
      VAR_0;
      VAR_17->ostate = VAR_21;
      return VAR_26;
    }


    if (VAR_22[0] == 2 && VAR_22[1] < 0x80 && VAR_22[2] < 0x80) {
      int VAR_27 = (VAR_16 == VAR_10 ? 0 : 4) + 4;
      if (VAR_20 < VAR_27)
        return VAR_3;
      if (VAR_16 != VAR_10) {
        VAR_18[0] = VAR_1;
        VAR_18[1] = '$';
        VAR_18[2] = '*';
        VAR_18[3] = 'H';
        VAR_18 += 4;
        VAR_16 = VAR_10;
      }
      VAR_18[0] = VAR_1;
      VAR_18[1] = 'N';
      VAR_18[2] = VAR_22[1];
      VAR_18[3] = VAR_22[2];
      VAR_0;
      VAR_17->ostate = VAR_21;
      return VAR_27;
    }
  }

  return VAR_2;
}
