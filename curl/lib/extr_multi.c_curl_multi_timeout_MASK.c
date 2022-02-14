
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_multi {scalar_t__ in_callback; } ;
typedef int CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_multi*) ;
 int FUNC_1 (struct Curl_multi*,long*) ;

CURLMcode FUNC_2(struct Curl_multi *VAR_2,
                             long *VAR_3)
{

  if(!FUNC_0(VAR_2))
    return VAR_0;

  if(VAR_2->in_callback)
    return VAR_1;

  return FUNC_1(VAR_2, VAR_3);
}
