
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int train_seq; int frames; TYPE_2__* info; } ;
typedef TYPE_1__ vorbis_look_residue0 ;
typedef int vorbis_look_residue ;
struct TYPE_4__ {int grouping; int partitions; int end; long begin; int* classmetric1; int* classmetric2; } ;
typedef TYPE_2__ vorbis_info_residue0 ;
typedef int vorbis_block ;
typedef int FILE ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (long*,int ,int) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static long **FUNC_7(vorbis_block *VAR_0,vorbis_look_residue *VAR_1,
                       int **VAR_2,int VAR_3){
  long VAR_4,VAR_5,VAR_6;
  vorbis_look_residue0 *VAR_7=(vorbis_look_residue0 *)VAR_1;
  vorbis_info_residue0 *VAR_8=VAR_7->info;


  int VAR_9=VAR_8->grouping;
  int VAR_10=VAR_8->partitions;
  int VAR_11=VAR_8->end-VAR_8->begin;

  int VAR_12=VAR_11/VAR_9;
  long **VAR_13=FUNC_0(VAR_0,VAR_3*sizeof(*VAR_13));
  float VAR_14=100./VAR_9;





  for(VAR_4=0;VAR_4<VAR_3;VAR_4++){
    VAR_13[VAR_4]=FUNC_0(VAR_0,VAR_11/VAR_9*sizeof(*VAR_13[VAR_4]));
    FUNC_5(VAR_13[VAR_4],0,VAR_11/VAR_9*sizeof(*VAR_13[VAR_4]));
  }

  for(VAR_4=0;VAR_4<VAR_12;VAR_4++){
    int VAR_15=VAR_4*VAR_9+VAR_8->begin;
    for(VAR_5=0;VAR_5<VAR_3;VAR_5++){
      int VAR_16=0;
      int VAR_17=0;
      for(VAR_6=0;VAR_6<VAR_9;VAR_6++){
        if(FUNC_1(VAR_2[VAR_5][VAR_15+VAR_6])>VAR_16)VAR_16=FUNC_1(VAR_2[VAR_5][VAR_15+VAR_6]);
        VAR_17+=FUNC_1(VAR_2[VAR_5][VAR_15+VAR_6]);
      }
      VAR_17*=VAR_14;

      for(VAR_6=0;VAR_6<VAR_10-1;VAR_6++)
        if(VAR_16<=VAR_8->classmetric1[VAR_6] &&
           (VAR_8->classmetric2[VAR_6]<0 || VAR_17<VAR_8->classmetric2[VAR_6]))
          break;

      VAR_13[VAR_5][VAR_4]=VAR_6;
    }
  }
  VAR_7->frames++;

  return(VAR_13);
}
