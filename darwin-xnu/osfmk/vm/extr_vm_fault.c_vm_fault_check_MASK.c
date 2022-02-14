
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wait_interrupt_t ;
typedef scalar_t__ vm_page_t ;
typedef TYPE_1__* vm_object_t ;
typedef int vm_fault_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {scalar_t__ shadow_severed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (int ) ;
 int VAR_9 ;

__attribute__((used)) static vm_fault_return_t
FUNC_8(vm_object_t VAR_10, vm_page_t VAR_11, vm_page_t VAR_12, wait_interrupt_t VAR_13, boolean_t VAR_14)
{
 int VAR_15;

        if (VAR_10->shadow_severed ||
     FUNC_1(VAR_10)) {







         if (VAR_11 != VAR_8)
          FUNC_2(VAR_11);
  FUNC_6(VAR_10, VAR_12);

  FUNC_5(VAR_13);

  return (VAR_5);
 }
 if (VAR_14 == VAR_2) {
  if ((VAR_15 = FUNC_7(VAR_1))) {




   if (VAR_11 != VAR_8)
    FUNC_2(VAR_11);
   FUNC_6(VAR_10, VAR_12);

   FUNC_0(VAR_9, VAR_3, VAR_0, VAR_15, 0, 0, 0);

   FUNC_4(VAR_15);

   if (FUNC_3()) {
    FUNC_5(VAR_13);
    return VAR_4;
   }
   FUNC_5(VAR_13);

   return (VAR_6);
  }
 }
 return (VAR_7);
}
