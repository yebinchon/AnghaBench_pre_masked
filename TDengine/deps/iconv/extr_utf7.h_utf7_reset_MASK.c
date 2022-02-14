
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_3__ {int ostate; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_1, unsigned char *VAR_2, int VAR_3)
{
  state_t VAR_4 = VAR_1->ostate;
  if (VAR_4 & 3) {

    unsigned int VAR_5 = ((VAR_4 & 3) >= 2 ? 1 : 0) + 1;
    if (VAR_3 < VAR_5)
      return VAR_0;
    if ((VAR_4 & 3) >= 2) {
      unsigned int VAR_6 = VAR_4 & -4;
      unsigned char VAR_7;
      if (VAR_6 < 26)
        VAR_7 = VAR_6+'A';
      else if (VAR_6 < 52)
        VAR_7 = VAR_6-26+'a';
      else if (VAR_6 < 62)
        VAR_7 = VAR_6-52+'0';
      else if (VAR_6 == 62)
        VAR_7 = '+';
      else if (VAR_6 == 63)
        VAR_7 = '/';
      else
        FUNC_0();
      *VAR_2++ = VAR_7;
    }
    *VAR_2++ = '-';

    return VAR_5;
  } else
    return 0;
}
