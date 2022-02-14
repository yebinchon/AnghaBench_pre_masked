
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long n; long* octave; long shiftoc; int eighth_octave_lines; int total_octave_lines; scalar_t__ firstoc; TYPE_2__* vi; } ;
typedef TYPE_1__ vorbis_look_psy ;
struct TYPE_5__ {float max_curve_dB; } ;
typedef TYPE_2__ vorbis_info_psy ;


 long VAR_0 ;
 int FUNC_0 (float*,float const**,float,scalar_t__,int ,int ,float) ;

__attribute__((used)) static void FUNC_1(vorbis_look_psy *VAR_1,
                      const float ***VAR_2,
                      const float *VAR_3,
                      const float *VAR_4,
                      float *VAR_5,
                      float VAR_6){
  vorbis_info_psy *VAR_7=VAR_1->vi;
  long VAR_8=VAR_1->n,VAR_9;
  float VAR_10=VAR_7->max_curve_dB-VAR_6;



  for(VAR_9=0;VAR_9<VAR_8;VAR_9++){
    float VAR_11=VAR_3[VAR_9];
    long VAR_12=VAR_1->octave[VAR_9];
    while(VAR_9+1<VAR_8 && VAR_1->octave[VAR_9+1]==VAR_12){
      VAR_9++;
      if(VAR_3[VAR_9]>VAR_11)VAR_11=VAR_3[VAR_9];
    }

    if(VAR_11+6.f>VAR_4[VAR_9]){
      VAR_12=VAR_12>>VAR_1->shiftoc;

      if(VAR_12>=VAR_0)VAR_12=VAR_0-1;
      if(VAR_12<0)VAR_12=0;

      FUNC_0(VAR_5,
                 VAR_2[VAR_12],
                 VAR_11,
                 VAR_1->octave[VAR_9]-VAR_1->firstoc,
                 VAR_1->total_octave_lines,
                 VAR_1->eighth_octave_lines,
                 VAR_10);
    }
  }
}
