
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unicode_mappings32 ;
typedef int unicode_mappings16 ;
typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int const*,int,scalar_t__) ;
 int FUNC_1 (int const*,int ,scalar_t__) ;

__attribute__((used)) static u_int16_t
FUNC_2(u_int16_t VAR_11, u_int16_t VAR_12)
{
 u_int32_t VAR_13;


 if ((VAR_12 >= VAR_6) && (VAR_12 < (VAR_4 + VAR_5))) {

  if ((VAR_12 < (VAR_6 + VAR_7)) &&
      (VAR_11 >= VAR_0 && VAR_11 < (VAR_0 + VAR_1))) {
      return (VAR_2 +
              ((VAR_11 - VAR_0)*(VAR_7*VAR_5)) +
              ((VAR_12 - VAR_6)*VAR_5));
  }


  if ((VAR_12 > VAR_4) &&
      (VAR_11 >= VAR_2 && VAR_11 < (VAR_2 + VAR_3))) {
   if ((VAR_11 - VAR_2) % VAR_5)
    return (0);
   else
    return (VAR_11 + (VAR_12 - VAR_4));
  }
 }

 VAR_13 = FUNC_1(
  (const unicode_mappings32 *)VAR_9,
  VAR_10, VAR_12);

 if (VAR_13) {
  VAR_13 = FUNC_0(
   (const unicode_mappings16 *)
   ((const u_int32_t *)VAR_8 + (VAR_13 & 0xFFFF)),
   (VAR_13 >> 16), VAR_11);
 }
 return (VAR_13);
}
