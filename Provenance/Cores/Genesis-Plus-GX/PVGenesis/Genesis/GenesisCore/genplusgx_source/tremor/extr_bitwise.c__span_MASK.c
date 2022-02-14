
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int headend; scalar_t__ headbit; TYPE_2__* head; scalar_t__ headptr; int count; } ;
typedef TYPE_3__ oggpack_buffer ;
struct TYPE_7__ {scalar_t__ length; scalar_t__ begin; TYPE_1__* buffer; struct TYPE_7__* next; } ;
struct TYPE_6__ {scalar_t__ data; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(oggpack_buffer *VAR_0){
  while(VAR_0->headend<1){
    if(VAR_0->head->next){
      VAR_0->count+=VAR_0->head->length;
      VAR_0->head=VAR_0->head->next;
      VAR_0->headptr=VAR_0->head->buffer->data+VAR_0->head->begin-VAR_0->headend;
      VAR_0->headend+=VAR_0->head->length;
    }else{


      if(VAR_0->headend<0 || VAR_0->headbit)

        FUNC_0(VAR_0);

      break;
    }
  }
}
