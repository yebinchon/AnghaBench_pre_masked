
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {long fifo_fill; TYPE_2__* fifo_head; } ;
typedef TYPE_3__ ogg_sync_state ;
struct TYPE_6__ {long length; long begin; TYPE_1__* buffer; } ;
struct TYPE_5__ {long size; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(ogg_sync_state *VAR_2, long VAR_3){
  if(!VAR_2->fifo_head)return VAR_0;
  if(VAR_2->fifo_head->buffer->size-VAR_2->fifo_head->length-VAR_2->fifo_head->begin <
     VAR_3)return VAR_0;
  VAR_2->fifo_head->length+=VAR_3;
  VAR_2->fifo_fill+=VAR_3;
  return VAR_1;
}
