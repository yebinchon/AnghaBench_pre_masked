
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ucs4_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_3__ {scalar_t__ istate; } ;



__attribute__((used)) static int
FUNC_0 (conv_t VAR_0, ucs4_t *VAR_1)
{
  ucs4_t VAR_2 = VAR_0->istate;
  if (VAR_2) {

    VAR_0->istate = 0;
    *VAR_1 = (ucs4_t) VAR_2;
    return 1;
  } else
    return 0;
}
