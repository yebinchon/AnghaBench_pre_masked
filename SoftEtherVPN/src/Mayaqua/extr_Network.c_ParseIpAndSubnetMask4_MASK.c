
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IP ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int *,int *) ;

bool FUNC_3(char *VAR_0, UINT *VAR_1, UINT *VAR_2)
{
 IP VAR_3, VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_2(VAR_0, &VAR_3, &VAR_4) == 0)
 {
  return 0;
 }

 if (FUNC_1(&VAR_3) == 0)
 {
  return 0;
 }

 if (VAR_1 != ((void*)0))
 {
  *VAR_1 = FUNC_0(&VAR_3);
 }

 if (VAR_2 != ((void*)0))
 {
  *VAR_2 = FUNC_0(&VAR_4);
 }

 return 1;
}
