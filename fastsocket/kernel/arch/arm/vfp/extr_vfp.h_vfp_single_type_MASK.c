
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfp_single {int exponent; int significand; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline int FUNC_0(struct vfp_single *VAR_7)
{
 int VAR_8 = VAR_2;
 if (VAR_7->exponent == 255) {
  if (VAR_7->significand == 0)
   VAR_8 = VAR_1;
  else if (VAR_7->significand & VAR_4)
   VAR_8 = VAR_3;
  else
   VAR_8 = VAR_5;
 } else if (VAR_7->exponent == 0) {
  if (VAR_7->significand == 0)
   VAR_8 |= VAR_6;
  else
   VAR_8 |= VAR_0;
 }
 return VAR_8;
}
