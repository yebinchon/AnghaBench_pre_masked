
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int submaps; int coupling_steps; int* coupling_mag; int* coupling_ang; int* chmuxlist; int* floorsubmap; int* residuesubmap; } ;
typedef TYPE_1__ vorbis_info_mapping0 ;
typedef int vorbis_info_mapping ;
struct TYPE_5__ {int channels; } ;
typedef TYPE_2__ vorbis_info ;
typedef int oggpack_buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2(vorbis_info *VAR_0,vorbis_info_mapping *VAR_1,
                          oggpack_buffer *VAR_2){
  int VAR_3;
  vorbis_info_mapping0 *VAR_4=(vorbis_info_mapping0 *)VAR_1;
  if(VAR_4->submaps>1){
    FUNC_1(VAR_2,1,1);
    FUNC_1(VAR_2,VAR_4->submaps-1,4);
  }else
    FUNC_1(VAR_2,0,1);

  if(VAR_4->coupling_steps>0){
    FUNC_1(VAR_2,1,1);
    FUNC_1(VAR_2,VAR_4->coupling_steps-1,8);

    for(VAR_3=0;VAR_3<VAR_4->coupling_steps;VAR_3++){
      FUNC_1(VAR_2,VAR_4->coupling_mag[VAR_3],FUNC_0(VAR_0->channels));
      FUNC_1(VAR_2,VAR_4->coupling_ang[VAR_3],FUNC_0(VAR_0->channels));
    }
  }else
    FUNC_1(VAR_2,0,1);

  FUNC_1(VAR_2,0,2);


  if(VAR_4->submaps>1){
    for(VAR_3=0;VAR_3<VAR_0->channels;VAR_3++)
      FUNC_1(VAR_2,VAR_4->chmuxlist[VAR_3],4);
  }
  for(VAR_3=0;VAR_3<VAR_4->submaps;VAR_3++){
    FUNC_1(VAR_2,0,8);
    FUNC_1(VAR_2,VAR_4->floorsubmap[VAR_3],8);
    FUNC_1(VAR_2,VAR_4->residuesubmap[VAR_3],8);
  }
}
