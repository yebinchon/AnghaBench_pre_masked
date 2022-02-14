
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* unused_buffers; int outstanding; } ;
typedef TYPE_2__ ogg_buffer_state ;
struct TYPE_6__ {TYPE_2__* owner; TYPE_3__* next; } ;
struct TYPE_8__ {long size; int refcount; TYPE_1__ ptr; void* data; } ;
typedef TYPE_3__ ogg_buffer ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (void*,long) ;

__attribute__((used)) static ogg_buffer *FUNC_2(ogg_buffer_state *VAR_0,long VAR_1){
  ogg_buffer *VAR_2;
  VAR_0->outstanding++;


  if(VAR_0->unused_buffers){
    VAR_2=VAR_0->unused_buffers;
    VAR_0->unused_buffers=VAR_2->ptr.next;


    if(VAR_2->size<VAR_1){
      VAR_2->data=FUNC_1(VAR_2->data,VAR_1);
      VAR_2->size=VAR_1;
    }
  }else{

    VAR_2=FUNC_0(sizeof(*VAR_2));
    VAR_2->data=FUNC_0(VAR_1<16?16:VAR_1);
    VAR_2->size=VAR_1;
  }

  VAR_2->refcount=1;
  VAR_2->ptr.owner=VAR_0;
  return VAR_2;
}
