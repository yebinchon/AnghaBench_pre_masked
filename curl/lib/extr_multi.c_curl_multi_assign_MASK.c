
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_sh_entry {void* socketp; } ;
struct Curl_multi {int sockhash; scalar_t__ in_callback; } ;
typedef int curl_socket_t ;
typedef int CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct Curl_sh_entry* FUNC_0 (int *,int ) ;

CURLMcode FUNC_1(struct Curl_multi *VAR_3, curl_socket_t VAR_4,
                            void *VAR_5)
{
  struct Curl_sh_entry *VAR_6 = ((void*)0);

  if(VAR_3->in_callback)
    return VAR_2;

  VAR_6 = FUNC_0(&VAR_3->sockhash, VAR_4);

  if(!VAR_6)
    return VAR_0;

  VAR_6->socketp = VAR_5;

  return VAR_1;
}
