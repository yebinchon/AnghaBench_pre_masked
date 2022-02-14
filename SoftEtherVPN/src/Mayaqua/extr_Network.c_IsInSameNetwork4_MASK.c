
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IP ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(IP *VAR_0, IP *VAR_1, IP *VAR_2)
{
 IP VAR_3, VAR_4;

 if (FUNC_2(VAR_0) == 0 || FUNC_2(VAR_1) == 0 || FUNC_2(VAR_2) == 0)
 {
  return 0;
 }

 FUNC_1(&VAR_3, VAR_0, VAR_2);
 FUNC_1(&VAR_4, VAR_1, VAR_2);

 if (FUNC_0(&VAR_3, &VAR_4) == 0)
 {
  return 1;
 }

 return 0;
}
