
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

bool FUNC_0(const char *VAR_4, char *VAR_5, char *VAR_6,
                               const char **VAR_7)
{
  int VAR_8;
  bool VAR_9 = VAR_2;
  bool VAR_10 = VAR_2;

  for(VAR_8 = VAR_1 - 1; (*VAR_4 && (*VAR_4 != '=') && VAR_8--);)
    *VAR_5++ = *VAR_4++;
  *VAR_5 = 0;

  if('=' != *VAR_4++)

    return VAR_2;

  if('\"' == *VAR_4) {

    VAR_4++;
    VAR_9 = VAR_3;
  }

  for(VAR_8 = VAR_0 - 1; *VAR_4 && VAR_8--; VAR_4++) {
    switch(*VAR_4) {
    case '\\':
      if(!VAR_10) {

        VAR_10 = VAR_3;
        *VAR_6++ = '\\';

        continue;
      }
      break;

    case ',':
      if(!VAR_9) {


        VAR_8 = 0;
        continue;
      }
      break;

    case '\r':
    case '\n':

      VAR_8 = 0;
      continue;

    case '\"':
      if(!VAR_10 && VAR_9) {

        VAR_8 = 0;
        continue;
      }
      break;
    }

    VAR_10 = VAR_2;
    *VAR_6++ = *VAR_4;
  }

  *VAR_6 = 0;
  *VAR_7 = VAR_4;

  return VAR_3;
}
