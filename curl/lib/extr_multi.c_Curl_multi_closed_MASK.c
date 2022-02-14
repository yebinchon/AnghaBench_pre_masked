
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_sh_entry {int socketp; } ;
struct Curl_multi {int sockhash; int socket_userp; int (* socket_cb ) (struct Curl_easy*,int ,int ,int ,int ) ;} ;
struct Curl_easy {struct Curl_multi* multi; } ;
typedef int curl_socket_t ;


 int VAR_0 ;
 int FUNC_0 (struct Curl_sh_entry*,int *,int ) ;
 struct Curl_sh_entry* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct Curl_easy*,int ,int ,int ,int ) ;

void FUNC_3(struct Curl_easy *VAR_1, curl_socket_t VAR_2)
{
  if(VAR_1) {

    struct Curl_multi *VAR_3 = VAR_1->multi;
    if(VAR_3) {


      struct Curl_sh_entry *VAR_4 = FUNC_1(&VAR_3->sockhash, VAR_2);

      if(VAR_4) {
        if(VAR_3->socket_cb)
          VAR_3->socket_cb(VAR_1, VAR_2, VAR_0,
                           VAR_3->socket_userp,
                           VAR_4->socketp);


        FUNC_0(VAR_4, &VAR_3->sockhash, VAR_2);
      }
    }
  }
}
