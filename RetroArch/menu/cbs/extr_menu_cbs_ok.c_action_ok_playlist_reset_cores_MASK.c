
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int playlist_t ;


 int * FUNC_0 () ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0,
      const char *VAR_1, unsigned VAR_2, size_t VAR_3, size_t VAR_4)
{
   playlist_t *VAR_5 = FUNC_0();
   const char *VAR_6 = ((void*)0);

   if (!VAR_5)
      return -1;

   VAR_6 = FUNC_1(VAR_5);

   if (FUNC_2(VAR_6))
      return -1;

   FUNC_3(VAR_6);

   return 0;
}
