
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ analysisp; } ;
typedef TYPE_1__ vorbis_dsp_state ;
struct TYPE_8__ {int ampmax; int ** packetblob; } ;
typedef TYPE_2__ vorbis_block_internal ;
struct TYPE_9__ {int opb; TYPE_2__* internal; int * localstore; scalar_t__ localalloc; TYPE_1__* vd; } ;
typedef TYPE_3__ vorbis_block ;
typedef int oggpack_buffer ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(vorbis_dsp_state *VAR_1, vorbis_block *VAR_2){
  int VAR_3;
  FUNC_1(VAR_2,0,sizeof(*VAR_2));
  VAR_2->vd=VAR_1;
  VAR_2->localalloc=0;
  VAR_2->localstore=((void*)0);
  if(VAR_1->analysisp){
    vorbis_block_internal *VAR_4=
      VAR_2->internal=FUNC_0(1,sizeof(vorbis_block_internal));
    VAR_4->ampmax=-9999;

    for(VAR_3=0;VAR_3<VAR_0;VAR_3++){
      if(VAR_3==VAR_0/2){
        VAR_4->packetblob[VAR_3]=&VAR_2->opb;
      }else{
        VAR_4->packetblob[VAR_3]=
          FUNC_0(1,sizeof(oggpack_buffer));
      }
      FUNC_2(VAR_4->packetblob[VAR_3]);
    }
  }

  return(0);
}
