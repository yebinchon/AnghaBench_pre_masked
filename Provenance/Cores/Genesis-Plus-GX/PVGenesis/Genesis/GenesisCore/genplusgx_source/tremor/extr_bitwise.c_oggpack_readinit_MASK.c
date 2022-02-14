
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* head; int headend; scalar_t__ headptr; scalar_t__ count; TYPE_3__* tail; } ;
typedef TYPE_2__ oggpack_buffer ;
struct TYPE_10__ {int length; scalar_t__ begin; TYPE_1__* buffer; } ;
typedef TYPE_3__ ogg_reference ;
struct TYPE_8__ {scalar_t__ data; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void FUNC_2(oggpack_buffer *VAR_0,ogg_reference *VAR_1){
  FUNC_1(VAR_0,0,sizeof(*VAR_0));

  VAR_0->tail=VAR_0->head=VAR_1;
  VAR_0->count=0;
  VAR_0->headptr=VAR_0->head->buffer->data+VAR_0->head->begin;
  VAR_0->headend=VAR_0->head->length;
  FUNC_0(VAR_0);
}
