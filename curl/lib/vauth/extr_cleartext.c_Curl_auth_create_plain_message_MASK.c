
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (struct Curl_easy*,char*,size_t,char**,size_t*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;

CURLcode FUNC_5(struct Curl_easy *VAR_2,
                                        const char *VAR_3,
                                        const char *VAR_4,
                                        const char *VAR_5,
                                        char **VAR_6, size_t *VAR_7)
{
  CURLcode VAR_8;
  char *VAR_9;
  size_t VAR_10;
  size_t VAR_11;
  size_t VAR_12;
  size_t VAR_13;

  *VAR_7 = 0;
  *VAR_6 = ((void*)0);
  VAR_10 = (VAR_3 == ((void*)0) ? 0 : FUNC_4(VAR_3));
  VAR_11 = FUNC_4(VAR_4);
  VAR_12 = FUNC_4(VAR_5);


  if(((VAR_10 + VAR_11) > VAR_1/4) || (VAR_12 > (VAR_1/2 - 2)))
    return VAR_0;
  VAR_13 = VAR_10 + VAR_11 + VAR_12 + 2;

  VAR_9 = FUNC_2(VAR_13);
  if(!VAR_9)
    return VAR_0;


  if(VAR_10 != 0)
    FUNC_3(VAR_9, VAR_3, VAR_10);
  VAR_9[VAR_10] = '\0';
  FUNC_3(VAR_9 + VAR_10 + 1, VAR_4, VAR_11);
  VAR_9[VAR_10 + VAR_11 + 1] = '\0';
  FUNC_3(VAR_9 + VAR_10 + VAR_11 + 2, VAR_5, VAR_12);


  VAR_8 = FUNC_0(VAR_2, VAR_9, VAR_13, VAR_6, VAR_7);
  FUNC_1(VAR_9);

  return VAR_8;
}
