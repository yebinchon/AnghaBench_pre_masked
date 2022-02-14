
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
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_3, unsigned char *VAR_4, int VAR_5)
{
  state_t VAR_6 = VAR_3->ostate;
  if (VAR_6 != VAR_2) {
    if (VAR_5 < 3)
      return VAR_1;
    VAR_4[0] = VAR_0;
    VAR_4[1] = '(';
    VAR_4[2] = 'B';

    return 3;
  } else
    return 0;
}
