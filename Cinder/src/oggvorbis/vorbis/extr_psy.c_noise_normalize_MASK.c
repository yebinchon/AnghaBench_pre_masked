
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* vi; } ;
typedef TYPE_1__ vorbis_look_psy ;
struct TYPE_5__ {int normal_start; float normal_thresh; scalar_t__ normal_p; } ;
typedef TYPE_2__ vorbis_info_psy ;


 float** FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (float**,int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (float) ;
 int FUNC_4 (float) ;

__attribute__((used)) static float FUNC_5(vorbis_look_psy *VAR_1, int VAR_2, float *VAR_3, float *VAR_4, float *VAR_5, int *VAR_6, float VAR_7, int VAR_8, int VAR_9, int *VAR_10){

  vorbis_info_psy *VAR_11=VAR_1->vi;
  float **VAR_12 = FUNC_0(VAR_9*sizeof(*VAR_12));
  int VAR_13,VAR_14=0;
  int VAR_15 = (VAR_11->normal_p ? VAR_11->normal_start-VAR_8 : VAR_9);
  if(VAR_15>VAR_9)VAR_15=VAR_9;


  VAR_7=0.f;



  for(VAR_13=0;VAR_13<VAR_15;VAR_13++){
    if(!VAR_6 || !VAR_6[VAR_13]){


      float VAR_16 = VAR_4[VAR_13]/VAR_5[VAR_13];
      if(VAR_3[VAR_13]<0)
        VAR_10[VAR_13] = -FUNC_2(FUNC_3(VAR_16));
      else
        VAR_10[VAR_13] = FUNC_2(FUNC_3(VAR_16));
    }
  }


  for(;VAR_13<VAR_9;VAR_13++){
    if(!VAR_6 || !VAR_6[VAR_13]){


      float VAR_17 = VAR_4[VAR_13]/VAR_5[VAR_13];





      if(VAR_17<.25f && (!VAR_6 || VAR_13>=VAR_2-VAR_8)){
        VAR_7 += VAR_17;
        VAR_12[VAR_14++]=VAR_4+VAR_13;
      }else{

        if(VAR_3[VAR_13]<0)
          VAR_10[VAR_13] = -FUNC_2(FUNC_3(VAR_17));
        else
          VAR_10[VAR_13] = FUNC_2(FUNC_3(VAR_17));
        VAR_4[VAR_13] = VAR_10[VAR_13]*VAR_10[VAR_13]*VAR_5[VAR_13];
      }
    }


  }

  if(VAR_14){

    FUNC_1(VAR_12,VAR_14,sizeof(*VAR_12),VAR_0);
    for(VAR_13=0;VAR_13<VAR_14;VAR_13++){
      int VAR_18=VAR_12[VAR_13]-VAR_4;
      if(VAR_7>=VAR_11->normal_thresh){
        VAR_10[VAR_18]=FUNC_4(VAR_3[VAR_18]);
        VAR_7-=1.f;
        VAR_4[VAR_18]=VAR_5[VAR_18];
      }else{
        VAR_10[VAR_18]=0;
        VAR_4[VAR_18]=0.f;
      }
    }
  }

  return VAR_7;
}
