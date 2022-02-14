
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pass; scalar_t__ features; } ;
typedef TYPE_1__ ccv_icf_decision_tree_t ;


 float FUNC_0 (scalar_t__,float*,int,int,int,int) ;

__attribute__((used)) static inline int FUNC_1(ccv_icf_decision_tree_t* VAR_0, float* VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 float VAR_6 = FUNC_0(VAR_0->features, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 > 0)
 {
  if (!(VAR_0->pass & 0x1))
   return 1;
  return FUNC_0(VAR_0->features + 2, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5) > 0;
 } else {
  if (!(VAR_0->pass & 0x2))
   return 0;
  return FUNC_0(VAR_0->features + 1, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5) > 0;
 }
}
