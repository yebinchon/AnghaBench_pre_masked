
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (char*,int,int *) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*,size_t) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(char **VAR_3, size_t *VAR_4, FILE *VAR_5)
{
  size_t VAR_6 = 0;
  char *VAR_7;

  if(!*VAR_3) {
    *VAR_3 = FUNC_2(128);
    if(!*VAR_3)
      return VAR_2;
    *VAR_4 = 128;
  }

  for(;;) {
    size_t VAR_8;
    int VAR_9 = FUNC_0(*VAR_4 - VAR_6);

    if(!FUNC_1(*VAR_3 + VAR_6, VAR_9, VAR_5))
      return (VAR_6 != 0) ? VAR_1 : VAR_0;

    VAR_8 = VAR_6 + FUNC_4(*VAR_3 + VAR_6);
    if(*(*VAR_3 + VAR_8 - 1) == '\n')
      break;
    VAR_6 = VAR_8;
    if(VAR_8 < *VAR_4 - 1)
      continue;

    VAR_7 = FUNC_3(*VAR_3, *VAR_4 * 2);
    if(!VAR_7)
      return VAR_2;
    *VAR_3 = VAR_7;
    *VAR_4 *= 2;
  }

  return VAR_1;
}
