
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gpu_error {int reset_queue; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_2(struct i915_gpu_error *VAR_3)
{
 int VAR_4;



 if ((!FUNC_0(VAR_3) || FUNC_0(VAR_3)))
  return 0;






 VAR_4 = FUNC_1(VAR_3->reset_queue,
            (!FUNC_0(VAR_3) || FUNC_0(VAR_3)),
            10*VAR_2);
 if (VAR_4 == 0) {
  FUNC_0("Timed out waiting for the gpu reset to complete\n");
  return -VAR_0;
 } else if (VAR_4 < 0) {
  return VAR_4;
 }


 return 0;
}
