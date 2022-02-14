
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_sockaddr {int dummy; } ;
typedef int curlsocktype ;
typedef int curl_socket_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static curl_socket_t FUNC_1(void *VAR_2,
                                curlsocktype VAR_3,
                                struct curl_sockaddr *VAR_4)
{
  (void)VAR_3;
  (void)VAR_4;
  (void)VAR_2;
  FUNC_0(VAR_1, "opensocket() returns CURL_SOCKET_BAD\n");
  return VAR_0;
}
