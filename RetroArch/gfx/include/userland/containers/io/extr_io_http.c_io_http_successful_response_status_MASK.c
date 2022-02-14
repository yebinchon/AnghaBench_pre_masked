
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char const*,char*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_4)
{
   unsigned int VAR_5, VAR_6, VAR_7;


   if (FUNC_1(VAR_4, "HTTP/%u.%u %u", &VAR_5, &VAR_6, &VAR_7) != 3)
   {
      FUNC_0(((void*)0), "HTTP: Invalid response status line:\n%s", VAR_4);
      return 0;
   }

   if (VAR_5 != VAR_0 || VAR_6 != VAR_1)
   {
      FUNC_0(((void*)0), "HTTP: Unexpected response HTTP version: %u.%u", VAR_5, VAR_6);
      return 0;
   }

   if (VAR_7 != VAR_2 && VAR_7 != VAR_3)
   {
      FUNC_0(((void*)0), "HTTP: Response status unsuccessful:\n%s", VAR_4);
      return 0;
   }

   return 1;
}
