
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vorbis_residue_template ;
struct TYPE_11__ {int * res; TYPE_2__* map; } ;
typedef TYPE_1__ vorbis_mapping_template ;
struct TYPE_12__ {int submaps; int* residuesubmap; } ;
typedef TYPE_2__ vorbis_info_mode ;
typedef TYPE_2__ vorbis_info_mapping0 ;
struct TYPE_13__ {TYPE_5__* codec_setup; } ;
typedef TYPE_4__ vorbis_info ;
struct TYPE_14__ {scalar_t__* blocksizes; int modes; int maps; void** map_param; scalar_t__* map_type; void** mode_param; } ;
typedef TYPE_5__ codec_setup_info ;


 TYPE_2__* VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (void*,TYPE_2__ const*,int) ;
 int FUNC_2 (TYPE_4__*,int,int,int const*) ;

__attribute__((used)) static void FUNC_3(vorbis_info *VAR_1,double VAR_2,
                                          const vorbis_mapping_template *VAR_3){

  codec_setup_info *VAR_4=VAR_1->codec_setup;
  int VAR_5,VAR_6,VAR_7=VAR_2,VAR_8=2;
  const vorbis_info_mapping0 *VAR_9=VAR_3[VAR_7].map;
  const vorbis_info_mode *VAR_10=VAR_0;
  const vorbis_residue_template *VAR_11=VAR_3[VAR_7].res;

  if(VAR_4->blocksizes[0]==VAR_4->blocksizes[1])VAR_8=1;

  for(VAR_5=0;VAR_5<VAR_8;VAR_5++){

    VAR_4->map_param[VAR_5]=FUNC_0(1,sizeof(*VAR_9));
    VAR_4->mode_param[VAR_5]=FUNC_0(1,sizeof(*VAR_10));

    FUNC_1(VAR_4->mode_param[VAR_5],VAR_10+VAR_5,sizeof(*VAR_0));
    if(VAR_5>=VAR_4->modes)VAR_4->modes=VAR_5+1;

    VAR_4->map_type[VAR_5]=0;
    FUNC_1(VAR_4->map_param[VAR_5],VAR_9+VAR_5,sizeof(*VAR_9));
    if(VAR_5>=VAR_4->maps)VAR_4->maps=VAR_5+1;

    for(VAR_6=0;VAR_6<VAR_9[VAR_5].submaps;VAR_6++)
      FUNC_2(VAR_1,VAR_9[VAR_5].residuesubmap[VAR_6],VAR_5
                                  ,VAR_11+VAR_9[VAR_5].residuesubmap[VAR_6]);
  }
}
