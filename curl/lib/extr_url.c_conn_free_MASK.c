
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int rawalloc; } ;
struct TYPE_7__ {TYPE_4__ host; int passwd; int user; } ;
struct TYPE_6__ {TYPE_4__ host; int passwd; int user; } ;
struct TYPE_5__ {int rtsp_transport; int cookiehost; int host; int ref; int rangeline; int te; int accept_encoding; int userpwd; int uagent; int proxyuserpwd; } ;
struct connectdata {int ssl_extra; int unix_domain_socket; int proxy_ssl_config; int ssl_config; int localdev; int easyq; int connect_state; TYPE_3__ socks_proxy; TYPE_2__ http_proxy; int secondaryhostname; int hostname_resolve; TYPE_4__ conn_to_host; TYPE_4__ host; int trailer; TYPE_1__ allocptr; int options; int sasl_authzid; int oauth_bearer; int passwd; int user; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct connectdata*) ;
 int FUNC_4 (struct connectdata*) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_6(struct connectdata *VAR_0)
{
  if(!VAR_0)
    return;

  FUNC_5(&VAR_0->host);
  FUNC_5(&VAR_0->conn_to_host);
  FUNC_5(&VAR_0->http_proxy.host);
  FUNC_5(&VAR_0->socks_proxy.host);

  FUNC_2(VAR_0->user);
  FUNC_2(VAR_0->passwd);
  FUNC_2(VAR_0->oauth_bearer);
  FUNC_2(VAR_0->sasl_authzid);
  FUNC_2(VAR_0->options);
  FUNC_2(VAR_0->http_proxy.user);
  FUNC_2(VAR_0->socks_proxy.user);
  FUNC_2(VAR_0->http_proxy.passwd);
  FUNC_2(VAR_0->socks_proxy.passwd);
  FUNC_2(VAR_0->allocptr.proxyuserpwd);
  FUNC_2(VAR_0->allocptr.uagent);
  FUNC_2(VAR_0->allocptr.userpwd);
  FUNC_2(VAR_0->allocptr.accept_encoding);
  FUNC_2(VAR_0->allocptr.te);
  FUNC_2(VAR_0->allocptr.rangeline);
  FUNC_2(VAR_0->allocptr.ref);
  FUNC_2(VAR_0->allocptr.host);
  FUNC_2(VAR_0->allocptr.cookiehost);
  FUNC_2(VAR_0->allocptr.rtsp_transport);
  FUNC_2(VAR_0->trailer);
  FUNC_2(VAR_0->host.rawalloc);
  FUNC_2(VAR_0->conn_to_host.rawalloc);
  FUNC_2(VAR_0->hostname_resolve);
  FUNC_2(VAR_0->secondaryhostname);
  FUNC_2(VAR_0->http_proxy.host.rawalloc);
  FUNC_2(VAR_0->socks_proxy.host.rawalloc);
  FUNC_2(VAR_0->connect_state);

  FUNC_3(VAR_0);
  FUNC_1(&VAR_0->easyq, ((void*)0));
  FUNC_2(VAR_0->localdev);
  FUNC_0(&VAR_0->ssl_config);
  FUNC_0(&VAR_0->proxy_ssl_config);
  FUNC_4(VAR_0);
}
