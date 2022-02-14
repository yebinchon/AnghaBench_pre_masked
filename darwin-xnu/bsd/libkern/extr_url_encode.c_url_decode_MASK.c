
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (char*) ;

void
FUNC_4(char *VAR_0)
{
 if (!VAR_0) {
  return;
 }

 while (*VAR_0) {
  if (*VAR_0 == '%') {
   char VAR_1 = 0;
   char *VAR_2 = VAR_0++;

   if (*VAR_0) {
    VAR_1 += FUNC_0(*VAR_0++);
   }
   if (*VAR_0) {
    VAR_1 = (VAR_1 << 4) + FUNC_0(*VAR_0++);
   }

   if (FUNC_1(VAR_1)) {


    *VAR_2++ = VAR_1;
    VAR_0 = FUNC_2(VAR_2, VAR_0, FUNC_3(VAR_0)+1);
   }
  } else {
   VAR_0++;
  }
 }
}
