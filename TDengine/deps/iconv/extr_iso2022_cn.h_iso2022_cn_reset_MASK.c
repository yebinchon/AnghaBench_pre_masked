
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_3__ {int ostate; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_7, unsigned char *VAR_8, int VAR_9)
{
  state_t VAR_10 = VAR_7->ostate;
  VAR_2;
  (void)VAR_5;
  (void)VAR_6;
  if (VAR_4 != VAR_3) {
    if (VAR_9 < 1)
      return VAR_0;
    VAR_8[0] = VAR_1;

    return 1;
  } else
    return 0;
}
