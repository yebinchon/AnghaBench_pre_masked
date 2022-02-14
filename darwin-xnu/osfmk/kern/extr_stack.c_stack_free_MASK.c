
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_4__ {scalar_t__ reserved_stack; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(
 thread_t VAR_0)
{
    vm_offset_t VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1);
 if (VAR_1 != VAR_0->reserved_stack) {
  FUNC_2(VAR_1);
 }
}
