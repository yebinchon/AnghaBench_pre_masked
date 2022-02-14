
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gpu_error {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i915_gpu_error*) ;
 scalar_t__ FUNC_1 (struct i915_gpu_error*) ;

int
FUNC_2(struct i915_gpu_error *VAR_2,
       bool VAR_3)
{
 if (FUNC_0(VAR_2)) {


  if (!VAR_3)
   return -VAR_1;


  if (FUNC_1(VAR_2))
   return -VAR_1;

  return -VAR_0;
 }

 return 0;
}
