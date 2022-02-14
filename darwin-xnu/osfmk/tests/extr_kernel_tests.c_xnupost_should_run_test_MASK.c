
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__*,scalar_t__*) ;
 int VAR_3 ;
 char* VAR_4 ;

boolean_t
FUNC_1(uint32_t VAR_5)
{
 if (VAR_3 & VAR_1) {
  int64_t VAR_6 = 0, VAR_7 = 999999;
  char * VAR_8 = VAR_4;
  while (*VAR_8) {
   FUNC_0(VAR_8, &VAR_6, &VAR_7);
   if (VAR_5 >= VAR_6 && VAR_5 <= VAR_7) {
    return VAR_2;
   }


   while (*VAR_8 != ',') {
    if (*VAR_8 == '\0')
     return VAR_0;
    VAR_8++;
   }

   VAR_8++;
  }
  return VAR_0;
 }
 return VAR_2;
}
