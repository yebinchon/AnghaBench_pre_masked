
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef int CURLcode ;


 int FUNC_0 (struct Curl_easy*,char*,int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 char* FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,int,char*,unsigned char) ;
 size_t FUNC_6 (char const*) ;

char *FUNC_7(struct Curl_easy *VAR_0, const char *VAR_1,
                       int VAR_2)
{
  size_t VAR_3;
  char *VAR_4;
  char *VAR_5 = ((void*)0);
  size_t VAR_6;
  size_t VAR_7 = 0;
  size_t VAR_8;
  CURLcode VAR_9;

  if(VAR_2 < 0)
    return ((void*)0);

  VAR_3 = (VAR_2?(size_t)VAR_2:FUNC_6(VAR_1)) + 1;
  VAR_6 = VAR_3;

  VAR_4 = FUNC_4(VAR_3);
  if(!VAR_4)
    return ((void*)0);

  VAR_8 = VAR_3-1;
  while(VAR_8--) {
    unsigned char VAR_10 = *VAR_1;

    if(FUNC_1(VAR_10))

      VAR_4[VAR_7++] = VAR_10;
    else {

      VAR_6 += 2;
      if(VAR_6 > VAR_3) {
        VAR_3 *= 2;
        VAR_5 = FUNC_2(VAR_4, VAR_3);
        if(!VAR_5)
          return ((void*)0);
        VAR_4 = VAR_5;
      }

      VAR_9 = FUNC_0(VAR_0, (char *)&VAR_10, 1);
      if(VAR_9) {

        FUNC_3(VAR_4);
        return ((void*)0);
      }

      FUNC_5(&VAR_4[VAR_7], 4, "%%%02X", VAR_10);

      VAR_7 += 3;
    }
    VAR_1++;
  }
  VAR_4[VAR_7] = 0;
  return VAR_4;
}
