
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct TYPE_3__ {scalar_t__ reserved_stack; scalar_t__ kernel_stack; } ;


 int FUNC_0 (scalar_t__) ;

void
FUNC_1(
 thread_t VAR_0)
{
 if (VAR_0->reserved_stack != VAR_0->kernel_stack) {
  FUNC_0(VAR_0->reserved_stack);
 }
}
