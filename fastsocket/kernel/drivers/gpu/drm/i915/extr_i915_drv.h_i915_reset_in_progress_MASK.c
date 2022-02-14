
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gpu_error {int reset_counter; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline bool FUNC_2(struct i915_gpu_error *VAR_1)
{
 return FUNC_1(FUNC_0(&VAR_1->reset_counter)
   & VAR_0);
}
