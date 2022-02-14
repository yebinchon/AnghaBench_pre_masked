
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int end; int pos; TYPE_2__* ref; scalar_t__ ptr; } ;
typedef TYPE_3__ oggbyte_buffer ;
struct TYPE_6__ {int length; scalar_t__ begin; TYPE_1__* buffer; struct TYPE_6__* next; } ;
struct TYPE_5__ {scalar_t__ data; } ;



__attribute__((used)) static void FUNC_0(oggbyte_buffer *VAR_0,int VAR_1){

  while(VAR_1>=VAR_0->end){

    VAR_0->pos+=VAR_0->ref->length;
    VAR_0->ref=VAR_0->ref->next;
    VAR_0->end=VAR_0->ref->length+VAR_0->pos;
    VAR_0->ptr=VAR_0->ref->buffer->data+VAR_0->ref->begin;
  }
}
