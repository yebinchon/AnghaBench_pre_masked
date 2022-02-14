
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t leaf; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;
struct TYPE_5__ {size_t merged; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_0(void)
{
 int VAR_3;
 vportal_t *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1 * 2; VAR_3++)
 {
  VAR_4 = &VAR_2[VAR_3];
  if (VAR_4->removed)
   continue;
  while(VAR_0[VAR_4->leaf].merged >= 0)
   VAR_4->leaf = VAR_0[VAR_4->leaf].merged;
 }
}
