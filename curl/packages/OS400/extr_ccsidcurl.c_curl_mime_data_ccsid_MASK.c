
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curl_mimepart ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,size_t) ;
 char* FUNC_1 (int ,char const*,size_t,unsigned int) ;
 int FUNC_2 (char*) ;

CURLcode
FUNC_3(curl_mimepart *VAR_2,
                     const char *VAR_3, size_t VAR_4, unsigned int VAR_5)

{
  char *VAR_6 = (char *) ((void*)0);
  CURLcode VAR_7;

  if(!VAR_3)
    return FUNC_0(VAR_2, VAR_3, VAR_4);
  VAR_6 = FUNC_1(VAR_0, VAR_3, VAR_4, VAR_5);
  if(!VAR_6)
    return VAR_1;

  VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_4);
  FUNC_2(VAR_6);
  return VAR_7;
}
