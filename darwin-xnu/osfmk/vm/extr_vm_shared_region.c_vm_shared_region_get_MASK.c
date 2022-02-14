
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vm_shared_region_t ;
typedef TYPE_1__* task_t ;
struct TYPE_9__ {scalar_t__ sr_ref_count; struct TYPE_9__* shared_region; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 () ;

vm_shared_region_t
FUNC_8(
 task_t VAR_0)
{
 vm_shared_region_t VAR_1;

 FUNC_0(
  ("shared_region: -> get(%p)\n",
   (void *)FUNC_1(VAR_0)));

 FUNC_3(VAR_0);
 FUNC_5();
 VAR_1 = VAR_0->shared_region;
 if (VAR_1) {
  FUNC_2(VAR_1->sr_ref_count > 0);
  FUNC_6(VAR_1);
 }
 FUNC_7();
 FUNC_4(VAR_0);

 FUNC_0(
  ("shared_region: get(%p) <- %p\n",
   (void )FUNC_1(VAR_0),
   (void *)FUNC_1(VAR_1)));

 return VAR_1;
}
