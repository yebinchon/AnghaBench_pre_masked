
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,int,char*,int const) ;

char *FUNC_2(const uint8_t *VAR_0, size_t VAR_1)
{
   size_t VAR_2;
   char *VAR_3 = (char*)FUNC_0(VAR_1 * 2 + 1);

   if (VAR_1 && !VAR_3)
      return ((void*)0);

   for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
      FUNC_1(VAR_3+VAR_2 * 2, 3, "%02X", VAR_0[VAR_2]);
   return VAR_3;
}
