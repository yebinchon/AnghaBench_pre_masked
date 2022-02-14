
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,int,int *) ;

int FUNC_3(char *VAR_0, char *VAR_1, int VAR_2)
{
  FILE *VAR_3 = FUNC_1(VAR_0, "rb");
  if(!VAR_3) return (0);
  FUNC_2(VAR_1, VAR_2, 1, VAR_3);
  FUNC_0(VAR_3);
  return (1);
}
