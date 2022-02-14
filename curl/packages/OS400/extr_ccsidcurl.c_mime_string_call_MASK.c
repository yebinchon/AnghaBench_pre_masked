
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curl_mimepart ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char const*,int,unsigned int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static CURLcode
FUNC_2(curl_mimepart *VAR_2, const char *VAR_3, unsigned int VAR_4,
                 CURLcode (*VAR_5)(curl_mimepart *VAR_6, const char *VAR_7))

{
  char *VAR_8 = (char *) ((void*)0);
  CURLcode VAR_9;

  if(!VAR_3)
    return VAR_5(VAR_2, VAR_3);
  VAR_8 = FUNC_0(VAR_0, VAR_3, -1, VAR_4);
  if(!VAR_8)
    return VAR_1;

  VAR_9 = VAR_5(VAR_2, VAR_8);
  FUNC_1(VAR_8);
  return VAR_9;
}
