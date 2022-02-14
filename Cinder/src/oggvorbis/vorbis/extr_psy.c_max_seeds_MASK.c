
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {long total_octave_lines; int eighth_octave_lines; int* octave; int firstoc; long n; TYPE_1__* vi; } ;
typedef TYPE_2__ vorbis_look_psy ;
struct TYPE_4__ {float tone_abs_limit; } ;


 float VAR_0 ;
 int FUNC_0 (float*,int,long) ;

__attribute__((used)) static void FUNC_1(vorbis_look_psy *VAR_1,
                      float *VAR_2,
                      float *VAR_3){
  long VAR_4=VAR_1->total_octave_lines;
  int VAR_5=VAR_1->eighth_octave_lines;
  long VAR_6=0;
  long VAR_7;

  FUNC_0(VAR_2,VAR_5,VAR_4);

  VAR_7=VAR_1->octave[0]-VAR_1->firstoc-(VAR_5>>1);

  while(VAR_6+1<VAR_1->n){
    float VAR_8=VAR_2[VAR_7];
    long VAR_9=((VAR_1->octave[VAR_6]+VAR_1->octave[VAR_6+1])>>1)-VAR_1->firstoc;
    if(VAR_8>VAR_1->vi->tone_abs_limit)VAR_8=VAR_1->vi->tone_abs_limit;
    while(VAR_7+1<=VAR_9){
      VAR_7++;
      if((VAR_2[VAR_7]>VAR_0 && VAR_2[VAR_7]<VAR_8) || VAR_8==VAR_0)
        VAR_8=VAR_2[VAR_7];
    }

    VAR_9=VAR_7+VAR_1->firstoc;
    for(;VAR_6<VAR_1->n && VAR_1->octave[VAR_6]<=VAR_9;VAR_6++)
      if(VAR_3[VAR_6]<VAR_8)VAR_3[VAR_6]=VAR_8;
  }

  {
    float VAR_10=VAR_2[VAR_1->total_octave_lines-1];
    for(;VAR_6<VAR_1->n;VAR_6++)
      if(VAR_3[VAR_6]<VAR_10)VAR_3[VAR_6]=VAR_10;
  }

}
