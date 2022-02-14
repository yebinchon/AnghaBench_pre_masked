
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_addr_t ;
typedef scalar_t__ thread_t ;
typedef TYPE_1__* proc_t ;
typedef int mach_port_name_t ;
struct TYPE_3__ {int task; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(proc_t VAR_3, mach_port_name_t VAR_4,
  user_addr_t VAR_5)
{
 thread_t VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 == VAR_1) {
  return VAR_0;
 }

 int VAR_7 = FUNC_1(VAR_3->task, VAR_6, 0, VAR_5,
   VAR_2);

 FUNC_2(VAR_6);
 return VAR_7;
}
