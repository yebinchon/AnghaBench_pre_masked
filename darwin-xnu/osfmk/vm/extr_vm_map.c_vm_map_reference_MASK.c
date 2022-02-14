
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
struct TYPE_4__ {scalar_t__ res_count; scalar_t__ map_refcnt; int s_lock; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(
 vm_map_t VAR_1)
{
 if (VAR_1 == VAR_0)
  return;

 FUNC_1(&VAR_1->s_lock);





 VAR_1->map_refcnt++;
 FUNC_2(&VAR_1->s_lock);
}
