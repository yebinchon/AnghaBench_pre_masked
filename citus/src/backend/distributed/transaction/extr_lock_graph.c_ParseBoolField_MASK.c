
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;


 scalar_t__ FUNC_0 (int *,int,int) ;
 char* FUNC_1 (int *,int,int) ;
 int FUNC_2 (char*) ;

bool
FUNC_3(PGresult *VAR_0, int VAR_1, int VAR_2)
{
 char *VAR_3 = ((void*)0);

 if (FUNC_0(VAR_0, VAR_1, VAR_2))
 {
  return 0;
 }

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (FUNC_2(VAR_3) != 1)
 {
  return 0;
 }

 return VAR_3[0] == 't';
}
