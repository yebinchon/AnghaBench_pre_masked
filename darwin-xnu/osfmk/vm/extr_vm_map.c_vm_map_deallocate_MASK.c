
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
struct TYPE_6__ {unsigned int map_refcnt; int s_lock; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(
 vm_map_t VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2 == VAR_0)
  return;

 FUNC_1(&VAR_2->s_lock);
 VAR_3 = --VAR_2->map_refcnt;
 if (VAR_3 > 0) {
  FUNC_4(VAR_2);
  FUNC_2(&VAR_2->s_lock);
  return;
 }
 FUNC_0(VAR_2->map_refcnt == 0);
 FUNC_2(&VAR_2->s_lock);
 FUNC_3(VAR_2, VAR_1);
}
