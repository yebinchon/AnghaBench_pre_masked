
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {int datatype; } ;
typedef TYPE_1__ ccv_nnc_tensor_param_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__ const) ;

__attribute__((used)) static inline size_t FUNC_2(const ccv_nnc_tensor_param_t VAR_0)
{
 return (FUNC_0(VAR_0.datatype) * (ssize_t)FUNC_1(VAR_0) + 15) & -16;
}
