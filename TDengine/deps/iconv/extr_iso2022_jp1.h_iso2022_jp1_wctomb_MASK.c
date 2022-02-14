
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ucs4_t ;
typedef scalar_t__ state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_7__ {scalar_t__ ostate; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,unsigned char*,int ,int) ;
 int FUNC_4 (TYPE_1__*,unsigned char*,int ,int) ;

__attribute__((used)) static int
FUNC_5 (conv_t VAR_7, unsigned char *VAR_8, ucs4_t VAR_9, int VAR_10)
{
  state_t VAR_11 = VAR_7->ostate;
  unsigned char VAR_12[2];
  int VAR_13;


  VAR_13 = FUNC_1(VAR_7,VAR_12,VAR_9,1);
  if (VAR_13 != VAR_1) {
    if (VAR_13 != 1) FUNC_0();
    if (VAR_12[0] < 0x80) {
      int VAR_14 = (VAR_11 == VAR_3 ? 1 : 4);
      if (VAR_10 < VAR_14)
        return VAR_2;
      if (VAR_11 != VAR_3) {
        VAR_8[0] = VAR_0;
        VAR_8[1] = '(';
        VAR_8[2] = 'B';
        VAR_8 += 3;
        VAR_11 = VAR_3;
      }
      VAR_8[0] = VAR_12[0];
      VAR_7->ostate = VAR_11;
      return VAR_14;
    }
  }


  VAR_13 = FUNC_2(VAR_7,VAR_12,VAR_9,1);
  if (VAR_13 != VAR_1) {
    if (VAR_13 != 1) FUNC_0();
    if (VAR_12[0] < 0x80) {
      int VAR_15 = (VAR_11 == VAR_4 ? 1 : 4);
      if (VAR_10 < VAR_15)
        return VAR_2;
      if (VAR_11 != VAR_4) {
        VAR_8[0] = VAR_0;
        VAR_8[1] = '(';
        VAR_8[2] = 'J';
        VAR_8 += 3;
        VAR_11 = VAR_4;
      }
      VAR_8[0] = VAR_12[0];
      VAR_7->ostate = VAR_11;
      return VAR_15;
    }
  }


  VAR_13 = FUNC_3(VAR_7,VAR_12,VAR_9,2);
  if (VAR_13 != VAR_1) {
    if (VAR_13 != 2) FUNC_0();
    if (VAR_12[0] < 0x80 && VAR_12[1] < 0x80) {
      int VAR_16 = (VAR_11 == VAR_5 ? 2 : 5);
      if (VAR_10 < VAR_16)
        return VAR_2;
      if (VAR_11 != VAR_5) {
        VAR_8[0] = VAR_0;
        VAR_8[1] = '$';
        VAR_8[2] = 'B';
        VAR_8 += 3;
        VAR_11 = VAR_5;
      }
      VAR_8[0] = VAR_12[0];
      VAR_8[1] = VAR_12[1];
      VAR_7->ostate = VAR_11;
      return VAR_16;
    }
  }


  VAR_13 = FUNC_4(VAR_7,VAR_12,VAR_9,2);
  if (VAR_13 != VAR_1) {
    if (VAR_13 != 2) FUNC_0();
    if (VAR_12[0] < 0x80 && VAR_12[1] < 0x80) {
      int VAR_17 = (VAR_11 == VAR_6 ? 2 : 6);
      if (VAR_10 < VAR_17)
        return VAR_2;
      if (VAR_11 != VAR_6) {
        VAR_8[0] = VAR_0;
        VAR_8[1] = '$';
        VAR_8[2] = '(';
        VAR_8[3] = 'D';
        VAR_8 += 4;
        VAR_11 = VAR_6;
      }
      VAR_8[0] = VAR_12[0];
      VAR_8[1] = VAR_12[1];
      VAR_7->ostate = VAR_11;
      return VAR_17;
    }
  }

  return VAR_1;
}
