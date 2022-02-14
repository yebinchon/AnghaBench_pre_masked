
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct connectdata {int local_port; TYPE_3__* data; int primary_port; TYPE_1__* handler; int local_ip; int primary_ip; } ;
struct TYPE_5__ {int conn_local_port; int conn_primary_port; int conn_protocol; int conn_scheme; int conn_local_ip; int conn_primary_ip; } ;
struct TYPE_6__ {TYPE_2__ info; } ;
struct TYPE_4__ {int protocol; int scheme; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct connectdata *VAR_1)
{
  FUNC_0(VAR_1->data->info.conn_primary_ip, VAR_1->primary_ip, VAR_0);
  FUNC_0(VAR_1->data->info.conn_local_ip, VAR_1->local_ip, VAR_0);
  VAR_1->data->info.conn_scheme = VAR_1->handler->scheme;
  VAR_1->data->info.conn_protocol = VAR_1->handler->protocol;
  VAR_1->data->info.conn_primary_port = VAR_1->primary_port;
  VAR_1->data->info.conn_local_port = VAR_1->local_port;
}
