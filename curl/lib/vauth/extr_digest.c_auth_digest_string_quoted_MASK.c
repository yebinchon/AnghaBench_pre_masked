
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;

__attribute__((used)) static char *FUNC_1(const char *VAR_0)
{
  char *VAR_1;
  const char *VAR_2 = VAR_0;
  size_t VAR_3 = 1;


  while(*VAR_2) {
    ++VAR_3;
    if(*VAR_2 == '"' || *VAR_2 == '\\') {
      ++VAR_3;
    }
    ++VAR_2;
  }

  VAR_1 = FUNC_0(VAR_3);
  if(VAR_1) {
    char *VAR_4 = VAR_1;
    VAR_2 = VAR_0;
    while(*VAR_2) {
      if(*VAR_2 == '"' || *VAR_2 == '\\') {
        *VAR_4++ = '\\';
      }
      *VAR_4++ = *VAR_2++;
    }
    *VAR_4 = 0;
  }

  return VAR_1;
}
