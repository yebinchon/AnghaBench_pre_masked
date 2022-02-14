
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ FUNC_0 (struct Curl_easy*,char const*,int ,char**,size_t*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;

__attribute__((used)) static char *FUNC_3(struct Curl_easy *VAR_1, const char *VAR_2)
{
  char *VAR_3 = ((void*)0);
  char *VAR_4;
  size_t VAR_5;

  CURLcode VAR_6 = FUNC_0(VAR_1, VAR_2, 0, &VAR_3, &VAR_5, VAR_0);
  if(!VAR_3 || VAR_6)
    return ((void*)0);

  VAR_4 = FUNC_2(VAR_5*2 + 1);
  if(VAR_4) {
    char *VAR_7;
    char VAR_8;
    int VAR_9 = 0;


    for(VAR_7 = VAR_3;
        (VAR_8 = *VAR_7) != 0;
        VAR_7++) {
      if((VAR_8 <= 32) || (VAR_8 == 127) ||
          (VAR_8 == '\'') || (VAR_8 == '\"') || (VAR_8 == '\\')) {
        VAR_4[VAR_9++] = '\\';
      }
      VAR_4[VAR_9++] = VAR_8;
    }
    VAR_4[VAR_9] = 0;
  }
  FUNC_1(VAR_3);
  return VAR_4;
}
