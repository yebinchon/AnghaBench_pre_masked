
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int timediff_t ;
struct hostname {char const* dispname; int name; } ;
struct TYPE_6__ {struct hostname host; } ;
struct TYPE_5__ {struct hostname host; } ;
struct TYPE_4__ {scalar_t__ socksproxy; scalar_t__ conn_to_port; scalar_t__ conn_to_host; int proxy; scalar_t__ reuse; } ;
struct connectdata {char* unix_domain_socket; struct Curl_dns_entry* dns_entry; scalar_t__ port; void* hostname_resolve; TYPE_3__ http_proxy; TYPE_2__ socks_proxy; TYPE_1__ bits; scalar_t__ remote_port; scalar_t__ conn_to_port; struct hostname host; struct hostname conn_to_host; int abstract_unix_socket; } ;
struct Curl_easy {char* unix_domain_socket; struct Curl_dns_entry* dns_entry; scalar_t__ port; void* hostname_resolve; TYPE_3__ http_proxy; TYPE_2__ socks_proxy; TYPE_1__ bits; scalar_t__ remote_port; scalar_t__ conn_to_port; struct hostname host; struct hostname conn_to_host; int abstract_unix_socket; } ;
struct Curl_dns_entry {int inuse; int addr; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct connectdata*,void*,int,struct Curl_dns_entry**,int ) ;
 int FUNC_1 (struct connectdata*,int *,int) ;
 int FUNC_2 (char const*,int*,int ) ;
 int FUNC_3 (struct connectdata*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct Curl_dns_entry* FUNC_4 (int,int) ;
 int FUNC_5 (struct connectdata*,char*,char const*) ;
 int FUNC_6 (struct Curl_dns_entry*) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static CURLcode FUNC_8(struct Curl_easy *VAR_9,
                               struct connectdata *VAR_10,
                               bool *VAR_11)
{
  CURLcode VAR_12 = VAR_2;
  timediff_t VAR_13 = FUNC_1(VAR_9, ((void*)0), VAR_8);

  FUNC_3(VAR_10);
  FUNC_3(VAR_9);



  if(VAR_10->bits.reuse)



    *VAR_11 = VAR_7;

  else {

    int VAR_14;
    struct Curl_dns_entry *VAR_15;
    if(!VAR_10->bits.proxy) {
      struct hostname *VAR_16;
      if(VAR_10->bits.conn_to_host)
        VAR_16 = &VAR_10->conn_to_host;
      else
        VAR_16 = &VAR_10->host;



      if(VAR_10->bits.conn_to_port)
        VAR_10->port = VAR_10->conn_to_port;
      else
        VAR_10->port = VAR_10->remote_port;


      VAR_10->hostname_resolve = FUNC_7(VAR_16->name);
      if(!VAR_10->hostname_resolve)
        return VAR_4;
      VAR_14 = FUNC_0(VAR_10, VAR_10->hostname_resolve, (int)VAR_10->port,
                               &VAR_15, VAR_13);
      if(VAR_14 == VAR_5)
        *VAR_11 = VAR_8;

      else if(VAR_14 == VAR_6)
        VAR_12 = VAR_3;

      else if(!VAR_15) {
        FUNC_5(VAR_9, "Couldn't resolve host '%s'", VAR_16->dispname);
        VAR_12 = VAR_0;

      }
    }
    else {


      struct hostname * const VAR_17 = VAR_10->bits.socksproxy ?
        &VAR_10->socks_proxy.host : &VAR_10->http_proxy.host;


      VAR_10->hostname_resolve = FUNC_7(VAR_17->name);
      if(!VAR_10->hostname_resolve)
        return VAR_4;
      VAR_14 = FUNC_0(VAR_10, VAR_10->hostname_resolve, (int)VAR_10->port,
                               &VAR_15, VAR_13);

      if(VAR_14 == VAR_5)
        *VAR_11 = VAR_8;

      else if(VAR_14 == VAR_6)
        VAR_12 = VAR_3;

      else if(!VAR_15) {
        FUNC_5(VAR_9, "Couldn't resolve proxy '%s'", VAR_17->dispname);
        VAR_12 = VAR_1;

      }
    }
    FUNC_3(VAR_10->dns_entry == ((void*)0));
    VAR_10->dns_entry = VAR_15;
  }

  return VAR_12;
}
