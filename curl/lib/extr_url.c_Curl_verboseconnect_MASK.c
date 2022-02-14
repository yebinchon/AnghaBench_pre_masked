
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int dispname; } ;
struct TYPE_13__ {int dispname; } ;
struct TYPE_16__ {scalar_t__ conn_to_host; scalar_t__ httpproxy; scalar_t__ socksproxy; } ;
struct TYPE_11__ {int dispname; } ;
struct TYPE_12__ {TYPE_2__ host; } ;
struct TYPE_17__ {int dispname; } ;
struct TYPE_10__ {TYPE_8__ host; } ;
struct connectdata {int connection_id; int port; int ip_addr_str; TYPE_5__ host; TYPE_4__ conn_to_host; TYPE_7__ bits; TYPE_3__ http_proxy; TYPE_1__ socks_proxy; TYPE_9__* data; } ;
struct TYPE_15__ {scalar_t__ verbose; } ;
struct TYPE_18__ {TYPE_6__ set; } ;


 int FUNC_0 (TYPE_9__*,char*,int ,int ,int ,int ) ;

void FUNC_1(struct connectdata *VAR_0)
{
  if(VAR_0->data->set.verbose)
    FUNC_0(VAR_0->data, "Connected to %s (%s) port %ld (#%ld)\n",
          VAR_0->bits.socksproxy ? VAR_0->socks_proxy.host.dispname :
          VAR_0->bits.httpproxy ? VAR_0->http_proxy.host.dispname :
          VAR_0->bits.conn_to_host ? VAR_0->conn_to_host.dispname :
          VAR_0->host.dispname,
          VAR_0->ip_addr_str, VAR_0->port, VAR_0->connection_id);
}
