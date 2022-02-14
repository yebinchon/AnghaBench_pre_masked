
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_21__ {double grouping; int res_type; int limit_type; TYPE_4__* books_base; scalar_t__ book_aux; TYPE_3__* books_base_managed; scalar_t__ book_aux_managed; int res; } ;
typedef TYPE_5__ vorbis_residue_template ;
struct TYPE_22__ {double grouping; int partitions; int* secondstages; size_t groupbook; int* booklist; int end; } ;
typedef TYPE_6__ vorbis_info_residue0 ;
struct TYPE_23__ {int submaps; int* residuesubmap; int* chmuxlist; } ;
typedef TYPE_7__ vorbis_info_mapping0 ;
struct TYPE_24__ {double n; } ;
typedef TYPE_8__ vorbis_info_floor1 ;
struct TYPE_25__ {int rate; int channels; TYPE_10__* codec_setup; } ;
typedef TYPE_9__ vorbis_info ;
typedef int static_codebook ;
struct TYPE_17__ {int* coupling_pkHz; } ;
struct TYPE_18__ {int lowpass_kHz; scalar_t__ managed; } ;
struct TYPE_16__ {int residues; int* residue_type; int* blocksizes; int maps; scalar_t__* map_param; TYPE_1__ psy_g_param; TYPE_2__ hi; TYPE_8__** floor_param; int ** book_param; TYPE_6__** residue_param; } ;
typedef TYPE_10__ codec_setup_info ;
struct TYPE_20__ {scalar_t__** books; } ;
struct TYPE_19__ {scalar_t__** books; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (int) ;
 void* FUNC_1 (TYPE_10__*,scalar_t__) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;

__attribute__((used)) static void FUNC_3(vorbis_info *VAR_1,
                                        int VAR_2, int VAR_3,
                                        const vorbis_residue_template *VAR_4){

  codec_setup_info *VAR_5=VAR_1->codec_setup;
  int VAR_6;

  vorbis_info_residue0 *VAR_7=VAR_5->residue_param[VAR_2]=
    FUNC_0(sizeof(*VAR_7));

  FUNC_2(VAR_7,VAR_4->res,sizeof(*VAR_7));
  if(VAR_5->residues<=VAR_2)VAR_5->residues=VAR_2+1;

  VAR_7->grouping=VAR_4->grouping;
  VAR_5->residue_type[VAR_2]=VAR_4->res_type;


  {
    int VAR_8=0,VAR_9;

    if(VAR_5->hi.managed){
      for(VAR_6=0;VAR_6<VAR_7->partitions;VAR_6++)
        for(VAR_9=0;VAR_9<4;VAR_9++)
          if(VAR_4->books_base_managed->books[VAR_6][VAR_9])
            VAR_7->secondstages[VAR_6]|=(1<<VAR_9);

      VAR_7->groupbook=FUNC_1(VAR_5,VAR_4->book_aux_managed);
      VAR_5->book_param[VAR_7->groupbook]=(static_codebook *)VAR_4->book_aux_managed;

      for(VAR_6=0;VAR_6<VAR_7->partitions;VAR_6++){
        for(VAR_9=0;VAR_9<4;VAR_9++){
          if(VAR_4->books_base_managed->books[VAR_6][VAR_9]){
            int VAR_10=FUNC_1(VAR_5,VAR_4->books_base_managed->books[VAR_6][VAR_9]);
            VAR_7->booklist[VAR_8++]=VAR_10;
            VAR_5->book_param[VAR_10]=(static_codebook *)VAR_4->books_base_managed->books[VAR_6][VAR_9];
          }
        }
      }

    }else{

      for(VAR_6=0;VAR_6<VAR_7->partitions;VAR_6++)
        for(VAR_9=0;VAR_9<4;VAR_9++)
          if(VAR_4->books_base->books[VAR_6][VAR_9])
            VAR_7->secondstages[VAR_6]|=(1<<VAR_9);

      VAR_7->groupbook=FUNC_1(VAR_5,VAR_4->book_aux);
      VAR_5->book_param[VAR_7->groupbook]=(static_codebook *)VAR_4->book_aux;

      for(VAR_6=0;VAR_6<VAR_7->partitions;VAR_6++){
        for(VAR_9=0;VAR_9<4;VAR_9++){
          if(VAR_4->books_base->books[VAR_6][VAR_9]){
            int VAR_11=FUNC_1(VAR_5,VAR_4->books_base->books[VAR_6][VAR_9]);
            VAR_7->booklist[VAR_8++]=VAR_11;
            VAR_5->book_param[VAR_11]=(static_codebook *)VAR_4->books_base->books[VAR_6][VAR_9];
          }
        }
      }
    }
  }


  {
    double VAR_12=VAR_5->hi.lowpass_kHz*1000.;
    vorbis_info_floor1 *VAR_13=VAR_5->floor_param[VAR_3];
    double VAR_14=VAR_1->rate/2.;
    long VAR_15=VAR_5->blocksizes[VAR_3]>>1;


    if(VAR_12>VAR_14)VAR_12=VAR_14;



    VAR_13->n=VAR_12/VAR_14*VAR_15;



    switch(VAR_4->limit_type){
    case 1:
      if(VAR_5->hi.managed)
        VAR_12=VAR_5->psy_g_param.coupling_pkHz[VAR_0-1]*1000.;
      else
        VAR_12=VAR_5->psy_g_param.coupling_pkHz[VAR_0/2]*1000.;
      if(VAR_12>VAR_14)VAR_12=VAR_14;
      break;
    case 2:
      VAR_12=250;
      break;
    default:

      break;
    }





    if(VAR_5->residue_type[VAR_2]==2){





      int VAR_16,VAR_17,VAR_18=0;
      for(VAR_6=0;VAR_6<VAR_5->maps&&VAR_18==0;VAR_6++){
        vorbis_info_mapping0 *VAR_19=(vorbis_info_mapping0 *)VAR_5->map_param[VAR_6];
        for(VAR_16=0;VAR_16<VAR_19->submaps && VAR_18==0;VAR_16++)
          if(VAR_19->residuesubmap[VAR_16]==VAR_2)
            for(VAR_17=0;VAR_17<VAR_1->channels;VAR_17++)
              if(VAR_19->chmuxlist[VAR_17]==VAR_16)
                VAR_18++;
      }

      VAR_7->end=(int)((VAR_12/VAR_14*VAR_15*VAR_18)/VAR_7->grouping+.9)*
        VAR_7->grouping;

      if(VAR_7->end>VAR_15*VAR_18)VAR_7->end=VAR_15*VAR_18/VAR_7->grouping*VAR_7->grouping;

    }else{

      VAR_7->end=(int)((VAR_12/VAR_14*VAR_15)/VAR_7->grouping+.9)*
        VAR_7->grouping;

      if(VAR_7->end>VAR_15)VAR_7->end=VAR_15/VAR_7->grouping*VAR_7->grouping;

    }

    if(VAR_7->end==0)VAR_7->end=VAR_7->grouping;

  }
}
