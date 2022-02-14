
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t cl; int * l; } ;
typedef TYPE_1__ hu_stext_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2
( hu_stext_t* VAR_0,
  char* VAR_1,
  char* VAR_2 )
{
    FUNC_1(VAR_0);
    if (VAR_1)
 while (*VAR_1)
     FUNC_0(&VAR_0->l[VAR_0->cl], *(VAR_1++));

    while (*VAR_2)
 FUNC_0(&VAR_0->l[VAR_0->cl], *(VAR_2++));
}
