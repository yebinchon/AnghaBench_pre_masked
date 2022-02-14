
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void*,char*,char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char*,int) ;

int FUNC_3(void *VAR_2, const char *VAR_3)
{
 char *VAR_4 = (char *)VAR_1;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_2, "compatible", VAR_4, VAR_0);
 if (VAR_5 < 0)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (!FUNC_1(VAR_4 + VAR_6, VAR_3))
   return 1;

  VAR_6 += FUNC_2(&VAR_4[VAR_6], VAR_5 - VAR_6);
 }

 return 0;
}
