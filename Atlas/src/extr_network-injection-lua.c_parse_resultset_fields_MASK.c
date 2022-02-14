
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rows_chunk_head; scalar_t__ fields; TYPE_1__* result_queue; } ;
typedef TYPE_2__ proxy_resultset_t ;
struct TYPE_8__ {int next; } ;
struct TYPE_6__ {int head; } ;
typedef TYPE_3__ GList ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 () ;
 TYPE_3__* FUNC_2 (int ,scalar_t__) ;

int FUNC_3(proxy_resultset_t *VAR_0) {
 GList *VAR_1;

 FUNC_0(VAR_0->result_queue != ((void*)0), -1);

 if (VAR_0->fields) return 0;


 VAR_0->fields = FUNC_1();

 if (!VAR_0->fields) return -1;

 VAR_1 = FUNC_2(VAR_0->result_queue->head, VAR_0->fields);


 if (!VAR_1) return -1;


 VAR_0->rows_chunk_head = VAR_1->next;

 return 0;
}
