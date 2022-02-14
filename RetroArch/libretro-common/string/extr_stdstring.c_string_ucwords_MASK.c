
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (unsigned char) ;

char *FUNC_1(char *VAR_0)
{
   char *VAR_1 = (char *)VAR_0;
   for ( ; *VAR_1 != '\0'; VAR_1++)
   {
      if (*VAR_1 == ' ')
         *(VAR_1+1) = FUNC_0((unsigned char)*(VAR_1+1));
   }

   VAR_0[0] = FUNC_0((unsigned char)VAR_0[0]);
   return VAR_0;
}
