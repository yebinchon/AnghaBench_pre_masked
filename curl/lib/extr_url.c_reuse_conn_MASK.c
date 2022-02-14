
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int * rawalloc; } ;
struct TYPE_7__ {int * passwd; int * user; TYPE_4__ host; } ;
struct TYPE_6__ {int * passwd; int * user; TYPE_4__ host; } ;
struct TYPE_5__ {int reuse; scalar_t__ proxy_user_passwd; scalar_t__ user_passwd; } ;
struct connectdata {int * unix_domain_socket; int easyq; int * localdev; TYPE_3__ socks_proxy; TYPE_2__ http_proxy; int * options; int * passwd; int * user; TYPE_1__ bits; int * hostname_resolve; int remote_port; int conn_to_port; TYPE_4__ conn_to_host; TYPE_4__ host; int data; int proxy_ssl_config; int ssl_config; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct connectdata*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_7(struct connectdata *VAR_1,
                       struct connectdata *VAR_2)
{
  FUNC_6(&VAR_1->http_proxy.host);
  FUNC_6(&VAR_1->socks_proxy.host);

  FUNC_5(VAR_1->http_proxy.host.rawalloc);
  FUNC_5(VAR_1->socks_proxy.host.rawalloc);



  FUNC_0(&VAR_1->ssl_config);
  FUNC_0(&VAR_1->proxy_ssl_config);

  VAR_2->data = VAR_1->data;



  VAR_2->bits.user_passwd = VAR_1->bits.user_passwd;
  if(VAR_2->bits.user_passwd) {

    FUNC_3(VAR_2->user);
    FUNC_3(VAR_2->passwd);
    VAR_2->user = VAR_1->user;
    VAR_2->passwd = VAR_1->passwd;
    VAR_1->user = ((void*)0);
    VAR_1->passwd = ((void*)0);
  }

  VAR_2->bits.proxy_user_passwd = VAR_1->bits.proxy_user_passwd;
  if(VAR_2->bits.proxy_user_passwd) {

    FUNC_3(VAR_2->http_proxy.user);
    FUNC_3(VAR_2->socks_proxy.user);
    FUNC_3(VAR_2->http_proxy.passwd);
    FUNC_3(VAR_2->socks_proxy.passwd);
    VAR_2->http_proxy.user = VAR_1->http_proxy.user;
    VAR_2->socks_proxy.user = VAR_1->socks_proxy.user;
    VAR_2->http_proxy.passwd = VAR_1->http_proxy.passwd;
    VAR_2->socks_proxy.passwd = VAR_1->socks_proxy.passwd;
    VAR_1->http_proxy.user = ((void*)0);
    VAR_1->socks_proxy.user = ((void*)0);
    VAR_1->http_proxy.passwd = ((void*)0);
    VAR_1->socks_proxy.passwd = ((void*)0);
  }



  FUNC_6(&VAR_2->host);
  FUNC_6(&VAR_2->conn_to_host);
  FUNC_3(VAR_2->host.rawalloc);
  FUNC_3(VAR_2->conn_to_host.rawalloc);
  VAR_2->host = VAR_1->host;
  VAR_2->conn_to_host = VAR_1->conn_to_host;
  VAR_2->conn_to_port = VAR_1->conn_to_port;
  VAR_2->remote_port = VAR_1->remote_port;
  FUNC_3(VAR_2->hostname_resolve);

  VAR_2->hostname_resolve = VAR_1->hostname_resolve;
  VAR_1->hostname_resolve = ((void*)0);


  FUNC_2(VAR_2);

  FUNC_4(VAR_1);


  VAR_2->bits.reuse = VAR_0;

  FUNC_3(VAR_1->user);
  FUNC_3(VAR_1->passwd);
  FUNC_3(VAR_1->options);
  FUNC_3(VAR_1->http_proxy.user);
  FUNC_3(VAR_1->socks_proxy.user);
  FUNC_3(VAR_1->http_proxy.passwd);
  FUNC_3(VAR_1->socks_proxy.passwd);
  FUNC_3(VAR_1->localdev);
  FUNC_1(&VAR_1->easyq, ((void*)0));




}
