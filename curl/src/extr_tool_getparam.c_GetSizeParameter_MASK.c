
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct GlobalConfig {int dummy; } ;
typedef int curl_off_t ;
typedef int ParameterError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char**,int ,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct GlobalConfig*,char*,char const*) ;

__attribute__((used)) static ParameterError FUNC_3(struct GlobalConfig *VAR_4,
                                       const char *VAR_5,
                                       const char *VAR_6,
                                       curl_off_t *VAR_7)
{
  char *VAR_8;
  curl_off_t VAR_9;

  if(FUNC_0(VAR_5, &VAR_8, 0, &VAR_9)) {
    FUNC_2(VAR_4, "invalid number specified for %s\n", VAR_6);
    return VAR_1;
  }

  if(!*VAR_8)
    VAR_8 = (char *)"b";
  else if(FUNC_1(VAR_8) > 1)
    VAR_8 = (char *)"w";

  switch(*VAR_8) {
  case 'G':
  case 'g':
    if(VAR_9 > (VAR_0 / (1024*1024*1024)))
      return VAR_2;
    VAR_9 *= 1024*1024*1024;
    break;
  case 'M':
  case 'm':
    if(VAR_9 > (VAR_0 / (1024*1024)))
      return VAR_2;
    VAR_9 *= 1024*1024;
    break;
  case 'K':
  case 'k':
    if(VAR_9 > (VAR_0 / 1024))
      return VAR_2;
    VAR_9 *= 1024;
    break;
  case 'b':
  case 'B':

    break;
  default:
    FUNC_2(VAR_4, "unsupported %s unit. Use G, M, K or B!\n", VAR_6);
    return VAR_1;
  }
  *VAR_7 = VAR_9;
  return VAR_3;
}
