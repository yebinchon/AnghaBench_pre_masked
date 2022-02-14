
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int len; } ;
struct TYPE_4__ {TYPE_3__ l; int lm; } ;
typedef TYPE_1__ hu_itext_t ;


 int FUNC_0 (TYPE_3__*,int ) ;

void
FUNC_1
( hu_itext_t* VAR_0,
  char* VAR_1 )
{
    while (*VAR_1)
 FUNC_0(&VAR_0->l, *(VAR_1++));
    VAR_0->lm = VAR_0->l.len;
}
