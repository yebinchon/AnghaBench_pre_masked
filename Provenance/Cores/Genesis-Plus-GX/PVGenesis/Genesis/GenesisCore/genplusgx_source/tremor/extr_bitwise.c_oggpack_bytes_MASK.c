
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {long count; long headptr; int headbit; TYPE_2__* head; } ;
typedef TYPE_3__ oggpack_buffer ;
struct TYPE_6__ {long begin; TYPE_1__* buffer; } ;
struct TYPE_5__ {long data; } ;



long FUNC_0(oggpack_buffer *VAR_0){
  return(VAR_0->count+VAR_0->headptr-VAR_0->head->buffer->data-VAR_0->head->begin+
         (VAR_0->headbit+7)/8);
}
