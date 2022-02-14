
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* next; } ;
struct TYPE_8__ {int outstanding; struct TYPE_8__* unused_references; struct TYPE_8__* next; struct TYPE_8__* unused_buffers; struct TYPE_8__* data; TYPE_1__ ptr; scalar_t__ shutdown; } ;
typedef TYPE_2__ ogg_reference ;
typedef TYPE_2__ ogg_buffer_state ;
typedef TYPE_2__ ogg_buffer ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(ogg_buffer_state *VAR_0){
  ogg_buffer *VAR_1;
  ogg_reference *VAR_2;

  if(VAR_0->shutdown){

    VAR_1=VAR_0->unused_buffers;
    VAR_2=VAR_0->unused_references;

    while(VAR_1){
      ogg_buffer *VAR_3=VAR_1;
      VAR_1=VAR_3->ptr.next;
      if(VAR_3->data)FUNC_0(VAR_3->data);
      FUNC_0(VAR_3);
    }
    VAR_0->unused_buffers=0;
    while(VAR_2){
      ogg_reference *VAR_4=VAR_2;
      VAR_2=VAR_4->next;
      FUNC_0(VAR_4);
    }
    VAR_0->unused_references=0;

    if(!VAR_0->outstanding)
      FUNC_0(VAR_0);

  }
}
