
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char** FUNC_0 (size_t,int) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*,char*,char**) ;

__attribute__((used)) static bool FUNC_3(char *VAR_2, char ***VAR_3, size_t *VAR_4)
{
  char **VAR_5;
  char *VAR_6;
  char *VAR_7;
  size_t VAR_8;
  size_t VAR_9 = 1;

  VAR_7 = FUNC_1(VAR_2, ',');
  while(VAR_7) {
    VAR_9++;
    VAR_7 = FUNC_1(++VAR_7, ',');
  }

  VAR_5 = FUNC_0(VAR_9, sizeof(char *));
  if(!VAR_5)
    return VAR_0;

  for(VAR_8 = 0, VAR_7 = FUNC_2(VAR_2, ",", &VAR_6); VAR_7 && VAR_8 < VAR_9;
      VAR_7 = FUNC_2(((void*)0), ",", &VAR_6), VAR_8++)
    VAR_5[VAR_8] = VAR_7;

  *VAR_3 = VAR_5;
  *VAR_4 = VAR_9;

  return VAR_1;
}
