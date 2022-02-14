
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_sockaddr {int dummy; } ;
typedef int curlsocktype ;
typedef int curl_socket_t ;



__attribute__((used)) static curl_socket_t FUNC_0(void *VAR_0,
                                curlsocktype VAR_1,
                                struct curl_sockaddr *VAR_2)
{
  curl_socket_t VAR_3;
  (void)VAR_1;
  (void)VAR_2;
  VAR_3 = *(curl_socket_t *)VAR_0;


  return VAR_3;
}
