
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ucs4_t ;
typedef void* state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_5__ {void* ostate; } ;


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
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int,int) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,int,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int
FUNC_3 (conv_t VAR_13, unsigned char *VAR_14, ucs4_t VAR_15, int VAR_16)
{
  state_t VAR_17 = VAR_13->ostate;
  VAR_6;
  unsigned char VAR_18[2];
  int VAR_19;


  VAR_19 = FUNC_1(VAR_13,VAR_18,VAR_15,1);
  if (VAR_19 != VAR_2) {
    if (VAR_19 != 1) FUNC_0();
    if (VAR_18[0] < 0x80) {
      int VAR_20 = (VAR_11 == VAR_9 ? 1 : 2);
      if (VAR_16 < VAR_20)
        return VAR_3;
      if (VAR_11 != VAR_9) {
        VAR_14[0] = VAR_4;
        VAR_14 += 1;
        VAR_11 = VAR_9;
      }
      VAR_14[0] = VAR_18[0];
      if (VAR_15 == 0x000a || VAR_15 == 0x000d)
        VAR_12 = VAR_8;
      VAR_0;
      VAR_13->ostate = VAR_17;
      return VAR_20;
    }
  }


  VAR_19 = FUNC_2(VAR_13,VAR_18,VAR_15,2);
  if (VAR_19 != VAR_2) {
    if (VAR_19 != 2) FUNC_0();
    if (VAR_18[0] < 0x80 && VAR_18[1] < 0x80) {
      int VAR_21 = (VAR_12 == VAR_7 ? 0 : 4) + (VAR_11 == VAR_10 ? 0 : 1) + 2;
      if (VAR_16 < VAR_21)
        return VAR_3;
      if (VAR_12 != VAR_7) {
        VAR_14[0] = VAR_1;
        VAR_14[1] = '$';
        VAR_14[2] = ')';
        VAR_14[3] = 'C';
        VAR_14 += 4;
        VAR_12 = VAR_7;
      }
      if (VAR_11 != VAR_10) {
        VAR_14[0] = VAR_5;
        VAR_14 += 1;
        VAR_11 = VAR_10;
      }
      VAR_14[0] = VAR_18[0];
      VAR_14[1] = VAR_18[1];
      VAR_0;
      VAR_13->ostate = VAR_17;
      return VAR_21;
    }
  }

  return VAR_2;
}
