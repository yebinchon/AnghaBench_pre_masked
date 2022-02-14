
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_hash {int dummy; } ;
struct Curl_sh_entry {int transfers; } ;
typedef int curl_socket_t ;


 int FUNC_0 (struct curl_hash*,char*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct Curl_sh_entry *VAR_0,
                        struct curl_hash *VAR_1, curl_socket_t VAR_2)
{
  FUNC_1(&VAR_0->transfers);



  FUNC_0(VAR_1, (char *)&VAR_2, sizeof(curl_socket_t));
}
