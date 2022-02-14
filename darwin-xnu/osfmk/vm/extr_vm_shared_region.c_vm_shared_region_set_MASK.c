
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
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void
FUNC_8(
 task_t VAR_0,
 vm_shared_region_t VAR_1)
{
 vm_shared_region_t VAR_2;

 FUNC_0(
  ("shared_region: -> set(%p, %p)\n",
   (void )FUNC_1(VAR_0),
   (void *)FUNC_1(VAR_1)));

 FUNC_3(VAR_0);
 FUNC_6();

 VAR_2 = VAR_0->shared_region;
 if (VAR_1) {
  FUNC_2(VAR_1->sr_ref_count > 0);
 }

 VAR_0->shared_region = VAR_1;

 FUNC_7();
 FUNC_4(VAR_0);

 if (VAR_2) {
  FUNC_2(VAR_2->sr_ref_count > 0);
  FUNC_5(VAR_2);
 }

 FUNC_0(
  ("shared_region: set(%p) <- old=%p new=%p\n",
   (void )FUNC_1(VAR_0),
   (void )FUNC_1(VAR_2),
   (void *)FUNC_1(VAR_1)));
}
