
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_addr_t ;
typedef scalar_t__ thread_t ;
typedef scalar_t__ thread_qos_t ;
typedef int pthread_priority_t ;
typedef TYPE_1__* proc_t ;
typedef int mach_port_name_t ;
struct TYPE_3__ {int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(proc_t VAR_6, mach_port_name_t VAR_7,
  pthread_priority_t VAR_8, user_addr_t VAR_9)
{
 thread_qos_t VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 == VAR_4) {
  return VAR_0;
 }

 thread_t VAR_11 = FUNC_1(VAR_7);
 if (VAR_11 == VAR_2) {
  return VAR_1;
 }

 int VAR_12 = FUNC_2(VAR_6->task, VAR_11, 0, VAR_10, VAR_5,
   VAR_9, VAR_3);

 FUNC_3(VAR_11);
 return VAR_12;
}
