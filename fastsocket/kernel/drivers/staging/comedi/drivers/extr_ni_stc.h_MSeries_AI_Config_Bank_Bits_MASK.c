
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ni_reg_type { ____Placeholder_ni_reg_type } ni_reg_type ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned FUNC_0(enum ni_reg_type VAR_1,
         unsigned VAR_2)
{
 unsigned VAR_3 = VAR_2 & 0x30;
 if (VAR_1 == VAR_0) {
  if (VAR_2 & 0x40)
   VAR_3 |= 0x400;
 }
 return VAR_3;
}
