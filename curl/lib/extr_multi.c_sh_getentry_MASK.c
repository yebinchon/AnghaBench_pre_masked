
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_hash {int dummy; } ;
struct Curl_sh_entry {int dummy; } ;
typedef scalar_t__ curl_socket_t ;


 scalar_t__ VAR_0 ;
 struct Curl_sh_entry* FUNC_0 (struct curl_hash*,char*,int) ;

__attribute__((used)) static struct Curl_sh_entry *FUNC_1(struct curl_hash *VAR_1,
                                         curl_socket_t VAR_2)
{
  if(VAR_2 != VAR_0) {

    return FUNC_0(VAR_1, (char *)&VAR_2, sizeof(curl_socket_t));
  }
  return ((void*)0);
}
