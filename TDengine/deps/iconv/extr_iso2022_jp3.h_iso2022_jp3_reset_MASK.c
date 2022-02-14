
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_3__ {scalar_t__ ostate; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_7, unsigned char *VAR_8, int VAR_9)
{
  state_t VAR_10 = VAR_7->ostate;
  VAR_2;
  {
    int VAR_11 =
      (VAR_5 ? (VAR_6 != VAR_10 ? 3 : 0) + 2 : 0)
      + (VAR_10 != VAR_3 ? 3 : 0);
    if (VAR_9 < VAR_11)
      return VAR_1;
    if (VAR_5) {
      if (VAR_6 != VAR_10) {
        if (VAR_10 != VAR_4) FUNC_0();
        VAR_8[0] = VAR_0;
        VAR_8[1] = '$';
        VAR_8[2] = 'B';
        VAR_8 += 3;
      }
      VAR_8[0] = (VAR_5 >> 8) & 0xff;
      VAR_8[1] = VAR_5 & 0xff;
      VAR_8 += 2;
    }
    if (VAR_10 != VAR_3) {
      VAR_8[0] = VAR_0;
      VAR_8[1] = '(';
      VAR_8[2] = 'B';
    }

    return VAR_11;
  }
}
