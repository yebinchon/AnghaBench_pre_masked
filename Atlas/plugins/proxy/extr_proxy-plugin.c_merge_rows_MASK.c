
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_31__ {scalar_t__ binary_encoded; } ;
struct TYPE_35__ {TYPE_4__* fields; TYPE_12__* rows_chunk_head; int bytes; int rows; TYPE_3__ qstat; scalar_t__ result_queue; } ;
typedef TYPE_7__ proxy_resultset_t ;
struct TYPE_36__ {scalar_t__ offset; TYPE_5__* data; } ;
typedef TYPE_8__ network_packet ;
typedef int network_mysqld_lenenc_type ;
struct TYPE_37__ {TYPE_6__* merge_res; TYPE_2__* server; } ;
typedef TYPE_9__ network_mysqld_con ;
struct TYPE_26__ {int bytes; int rows; TYPE_3__ qstat; int resultset_is_needed; } ;
typedef TYPE_10__ injection ;
typedef int guint64 ;
typedef scalar_t__ guint ;
struct TYPE_34__ {scalar_t__ limit; TYPE_11__* rows; } ;
struct TYPE_33__ {scalar_t__ str; } ;
struct TYPE_32__ {scalar_t__ len; } ;
struct TYPE_30__ {TYPE_1__* recv_queue; } ;
struct TYPE_29__ {scalar_t__ chunks; } ;
struct TYPE_28__ {struct TYPE_28__* next; TYPE_5__* data; } ;
struct TYPE_27__ {scalar_t__ len; } ;
typedef TYPE_11__ GPtrArray ;
typedef TYPE_12__ GList ;






 int FUNC_0 (TYPE_11__*,TYPE_11__*) ;
 TYPE_11__* FUNC_1 () ;
 TYPE_11__* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (TYPE_8__*,int*) ;
 int FUNC_4 (TYPE_8__*,int*) ;
 int FUNC_5 (TYPE_8__*,int) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*) ;
 TYPE_7__* FUNC_9 () ;

void FUNC_10(network_mysqld_con* VAR_0, injection* VAR_1) {
 if (!VAR_1->resultset_is_needed || !VAR_0->server->recv_queue->chunks || VAR_1->qstat.binary_encoded) return;

 proxy_resultset_t* VAR_2 = FUNC_9();

 VAR_2->result_queue = VAR_0->server->recv_queue->chunks;
 VAR_2->qstat = VAR_1->qstat;
 VAR_2->rows = VAR_1->rows;
 VAR_2->bytes = VAR_1->bytes;

 FUNC_7(VAR_2);

 GList* VAR_3 = VAR_2->rows_chunk_head;
 while (VAR_3) {
  network_packet VAR_4;
  VAR_4.data = VAR_3->data;
  VAR_4.offset = 0;

  FUNC_6(&VAR_4);
  network_mysqld_lenenc_type VAR_5;
  FUNC_4(&VAR_4, &VAR_5);

  switch (VAR_5) {
   case 130:
   case 131:
    FUNC_8(VAR_2);
    return;

   case 129:
   case 128:
    break;
  }

  GPtrArray* VAR_6 = FUNC_1();

  guint VAR_7 = VAR_2->fields->len;
  guint VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   guint64 VAR_9;

   FUNC_4(&VAR_4, &VAR_5);

   switch (VAR_5) {
    case 128:
     FUNC_5(&VAR_4, 1);
     break;

    case 129:
     FUNC_3(&VAR_4, &VAR_9);
     FUNC_0(VAR_6, FUNC_2(VAR_4.data->str + VAR_4.offset, VAR_9));
     FUNC_5(&VAR_4, VAR_9);
     break;

    default:
     break;
   }
  }

  FUNC_0(VAR_0->merge_res->rows, VAR_6);
  if (VAR_0->merge_res->rows->len >= VAR_0->merge_res->limit) break;
  VAR_3 = VAR_3->next;
 }

 FUNC_8(VAR_2);
}
