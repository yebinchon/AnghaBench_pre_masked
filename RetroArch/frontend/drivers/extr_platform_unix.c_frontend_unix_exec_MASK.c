
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char**) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, bool VAR_1)
{
   char *VAR_2[] = { ((void*)0), ((void*)0) };
   size_t VAR_3 = FUNC_3(VAR_0);

   VAR_2[0] = (char*)FUNC_1(VAR_3);

   FUNC_2(VAR_2[0], VAR_0, VAR_3);

   FUNC_0(VAR_0, VAR_2);
}
