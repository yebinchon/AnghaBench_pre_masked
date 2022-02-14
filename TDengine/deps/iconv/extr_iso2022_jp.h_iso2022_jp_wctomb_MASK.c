
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ucs4_t ;
typedef scalar_t__ state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_6__ {scalar_t__ ostate; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,unsigned char*,int ,int) ;

__attribute__((used)) static int
FUNC_4 (conv_t VAR_6, unsigned char *VAR_7, ucs4_t VAR_8, int VAR_9)
{
  state_t VAR_10 = VAR_6->ostate;
  unsigned char VAR_11[2];
  int VAR_12;


  VAR_12 = FUNC_1(VAR_6,VAR_11,VAR_8,1);
  if (VAR_12 != VAR_1) {
    if (VAR_12 != 1) FUNC_0();
    if (VAR_11[0] < 0x80) {
      int VAR_13 = (VAR_10 == VAR_3 ? 1 : 4);
      if (VAR_9 < VAR_13)
        return VAR_2;
      if (VAR_10 != VAR_3) {
        VAR_7[0] = VAR_0;
        VAR_7[1] = '(';
        VAR_7[2] = 'B';
        VAR_7 += 3;
        VAR_10 = VAR_3;
      }
      VAR_7[0] = VAR_11[0];
      VAR_6->ostate = VAR_10;
      return VAR_13;
    }
  }


  VAR_12 = FUNC_2(VAR_6,VAR_11,VAR_8,1);
  if (VAR_12 != VAR_1) {
    if (VAR_12 != 1) FUNC_0();
    if (VAR_11[0] < 0x80) {
      int VAR_14 = (VAR_10 == VAR_4 ? 1 : 4);
      if (VAR_9 < VAR_14)
        return VAR_2;
      if (VAR_10 != VAR_4) {
        VAR_7[0] = VAR_0;
        VAR_7[1] = '(';
        VAR_7[2] = 'J';
        VAR_7 += 3;
        VAR_10 = VAR_4;
      }
      VAR_7[0] = VAR_11[0];
      VAR_6->ostate = VAR_10;
      return VAR_14;
    }
  }


  VAR_12 = FUNC_3(VAR_6,VAR_11,VAR_8,2);
  if (VAR_12 != VAR_1) {
    if (VAR_12 != 2) FUNC_0();
    if (VAR_11[0] < 0x80 && VAR_11[1] < 0x80) {
      int VAR_15 = (VAR_10 == VAR_5 ? 2 : 5);
      if (VAR_9 < VAR_15)
        return VAR_2;
      if (VAR_10 != VAR_5) {
        VAR_7[0] = VAR_0;
        VAR_7[1] = '$';
        VAR_7[2] = 'B';
        VAR_7 += 3;
        VAR_10 = VAR_5;
      }
      VAR_7[0] = VAR_11[0];
      VAR_7[1] = VAR_11[1];
      VAR_6->ostate = VAR_10;
      return VAR_15;
    }
  }

  return VAR_1;
}
