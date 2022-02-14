
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_shared_region_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {scalar_t__ sr_ref_count; int * sr_timer_call; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(
 vm_shared_region_t VAR_2)
{
 FUNC_0(&VAR_1, VAR_0);

 FUNC_1(
  ("shared_region: -> reference_locked(%p)\n",
   (void *)FUNC_2(VAR_2)));
 FUNC_3(VAR_2->sr_ref_count > 0);
 VAR_2->sr_ref_count++;

 if (VAR_2->sr_timer_call != ((void*)0)) {
  boolean_t VAR_3;


  VAR_3 = FUNC_4(VAR_2->sr_timer_call);
  if (VAR_3) {
   FUNC_5(VAR_2->sr_timer_call);
   VAR_2->sr_timer_call = ((void*)0);

   VAR_2->sr_ref_count--;
  } else {

  }
 }

 FUNC_1(
  ("shared_region: reference_locked(%p) <- %d\n",
   (void )FUNC_2(VAR_2),
   VAR_2->sr_ref_count));
}
