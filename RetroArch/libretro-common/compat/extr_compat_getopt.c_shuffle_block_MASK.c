
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char**,char const**,int) ;
 int FUNC_3 (char**,char**,int) ;
 int FUNC_4 (char const**) ;

__attribute__((used)) static void FUNC_5(char **VAR_0, char **VAR_1, char **VAR_2)
{
   ptrdiff_t VAR_3 = VAR_1 - VAR_0;
   const char **VAR_4 = (const char**)FUNC_0(VAR_3, sizeof(const char*));

   FUNC_4(VAR_4);

   FUNC_2((void*)VAR_4, VAR_0, VAR_3 * sizeof(const char*));
   FUNC_3(VAR_0, VAR_1, (VAR_2 - VAR_1) * sizeof(const char*));
   FUNC_2(VAR_2 - VAR_3, VAR_4, VAR_3 * sizeof(const char*));

   FUNC_1((void*)VAR_4);
}
