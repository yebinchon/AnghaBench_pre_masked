
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vorbis_look_residue ;
struct TYPE_15__ {int ch; TYPE_5__** residue_func; int ** residue_look; TYPE_6__** floor_func; int ** floor_look; int * mode; TYPE_3__* map; } ;
typedef TYPE_1__ vorbis_look_mapping0 ;
typedef TYPE_1__ vorbis_look_mapping ;
typedef int vorbis_look_floor ;
typedef int vorbis_info_mode ;
struct TYPE_16__ {int submaps; int* floorsubmap; int* residuesubmap; } ;
typedef TYPE_3__ vorbis_info_mapping0 ;
typedef int vorbis_info_mapping ;
struct TYPE_17__ {int channels; scalar_t__ codec_setup; } ;
typedef TYPE_4__ vorbis_info ;
struct TYPE_18__ {int * (* look ) (TYPE_7__*,int *,int ) ;} ;
typedef TYPE_5__ vorbis_func_residue ;
struct TYPE_19__ {int * (* look ) (TYPE_7__*,int *,int ) ;} ;
typedef TYPE_6__ vorbis_func_floor ;
struct TYPE_20__ {TYPE_4__* vi; } ;
typedef TYPE_7__ vorbis_dsp_state ;
struct TYPE_21__ {size_t* floor_type; size_t* residue_type; int * residue_param; int * floor_param; } ;
typedef TYPE_8__ codec_setup_info ;


 TYPE_6__** VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_5__** VAR_1 ;
 int * FUNC_1 (TYPE_7__*,int *,int ) ;
 int * FUNC_2 (TYPE_7__*,int *,int ) ;

__attribute__((used)) static vorbis_look_mapping *FUNC_3(vorbis_dsp_state *VAR_2,vorbis_info_mode *VAR_3,
     vorbis_info_mapping *VAR_4){
  int VAR_5;
  vorbis_info *VAR_6=VAR_2->vi;
  codec_setup_info *VAR_7=(codec_setup_info *)VAR_6->codec_setup;
  vorbis_look_mapping0 *VAR_8=(vorbis_look_mapping0 *)FUNC_0(1,sizeof(*VAR_8));
  vorbis_info_mapping0 *VAR_9=VAR_8->map=(vorbis_info_mapping0 *)VAR_4;
  VAR_8->mode=VAR_3;

  VAR_8->floor_look=(vorbis_look_floor **)FUNC_0(VAR_9->submaps,sizeof(*VAR_8->floor_look));

  VAR_8->residue_look=(vorbis_look_residue **)FUNC_0(VAR_9->submaps,sizeof(*VAR_8->residue_look));

  VAR_8->floor_func=(vorbis_func_floor **)FUNC_0(VAR_9->submaps,sizeof(*VAR_8->floor_func));
  VAR_8->residue_func=(vorbis_func_residue **)FUNC_0(VAR_9->submaps,sizeof(*VAR_8->residue_func));

  for(VAR_5=0;VAR_5<VAR_9->submaps;VAR_5++){
    int VAR_10=VAR_9->floorsubmap[VAR_5];
    int VAR_11=VAR_9->residuesubmap[VAR_5];

    VAR_8->floor_func[VAR_5]=VAR_0[VAR_7->floor_type[VAR_10]];
    VAR_8->floor_look[VAR_5]=VAR_8->floor_func[VAR_5]->
      look(VAR_2,VAR_3,VAR_7->floor_param[VAR_10]);
    VAR_8->residue_func[VAR_5]=VAR_1[VAR_7->residue_type[VAR_11]];
    VAR_8->residue_look[VAR_5]=VAR_8->residue_func[VAR_5]->
      look(VAR_2,VAR_3,VAR_7->residue_param[VAR_11]);

  }

  VAR_8->ch=VAR_6->channels;

  return(VAR_8);
}
