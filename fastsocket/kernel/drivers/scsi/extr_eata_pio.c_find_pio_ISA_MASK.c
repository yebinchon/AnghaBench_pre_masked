
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct get_conf {int dummy; } ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,struct get_conf*) ;
 int FUNC_1 (scalar_t__,struct get_conf*,int *) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct get_conf *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (!VAR_0[VAR_3])
   continue;
  if (!FUNC_0(VAR_0[VAR_3], VAR_2))
   continue;
  if (!FUNC_1(VAR_0[VAR_3], VAR_2, ((void*)0)))
   FUNC_2(VAR_0[VAR_3], 9);
  else
   VAR_0[VAR_3] = 0;
 }
 return;
}
