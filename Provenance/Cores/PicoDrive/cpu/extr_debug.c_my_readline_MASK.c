
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char**,size_t*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *FUNC_5(const char *VAR_2)
{
  char *VAR_3 = ((void*)0);
  size_t VAR_4 = 0;
  ssize_t VAR_5;

  FUNC_3("(pdb) ");
  FUNC_1(VAR_1);
  VAR_5 = FUNC_2(&VAR_3, &VAR_4, VAR_0);
  if (VAR_5 < 0)
    return ((void*)0);
  if (VAR_5 > 0 && VAR_3[VAR_5 - 1] == '\n')
    VAR_3[VAR_5 - 1] = 0;


  return VAR_3;
}
