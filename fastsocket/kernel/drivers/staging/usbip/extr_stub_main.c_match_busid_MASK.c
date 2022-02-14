
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,char const*,int ) ;

int FUNC_3(const char *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (VAR_2[VAR_5][0])
   if (!FUNC_2(VAR_2[VAR_5], VAR_4, VAR_0)) {

    FUNC_1(&VAR_3);
    return 0;
   }

 FUNC_1(&VAR_3);

 return 1;
}
