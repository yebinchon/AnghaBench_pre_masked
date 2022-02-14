
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int boolean_t ;
struct TYPE_2__ {int kdebug_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int) ;

boolean_t
FUNC_2(uint32_t VAR_15)
{
 if (VAR_7.kdebug_flags & VAR_4) {
  return FUNC_1(VAR_8, VAR_15);
 } else if (FUNC_0(VAR_15) == VAR_0) {
  return VAR_6;
 } else if (VAR_7.kdebug_flags & VAR_3) {
  if (VAR_15 < VAR_9 || VAR_15 > VAR_10) {
   return VAR_1;
  }
 } else if (VAR_7.kdebug_flags & VAR_5) {
  if ((VAR_15 & VAR_2) != VAR_11 &&
   (VAR_15 & VAR_2) != VAR_12 &&
   (VAR_15 & VAR_2) != VAR_13 &&
   (VAR_15 & VAR_2) != VAR_14)
  {
   return VAR_1;
  }
 }

 return VAR_6;
}
