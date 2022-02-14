
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bodybytes; scalar_t__ headerbytes; scalar_t__ unsynced; scalar_t__ fifo_fill; scalar_t__ fifo_head; scalar_t__ fifo_tail; } ;
typedef TYPE_1__ ogg_sync_state ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

int FUNC_1(ogg_sync_state *VAR_1){

  FUNC_0(VAR_1->fifo_tail);
  VAR_1->fifo_tail=0;
  VAR_1->fifo_head=0;
  VAR_1->fifo_fill=0;

  VAR_1->unsynced=0;
  VAR_1->headerbytes=0;
  VAR_1->bodybytes=0;
  return VAR_0;
}
