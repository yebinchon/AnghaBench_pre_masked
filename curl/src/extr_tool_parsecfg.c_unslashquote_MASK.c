
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(const char *VAR_0, char *VAR_1)
{
  while(*VAR_0 && (*VAR_0 != '\"')) {
    if(*VAR_0 == '\\') {
      char VAR_2;
      VAR_0++;


      switch(VAR_2 = *VAR_0) {
      case '\0':
        continue;
      case 't':
        VAR_2 = '\t';
        break;
      case 'n':
        VAR_2 = '\n';
        break;
      case 'r':
        VAR_2 = '\r';
        break;
      case 'v':
        VAR_2 = '\v';
        break;
      }
      *VAR_1++ = VAR_2;
      VAR_0++;
    }
    else
      *VAR_1++ = *VAR_0++;
  }
  *VAR_1 = '\0';
  return VAR_0;
}
