
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__** packetblob; } ;
typedef TYPE_1__ vorbis_block_internal ;
struct TYPE_9__ {TYPE_1__* localstore; TYPE_1__* internal; } ;
typedef TYPE_2__ vorbis_block ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(vorbis_block *VAR_1){
  int VAR_2;
  vorbis_block_internal *VAR_3=VAR_1->internal;

  FUNC_1(VAR_1);
  if(VAR_1->localstore)FUNC_0(VAR_1->localstore);

  if(VAR_3){
    for(VAR_2=0;VAR_2<VAR_0;VAR_2++){
      FUNC_3(VAR_3->packetblob[VAR_2]);
      if(VAR_2!=VAR_0/2)FUNC_0(VAR_3->packetblob[VAR_2]);
    }
    FUNC_0(VAR_3);
  }
  FUNC_2(VAR_1,0,sizeof(*VAR_1));
  return(0);
}
