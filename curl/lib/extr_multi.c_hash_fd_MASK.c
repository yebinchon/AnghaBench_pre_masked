
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t curl_socket_t ;



__attribute__((used)) static size_t FUNC_0(void *VAR_0, size_t VAR_1, size_t VAR_2)
{
  curl_socket_t VAR_3 = *((curl_socket_t *) VAR_0);
  (void) VAR_1;

  return (VAR_3 % VAR_2);
}
