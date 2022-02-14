
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float eighth_octave_lines; int shiftoc; int firstoc; long total_octave_lines; float* ath; int* octave; long* bark; int n; long rate; int m_val; int** noiseoffset; TYPE_3__* vi; int tonecurves; } ;
typedef TYPE_1__ vorbis_look_psy ;
struct TYPE_9__ {float eighth_octave_lines; } ;
typedef TYPE_2__ vorbis_info_psy_global ;
struct TYPE_10__ {long noisewindowlomin; float noisewindowlo; long noisewindowhimin; float noisewindowhi; int** noiseoff; int tone_decay; int tone_centerboost; int toneatt; } ;
typedef TYPE_3__ vorbis_info_psy ;


 float* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int*,int,int,int ,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (long) ;
 int FUNC_3 (float) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,long,int,int ,int ) ;
 float FUNC_7 (long) ;
 int FUNC_8 (long) ;

void FUNC_9(vorbis_look_psy *VAR_4,vorbis_info_psy *VAR_5,
                  vorbis_info_psy_global *VAR_6,int VAR_7,long VAR_8){
  long VAR_9,VAR_10,VAR_11=-99,VAR_12=1;
  long VAR_13;
  FUNC_4(VAR_4,0,sizeof(*VAR_4));

  VAR_4->eighth_octave_lines=VAR_6->eighth_octave_lines;
  VAR_4->shiftoc=FUNC_5(FUNC_3(VAR_6->eighth_octave_lines*8.f)/FUNC_3(2.f))-1;

  VAR_4->firstoc=FUNC_8(.25f*VAR_8*.5/VAR_7)*(1<<(VAR_4->shiftoc+1))-VAR_6->eighth_octave_lines;
  VAR_13=FUNC_8((VAR_7+.25f)*VAR_8*.5/VAR_7)*(1<<(VAR_4->shiftoc+1))+.5f;
  VAR_4->total_octave_lines=VAR_13-VAR_4->firstoc+1;
  VAR_4->ath=FUNC_1(VAR_7*sizeof(*VAR_4->ath));

  VAR_4->octave=FUNC_1(VAR_7*sizeof(*VAR_4->octave));
  VAR_4->bark=FUNC_1(VAR_7*sizeof(*VAR_4->bark));
  VAR_4->vi=VAR_5;
  VAR_4->n=VAR_7;
  VAR_4->rate=VAR_8;


  VAR_4->m_val = 1.;
  if(VAR_8 < 26000) VAR_4->m_val = 0;
  else if(VAR_8 < 38000) VAR_4->m_val = .94;
  else if(VAR_8 > 46000) VAR_4->m_val = 1.275;



  for(VAR_9=0,VAR_10=0;VAR_9<VAR_1-1;VAR_9++){
    int VAR_14=FUNC_5(FUNC_2((VAR_9+1)*.125-2.)*2*VAR_7/VAR_8);
    float VAR_15=VAR_0[VAR_9];
    if(VAR_10<VAR_14){
      float VAR_16=(VAR_0[VAR_9+1]-VAR_15)/(VAR_14-VAR_10);
      for(;VAR_10<VAR_14 && VAR_10<VAR_7;VAR_10++){
        VAR_4->ath[VAR_10]=VAR_15+100.;
        VAR_15+=VAR_16;
      }
    }
  }

  for(;VAR_10<VAR_7;VAR_10++){
    VAR_4->ath[VAR_10]=VAR_4->ath[VAR_10-1];
  }

  for(VAR_9=0;VAR_9<VAR_7;VAR_9++){
    float VAR_17=FUNC_7(VAR_8/(2*VAR_7)*VAR_9);

    for(;VAR_11+VAR_5->noisewindowlomin<VAR_9 &&
          FUNC_7(VAR_8/(2*VAR_7)*VAR_11)<(VAR_17-VAR_5->noisewindowlo);VAR_11++);

    for(;VAR_12<=VAR_7 && (VAR_12<VAR_9+VAR_5->noisewindowhimin ||
          FUNC_7(VAR_8/(2*VAR_7)*VAR_12)<(VAR_17+VAR_5->noisewindowhi));VAR_12++);

    VAR_4->bark[VAR_9]=((VAR_11-1)<<16)+(VAR_12-1);

  }

  for(VAR_9=0;VAR_9<VAR_7;VAR_9++)
    VAR_4->octave[VAR_9]=FUNC_8((VAR_9+.25f)*.5*VAR_8/VAR_7)*(1<<(VAR_4->shiftoc+1))+.5f;

  VAR_4->tonecurves=FUNC_6(VAR_5->toneatt,VAR_8*.5/VAR_7,VAR_7,
                                  VAR_5->tone_centerboost,VAR_5->tone_decay);


  VAR_4->noiseoffset=FUNC_1(VAR_3*sizeof(*VAR_4->noiseoffset));
  for(VAR_9=0;VAR_9<VAR_3;VAR_9++)
    VAR_4->noiseoffset[VAR_9]=FUNC_1(VAR_7*sizeof(**VAR_4->noiseoffset));

  for(VAR_9=0;VAR_9<VAR_7;VAR_9++){
    float VAR_18=FUNC_8((VAR_9+.5)*VAR_8/(2.*VAR_7))*2.;
    int VAR_19;
    float VAR_20;

    if(VAR_18<0)VAR_18=0;
    if(VAR_18>=VAR_2-1)VAR_18=VAR_2-1;
    VAR_19=(int)VAR_18;
    VAR_20=VAR_18-VAR_19;

    for(VAR_10=0;VAR_10<VAR_3;VAR_10++)
      VAR_4->noiseoffset[VAR_10][VAR_9]=
        VAR_4->vi->noiseoff[VAR_10][VAR_19]*(1.-VAR_20) +
        VAR_4->vi->noiseoff[VAR_10][VAR_19+1]*VAR_20;

  }
}
