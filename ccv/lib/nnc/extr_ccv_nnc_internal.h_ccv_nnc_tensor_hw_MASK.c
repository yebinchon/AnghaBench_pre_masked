
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ format; } ;
typedef TYPE_1__ ccv_nnc_tensor_param_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline int FUNC_0(const ccv_nnc_tensor_param_t VAR_4, const int VAR_5)
{
 if ((VAR_4.format == VAR_1) ||
  (VAR_4.format == VAR_3 && VAR_5 == VAR_0 + 1))
  return 0;
 else if ((VAR_4.format == VAR_3 && VAR_5 == VAR_0 + 2) ||
    (VAR_4.format == VAR_2 && VAR_5 == VAR_0 + 1))
  return 1;
 else if (VAR_4.format == VAR_2 && VAR_5 == VAR_0 + 2)
  return 2;
 return -1;
}
