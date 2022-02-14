
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mach_voucher_attr_key_t ;
typedef scalar_t__ iv_index_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline iv_index_t
FUNC_0(mach_voucher_attr_key_t VAR_3)
{
 if (VAR_1 == VAR_3 ||
     VAR_2 < VAR_3)
  return VAR_0;
 return (iv_index_t)VAR_3 - 1;
}
