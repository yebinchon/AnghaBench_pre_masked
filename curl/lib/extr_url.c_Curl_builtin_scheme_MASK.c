
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_handler {int scheme; } ;


 struct Curl_handler** VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

const struct Curl_handler *FUNC_1(const char *VAR_1)
{
  const struct Curl_handler * const *VAR_2;
  const struct Curl_handler *VAR_3;


  for(VAR_2 = VAR_0; (VAR_3 = *VAR_2) != ((void*)0); VAR_2++)
    if(FUNC_0(VAR_3->scheme, VAR_1))

      return VAR_3;
  return ((void*)0);
}
