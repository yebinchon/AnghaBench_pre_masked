
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lacing_returned; int lacing_packet; int* lacing_vals; scalar_t__ packetno; scalar_t__ body_returned; int * granule_vals; scalar_t__ body_data; } ;
typedef TYPE_1__ ogg_stream_state ;
struct TYPE_6__ {int e_o_s; int b_o_s; long bytes; int granulepos; scalar_t__ packetno; scalar_t__ packet; } ;
typedef TYPE_2__ ogg_packet ;



__attribute__((used)) static int FUNC_0(ogg_stream_state *VAR_0,ogg_packet *VAR_1,int VAR_2){





  int VAR_3=VAR_0->lacing_returned;

  if(VAR_0->lacing_packet<=VAR_3)return(0);

  if(VAR_0->lacing_vals[VAR_3]&0x400){


    VAR_0->lacing_returned++;
    VAR_0->packetno++;
    return(-1);
  }

  if(!VAR_1 && !VAR_2)return(1);




  {
    int VAR_4=VAR_0->lacing_vals[VAR_3]&0xff;
    long VAR_5=VAR_4;
    int VAR_6=VAR_0->lacing_vals[VAR_3]&0x200;
    int VAR_7=VAR_0->lacing_vals[VAR_3]&0x100;

    while(VAR_4==255){
      int VAR_8=VAR_0->lacing_vals[++VAR_3];
      VAR_4=VAR_8&0xff;
      if(VAR_8&0x200)VAR_6=0x200;
      VAR_5+=VAR_4;
    }

    if(VAR_1){
      VAR_1->e_o_s=VAR_6;
      VAR_1->b_o_s=VAR_7;
      VAR_1->packet=VAR_0->body_data+VAR_0->body_returned;
      VAR_1->packetno=VAR_0->packetno;
      VAR_1->granulepos=VAR_0->granule_vals[VAR_3];
      VAR_1->bytes=VAR_5;
    }

    if(VAR_2){
      VAR_0->body_returned+=VAR_5;
      VAR_0->lacing_returned=VAR_3+1;
      VAR_0->packetno++;
    }
  }
  return(1);
}
