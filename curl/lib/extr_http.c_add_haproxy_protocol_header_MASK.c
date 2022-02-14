
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ipv6; } ;
struct connectdata {TYPE_3__* data; TYPE_1__ bits; } ;
typedef int proxy_header ;
struct TYPE_5__ {int request_size; int conn_primary_port; int conn_local_port; int conn_primary_ip; int conn_local_ip; } ;
struct TYPE_6__ {TYPE_2__ info; } ;
typedef int Curl_send_buffer ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 () ;
 scalar_t__ FUNC_1 (int **,struct connectdata*,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int **,char*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int,char*,char*,int ,int ,int ,int ) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_2)
{
  char VAR_3[128];
  Curl_send_buffer *VAR_4;
  CURLcode VAR_5;
  char VAR_6[5];


  if(VAR_2->bits.ipv6) {
    FUNC_4(VAR_6, "TCP6");
  }
  else {
    FUNC_4(VAR_6, "TCP4");
  }

  FUNC_3(VAR_3,
            sizeof(VAR_3),
            "PROXY %s %s %s %li %li\r\n",
            VAR_6,
            VAR_2->data->info.conn_local_ip,
            VAR_2->data->info.conn_primary_ip,
            VAR_2->data->info.conn_local_port,
            VAR_2->data->info.conn_primary_port);

  VAR_4 = FUNC_0();
  if(!VAR_4)
    return VAR_0;

  VAR_5 = FUNC_2(&VAR_4, VAR_3);
  if(VAR_5)
    return VAR_5;

  VAR_5 = FUNC_1(&VAR_4,
                                VAR_2,
                                &VAR_2->data->info.request_size,
                                0,
                                VAR_1);

  return VAR_5;
}
