
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef scalar_t__ CURLcode ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct Curl_easy*,char const*,size_t,char**,size_t*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (size_t) ;

char *FUNC_3(struct Curl_easy *VAR_2, const char *VAR_3,
                         int VAR_4, int *VAR_5)
{
  char *VAR_6 = ((void*)0);
  if(VAR_4 >= 0) {
    size_t VAR_7 = VAR_4;
    size_t VAR_8;
    CURLcode VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_7, &VAR_6, &VAR_8,
                                  VAR_0);
    if(VAR_9)
      return ((void*)0);

    if(VAR_5) {
      if(VAR_8 <= (size_t) VAR_1)
        *VAR_5 = FUNC_2(VAR_8);
      else

        FUNC_0(VAR_6);
    }
  }
  return VAR_6;
}
