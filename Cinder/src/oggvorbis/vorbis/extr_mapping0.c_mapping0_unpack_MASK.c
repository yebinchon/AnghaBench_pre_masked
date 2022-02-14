
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int submaps; int coupling_steps; int* coupling_mag; int* coupling_ang; int* chmuxlist; int* floorsubmap; int* residuesubmap; } ;
typedef TYPE_1__ vorbis_info_mapping0 ;
typedef TYPE_1__ vorbis_info_mapping ;
struct TYPE_11__ {int channels; TYPE_4__* codec_setup; } ;
typedef TYPE_3__ vorbis_info ;
typedef int oggpack_buffer ;
struct TYPE_12__ {int floors; int residues; } ;
typedef TYPE_4__ codec_setup_info ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static vorbis_info_mapping *FUNC_5(vorbis_info *VAR_0,oggpack_buffer *VAR_1){
  int VAR_2,VAR_3;
  vorbis_info_mapping0 *VAR_4=FUNC_0(1,sizeof(*VAR_4));
  codec_setup_info *VAR_5=VAR_0->codec_setup;
  FUNC_3(VAR_4,0,sizeof(*VAR_4));

  VAR_3=FUNC_4(VAR_1,1);
  if(VAR_3<0)goto err_out;
  if(VAR_3){
    VAR_4->submaps=FUNC_4(VAR_1,4)+1;
    if(VAR_4->submaps<=0)goto err_out;
  }else
    VAR_4->submaps=1;

  VAR_3=FUNC_4(VAR_1,1);
  if(VAR_3<0)goto err_out;
  if(VAR_3){
    VAR_4->coupling_steps=FUNC_4(VAR_1,8)+1;
    if(VAR_4->coupling_steps<=0)goto err_out;
    for(VAR_2=0;VAR_2<VAR_4->coupling_steps;VAR_2++){
      int VAR_6=VAR_4->coupling_mag[VAR_2]=FUNC_4(VAR_1,FUNC_1(VAR_0->channels));
      int VAR_7=VAR_4->coupling_ang[VAR_2]=FUNC_4(VAR_1,FUNC_1(VAR_0->channels));

      if(VAR_6<0 ||
         VAR_7<0 ||
         VAR_6==VAR_7 ||
         VAR_6>=VAR_0->channels ||
         VAR_7>=VAR_0->channels) goto err_out;
    }

  }

  if(FUNC_4(VAR_1,2)!=0)goto err_out;

  if(VAR_4->submaps>1){
    for(VAR_2=0;VAR_2<VAR_0->channels;VAR_2++){
      VAR_4->chmuxlist[VAR_2]=FUNC_4(VAR_1,4);
      if(VAR_4->chmuxlist[VAR_2]>=VAR_4->submaps || VAR_4->chmuxlist[VAR_2]<0)goto err_out;
    }
  }
  for(VAR_2=0;VAR_2<VAR_4->submaps;VAR_2++){
    FUNC_4(VAR_1,8);
    VAR_4->floorsubmap[VAR_2]=FUNC_4(VAR_1,8);
    if(VAR_4->floorsubmap[VAR_2]>=VAR_5->floors || VAR_4->floorsubmap[VAR_2]<0)goto err_out;
    VAR_4->residuesubmap[VAR_2]=FUNC_4(VAR_1,8);
    if(VAR_4->residuesubmap[VAR_2]>=VAR_5->residues || VAR_4->residuesubmap[VAR_2]<0)goto err_out;
  }

  return VAR_4;

 err_out:
  FUNC_2(VAR_4);
  return(((void*)0));
}
