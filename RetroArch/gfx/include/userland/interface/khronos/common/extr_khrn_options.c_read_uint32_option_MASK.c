
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static uint32_t FUNC_2(const char *VAR_0, uint32_t VAR_1)
{
   char *VAR_2 = FUNC_1(VAR_0);

   if (VAR_2 == ((void*)0))
      return VAR_1;

   if (VAR_2[0] != '\0')
      return FUNC_0(VAR_2);

   return 0;
}
