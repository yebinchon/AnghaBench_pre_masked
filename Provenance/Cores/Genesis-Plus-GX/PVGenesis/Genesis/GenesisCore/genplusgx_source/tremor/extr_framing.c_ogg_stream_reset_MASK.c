
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pageno; scalar_t__ body_fill_next; scalar_t__ laceptr; scalar_t__ clearflag; scalar_t__ spanflag; scalar_t__ holeflag; scalar_t__ lacing_fill; scalar_t__ body_fill; scalar_t__ granulepos; scalar_t__ packetno; scalar_t__ b_o_s; scalar_t__ e_o_s; scalar_t__ body_head; scalar_t__ body_tail; scalar_t__ header_head; scalar_t__ header_tail; } ;
typedef TYPE_1__ ogg_stream_state ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

int FUNC_1(ogg_stream_state *VAR_1){

  FUNC_0(VAR_1->header_tail);
  FUNC_0(VAR_1->body_tail);
  VAR_1->header_tail=VAR_1->header_head=0;
  VAR_1->body_tail=VAR_1->body_head=0;

  VAR_1->e_o_s=0;
  VAR_1->b_o_s=0;
  VAR_1->pageno=-1;
  VAR_1->packetno=0;
  VAR_1->granulepos=0;

  VAR_1->body_fill=0;
  VAR_1->lacing_fill=0;

  VAR_1->holeflag=0;
  VAR_1->spanflag=0;
  VAR_1->clearflag=0;
  VAR_1->laceptr=0;
  VAR_1->body_fill_next=0;

  return VAR_0;
}
