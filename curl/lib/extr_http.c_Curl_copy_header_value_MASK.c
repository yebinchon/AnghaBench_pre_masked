
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char* FUNC_3 (char const*,char) ;

char *FUNC_4(const char *VAR_0)
{
  const char *VAR_1;
  const char *VAR_2;
  char *VAR_3;
  size_t VAR_4;


  while(*VAR_0 && (*VAR_0 != ':'))
    ++VAR_0;

  if(*VAR_0)

    ++VAR_0;


  VAR_1 = VAR_0;
  while(*VAR_1 && FUNC_0(*VAR_1))
    VAR_1++;



  VAR_2 = FUNC_3(VAR_1, '\r');
  if(!VAR_2)
    VAR_2 = FUNC_3(VAR_1, '\n');
  if(!VAR_2)
    VAR_2 = FUNC_3(VAR_1, '\0');
  if(!VAR_2)
    return ((void*)0);


  while((VAR_2 > VAR_1) && FUNC_0(*VAR_2))
    VAR_2--;


  VAR_4 = VAR_2 - VAR_1 + 1;

  VAR_3 = FUNC_1(VAR_4 + 1);
  if(!VAR_3)
    return ((void*)0);

  FUNC_2(VAR_3, VAR_1, VAR_4);
  VAR_3[VAR_4] = 0;

  return VAR_3;
}
