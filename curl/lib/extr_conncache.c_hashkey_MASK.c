
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {char* name; } ;
struct TYPE_8__ {char* name; } ;
struct TYPE_10__ {scalar_t__ conn_to_host; int tunnel_proxy; scalar_t__ httpproxy; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_7__ {TYPE_1__ host; } ;
struct connectdata {long remote_port; long port; TYPE_4__ host; TYPE_3__ conn_to_host; TYPE_5__ bits; TYPE_2__ http_proxy; } ;


 int FUNC_0 (char*,size_t,char*,long,char const*) ;

__attribute__((used)) static void FUNC_1(struct connectdata *VAR_0, char *VAR_1,
                    size_t VAR_2,
                    const char **VAR_3)
{
  const char *VAR_4;
  long VAR_5 = VAR_0->remote_port;

  if(VAR_0->bits.httpproxy && !VAR_0->bits.tunnel_proxy) {
    VAR_4 = VAR_0->http_proxy.host.name;
    VAR_5 = VAR_0->port;
  }
  else if(VAR_0->bits.conn_to_host)
    VAR_4 = VAR_0->conn_to_host.name;
  else
    VAR_4 = VAR_0->host.name;

  if(VAR_3)

    *VAR_3 = VAR_4;


  FUNC_0(VAR_1, VAR_2, "%ld%s", VAR_5, VAR_4);
}
