
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_multi {scalar_t__ in_callback; } ;
typedef int curl_socket_t ;
typedef scalar_t__ CURLMcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct Curl_multi*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct Curl_multi*,int ,int ,int ,int*) ;

CURLMcode FUNC_2(struct Curl_multi *VAR_3, curl_socket_t VAR_4,
                            int *VAR_5)
{
  CURLMcode VAR_6;
  if(VAR_3->in_callback)
    return VAR_1;
  VAR_6 = FUNC_1(VAR_3, VAR_2, VAR_4, 0, VAR_5);
  if(VAR_0 >= VAR_6)
    FUNC_0(VAR_3);
  return VAR_6;
}
