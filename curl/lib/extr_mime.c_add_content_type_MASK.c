
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;
typedef int CURLcode ;


 int FUNC_0 (struct curl_slist**,char*,char const*,char*,char const*) ;

__attribute__((used)) static CURLcode FUNC_1(struct curl_slist **VAR_0,
                                 const char *VAR_1, const char *VAR_2)
{
  return FUNC_0(VAR_0, "Content-Type: %s%s%s", VAR_1,
                              VAR_2? "; boundary=": "",
                              VAR_2? VAR_2: "");
}
