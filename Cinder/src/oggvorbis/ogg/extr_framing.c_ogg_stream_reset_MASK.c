
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pageno; scalar_t__ granulepos; scalar_t__ packetno; scalar_t__ b_o_s; scalar_t__ e_o_s; scalar_t__ header_fill; scalar_t__ lacing_returned; scalar_t__ lacing_packet; scalar_t__ lacing_fill; scalar_t__ body_returned; scalar_t__ body_fill; } ;
typedef TYPE_1__ ogg_stream_state ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

int FUNC_1(ogg_stream_state *VAR_0){
  if(FUNC_0(VAR_0)) return -1;

  VAR_0->body_fill=0;
  VAR_0->body_returned=0;

  VAR_0->lacing_fill=0;
  VAR_0->lacing_packet=0;
  VAR_0->lacing_returned=0;

  VAR_0->header_fill=0;

  VAR_0->e_o_s=0;
  VAR_0->b_o_s=0;
  VAR_0->pageno=-1;
  VAR_0->packetno=0;
  VAR_0->granulepos=0;

  return(0);
}
