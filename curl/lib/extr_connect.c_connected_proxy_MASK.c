
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int socksproxy_connecting; scalar_t__ conn_to_port; scalar_t__ httpproxy; scalar_t__ conn_to_host; scalar_t__ socksproxy; } ;
struct TYPE_11__ {int proxytype; int user; int passwd; } ;
struct TYPE_7__ {char* name; } ;
struct TYPE_10__ {scalar_t__ port; TYPE_1__ host; } ;
struct TYPE_9__ {char* name; } ;
struct TYPE_8__ {char* name; } ;
struct connectdata {char* secondaryhostname; int secondary_port; int conn_to_port; int remote_port; TYPE_6__ bits; int data; TYPE_5__ socks_proxy; TYPE_4__ http_proxy; TYPE_3__ host; TYPE_2__ conn_to_host; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,char const* const,int const,int,struct connectdata*) ;
 int FUNC_1 (int ,int ,char const* const,int const,int,struct connectdata*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_5, int VAR_6)
{
  CURLcode VAR_7 = VAR_1;

  if(VAR_5->bits.socksproxy) {




    const char * const VAR_8 = VAR_5->bits.httpproxy ?
                              VAR_5->http_proxy.host.name :
                              VAR_5->bits.conn_to_host ?
                              VAR_5->conn_to_host.name :
                              VAR_6 == VAR_3 ?
                              VAR_5->secondaryhostname : VAR_5->host.name;
    const int VAR_9 = VAR_5->bits.httpproxy ? (int)VAR_5->http_proxy.port :
                     VAR_6 == VAR_3 ? VAR_5->secondary_port :
                     VAR_5->bits.conn_to_port ? VAR_5->conn_to_port :
                     VAR_5->remote_port;
    VAR_5->bits.socksproxy_connecting = VAR_4;
    switch(VAR_5->socks_proxy.proxytype) {
    case 129:
    case 128:
      VAR_7 = FUNC_1(VAR_5->socks_proxy.user, VAR_5->socks_proxy.passwd,
                         VAR_8, VAR_9, VAR_6, VAR_5);
      break;

    case 131:
    case 130:
      VAR_7 = FUNC_0(VAR_5->socks_proxy.user, VAR_8, VAR_9, VAR_6,
                           VAR_5);
      break;

    default:
      FUNC_2(VAR_5->data, "unknown proxytype option given");
      VAR_7 = VAR_0;
    }
    VAR_5->bits.socksproxy_connecting = VAR_2;



  }

  return VAR_7;
}
