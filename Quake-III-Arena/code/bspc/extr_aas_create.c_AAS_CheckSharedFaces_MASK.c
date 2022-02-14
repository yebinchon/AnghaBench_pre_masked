
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* l_next; } ;
typedef TYPE_1__ tmp_area_t ;
struct TYPE_6__ {TYPE_1__* areas; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(void)
{
 tmp_area_t *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0.areas; VAR_1; VAR_1 = VAR_1->l_next)
 {
  for (VAR_2 = VAR_0.areas; VAR_2; VAR_2 = VAR_2->l_next)
  {
   if (VAR_1 == VAR_2) continue;
   FUNC_0(VAR_1, VAR_2);
  }
 }
}
