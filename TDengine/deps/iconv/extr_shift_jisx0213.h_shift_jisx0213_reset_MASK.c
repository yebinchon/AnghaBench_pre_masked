
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_3__ {int ostate; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_1, unsigned char *VAR_2, int VAR_3)
{
  state_t VAR_4 = VAR_1->ostate;

  if (VAR_4) {
    if (VAR_3 < 2)
      return VAR_0;
    VAR_2[0] = (VAR_4 >> 8) & 0xff;
    VAR_2[1] = VAR_4 & 0xff;

    return 2;
  } else
    return 0;
}
