
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int n; float m_val; float** noiseoffset; TYPE_1__* vi; } ;
typedef TYPE_2__ vorbis_look_psy ;
struct TYPE_4__ {float* tone_masteratt; float noisemaxsupp; } ;


 float FUNC_0 (float,float) ;

void FUNC_1(vorbis_look_psy *VAR_0,
                        float *VAR_1,
                        float *VAR_2,
                        int VAR_3,
                        float *VAR_4,
                        float *VAR_5,
                        float *VAR_6){
  int VAR_7,VAR_8=VAR_0->n;
  float VAR_9, VAR_10, VAR_11;
  float VAR_12=VAR_0->vi->tone_masteratt[VAR_3];

  VAR_11 = VAR_0->m_val;

  for(VAR_7=0;VAR_7<VAR_8;VAR_7++){
    float VAR_13= VAR_1[VAR_7]+VAR_0->noiseoffset[VAR_3][VAR_7];
    if(VAR_13>VAR_0->vi->noisemaxsupp)VAR_13=VAR_0->vi->noisemaxsupp;
    VAR_4[VAR_7]=FUNC_0(VAR_13,VAR_2[VAR_7]+VAR_12);
    if(VAR_3 == 1) {
      VAR_10 = -17.2;
      VAR_13 = VAR_13 - VAR_6[VAR_7];

      if(VAR_13 > VAR_10){


        VAR_9 = 1.0-((VAR_13-VAR_10)*0.005*VAR_11);






        if(VAR_9 < 0) VAR_9 = 0.0001;
      }else


        VAR_9 = 1.0-((VAR_13-VAR_10)*0.0003*VAR_11);





      VAR_5[VAR_7] *= VAR_9;

    }
  }
}
