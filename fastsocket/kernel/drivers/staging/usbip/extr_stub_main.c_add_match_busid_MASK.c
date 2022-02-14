
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_4)
{
 int VAR_5;

 if (!FUNC_0(VAR_4))
  return 0;

 FUNC_1(&VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (!VAR_2[VAR_5][0]) {
   FUNC_3(VAR_2[VAR_5], VAR_4, VAR_0);
   FUNC_2(&VAR_3);
   return 0;
  }

 FUNC_2(&VAR_3);

 return -1;
}
