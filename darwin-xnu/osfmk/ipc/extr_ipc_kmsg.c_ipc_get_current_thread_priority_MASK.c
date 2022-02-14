
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef scalar_t__ thread_qos_t ;
typedef int mach_msg_priority_t ;
struct TYPE_4__ {int base_pri; } ;


 int FUNC_0 (scalar_t__,int,int ) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static mach_msg_priority_t
FUNC_4(void)
{
 thread_t VAR_0 = FUNC_1();
 thread_qos_t VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0, &VAR_2);
 if (!VAR_1) {
  VAR_1 = FUNC_3(VAR_0->base_pri);
  VAR_2 = 0;
 }
 return (mach_msg_priority_t)FUNC_0(VAR_1, VAR_2, 0);
}
