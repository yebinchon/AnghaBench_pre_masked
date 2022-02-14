
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int n; int total_octave_lines; float* ath; scalar_t__ tonecurves; TYPE_1__* vi; } ;
typedef TYPE_2__ vorbis_look_psy ;
struct TYPE_6__ {float ath_adjatt; float ath_maxatt; } ;


 float VAR_0 ;
 float* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,float*,float*) ;
 int FUNC_2 (TYPE_2__*,float const***,float*,float*,float*,float) ;

void FUNC_3(vorbis_look_psy *VAR_1,
                  float *VAR_2,
                  float *VAR_3,
                  float VAR_4,
                  float VAR_5){

  int VAR_6,VAR_7=VAR_1->n;

  float *VAR_8=FUNC_0(sizeof(*VAR_8)*VAR_1->total_octave_lines);
  float VAR_9=VAR_5+VAR_1->vi->ath_adjatt;
  for(VAR_6=0;VAR_6<VAR_1->total_octave_lines;VAR_6++)VAR_8[VAR_6]=VAR_0;



  if(VAR_9<VAR_1->vi->ath_maxatt)VAR_9=VAR_1->vi->ath_maxatt;

  for(VAR_6=0;VAR_6<VAR_7;VAR_6++)
    VAR_3[VAR_6]=VAR_1->ath[VAR_6]+VAR_9;


  FUNC_2(VAR_1,(const float ***)VAR_1->tonecurves,VAR_2,VAR_3,VAR_8,VAR_4);
  FUNC_1(VAR_1,VAR_8,VAR_3);

}
