
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * packetblob; } ;
typedef TYPE_1__ vorbis_block_internal ;
struct TYPE_10__ {int sequence; int granulepos; int eofflag; int opb; scalar_t__ res_bits; scalar_t__ floor_bits; scalar_t__ time_bits; scalar_t__ glue_bits; TYPE_1__* internal; } ;
typedef TYPE_2__ vorbis_block ;
struct TYPE_11__ {int packetno; int granulepos; int e_o_s; scalar_t__ b_o_s; int bytes; int packet; } ;
typedef TYPE_3__ ogg_packet ;
struct TYPE_12__ {int (* forward ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__** VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

int FUNC_5(vorbis_block *VAR_3, ogg_packet *VAR_4){
  int VAR_5,VAR_6;
  vorbis_block_internal *VAR_7=VAR_3->internal;

  VAR_3->glue_bits=0;
  VAR_3->time_bits=0;
  VAR_3->floor_bits=0;
  VAR_3->res_bits=0;


  for(VAR_6=0;VAR_6<VAR_1;VAR_6++)
    FUNC_2(VAR_7->packetblob[VAR_6]);





  if((VAR_5=VAR_2[0]->forward(VAR_3)))
    return(VAR_5);

  if(VAR_4){
    if(FUNC_4(VAR_3))


      return(VAR_0);

    VAR_4->packet=FUNC_1(&VAR_3->opb);
    VAR_4->bytes=FUNC_0(&VAR_3->opb);
    VAR_4->b_o_s=0;
    VAR_4->e_o_s=VAR_3->eofflag;
    VAR_4->granulepos=VAR_3->granulepos;
    VAR_4->packetno=VAR_3->sequence;
  }
  return(0);
}
