
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curl_mimepart ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static CURLcode FUNC_4(curl_mimepart *VAR_1, const char *VAR_2, size_t VAR_3)
{
  char *VAR_4;
  CURLcode VAR_5;

  if(!VAR_2 || !VAR_3)
    return FUNC_0(VAR_1, VAR_2);
  VAR_4 = FUNC_2(VAR_3 + 1);
  if(!VAR_4)
    return VAR_0;
  FUNC_3(VAR_4, VAR_2, VAR_3);
  VAR_4[VAR_3] = '\0';
  VAR_5 = FUNC_0(VAR_1, VAR_4);
  FUNC_1(VAR_4);
  return VAR_5;
}
