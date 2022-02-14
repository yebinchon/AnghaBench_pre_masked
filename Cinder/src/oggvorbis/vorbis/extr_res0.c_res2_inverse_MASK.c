
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {long stages; int** decodemap; int *** partbooks; TYPE_4__* phrasebook; TYPE_2__* info; } ;
typedef TYPE_1__ vorbis_look_residue0 ;
typedef int vorbis_look_residue ;
struct TYPE_8__ {int grouping; int end; int begin; int partvals; int* secondstages; } ;
typedef TYPE_2__ vorbis_info_residue0 ;
struct TYPE_9__ {int pcmend; int opb; } ;
typedef TYPE_3__ vorbis_block ;
typedef int codebook ;
struct TYPE_10__ {int dim; } ;


 int** FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (int *,float**,int,int,int *,int) ;

int FUNC_3(vorbis_block *VAR_0,vorbis_look_residue *VAR_1,
                 float **VAR_2,int *VAR_3,int VAR_4){
  long VAR_5,VAR_6,VAR_7,VAR_8;
  vorbis_look_residue0 *VAR_9=(vorbis_look_residue0 *)VAR_1;
  vorbis_info_residue0 *VAR_10=VAR_9->info;


  int VAR_11=VAR_10->grouping;
  int VAR_12=VAR_9->phrasebook->dim;
  int VAR_13=(VAR_0->pcmend*VAR_4)>>1;
  int VAR_14=(VAR_10->end<VAR_13?VAR_10->end:VAR_13);
  int VAR_15=VAR_14-VAR_10->begin;

  if(VAR_15>0){
    int VAR_16=VAR_15/VAR_11;
    int VAR_17=(VAR_16+VAR_12-1)/VAR_12;
    int **VAR_18=FUNC_0(VAR_0,VAR_17*sizeof(*VAR_18));

    for(VAR_5=0;VAR_5<VAR_4;VAR_5++)if(VAR_3[VAR_5])break;
    if(VAR_5==VAR_4)return(0);

    for(VAR_8=0;VAR_8<VAR_9->stages;VAR_8++){
      for(VAR_5=0,VAR_7=0;VAR_5<VAR_16;VAR_7++){

        if(VAR_8==0){

          int VAR_19=FUNC_1(VAR_9->phrasebook,&VAR_0->opb);
          if(VAR_19==-1 || VAR_19>=VAR_10->partvals)goto eopbreak;
          VAR_18[VAR_7]=VAR_9->decodemap[VAR_19];
          if(VAR_18[VAR_7]==((void*)0))goto errout;
        }


        for(VAR_6=0;VAR_6<VAR_12 && VAR_5<VAR_16;VAR_6++,VAR_5++)
          if(VAR_10->secondstages[VAR_18[VAR_7][VAR_6]]&(1<<VAR_8)){
            codebook *VAR_20=VAR_9->partbooks[VAR_18[VAR_7][VAR_6]][VAR_8];

            if(VAR_20){
              if(FUNC_2(VAR_20,VAR_2,
                                          VAR_5*VAR_11+VAR_10->begin,VAR_4,
                                          &VAR_0->opb,VAR_11)==-1)
                goto eopbreak;
            }
          }
      }
    }
  }
 errout:
 eopbreak:
  return(0);
}
