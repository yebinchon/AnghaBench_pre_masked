
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int task_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,scalar_t__) ;

kern_return_t
FUNC_2(task_t VAR_2)
{
 kern_return_t VAR_3;
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 != VAR_0) {
  FUNC_1("failed to adopt task %p into corpse coalition: %d", VAR_2, VAR_3);
 }
 return VAR_3;
}
