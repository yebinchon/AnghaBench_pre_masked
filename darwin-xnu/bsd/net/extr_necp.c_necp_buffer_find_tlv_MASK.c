
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_int32_t ;
typedef int curr_type ;
typedef int curr_length ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,int) ;

int
FUNC_2(u_int8_t *VAR_2, u_int32_t VAR_3, int VAR_4, u_int8_t VAR_5, int VAR_6)
{
 if (VAR_4 < 0) {
  return (-1);
 }
 int VAR_7 = VAR_4;
 int VAR_8;
 u_int32_t VAR_9;
 u_int8_t VAR_10;

 while (VAR_1) {
  if ((((u_int32_t)VAR_7) + sizeof(VAR_10) + sizeof(VAR_9)) > VAR_3) {
   return (-1);
  }
  if (!VAR_6) {
   VAR_10 = FUNC_1(VAR_2, VAR_7);
  } else {
   VAR_6 = 0;
   VAR_10 = VAR_0;
  }
  VAR_9 = FUNC_0(VAR_2, VAR_7);
  if (VAR_9 > VAR_3 - ((u_int32_t)VAR_7 + sizeof(VAR_10) + sizeof(VAR_9))) {
   return (-1);
  }

  VAR_8 = (VAR_7 + sizeof(VAR_10) + sizeof(VAR_9) + VAR_9);
  if (VAR_10 == VAR_5) {

   if (((u_int32_t)VAR_8) <= VAR_3) {
    return (VAR_7);
   } else {
    return (-1);
   }
  }
  VAR_7 = VAR_8;
 }
}
