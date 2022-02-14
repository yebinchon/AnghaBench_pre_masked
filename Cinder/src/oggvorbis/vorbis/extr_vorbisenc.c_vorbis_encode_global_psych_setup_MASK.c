
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int* preecho_thresh; int* postecho_thresh; int ampmax_att_per_sec; } ;
typedef TYPE_2__ vorbis_info_psy_global ;
struct TYPE_11__ {TYPE_4__* codec_setup; } ;
typedef TYPE_3__ vorbis_info ;
struct TYPE_9__ {int amplitude_track_dBpersec; } ;
struct TYPE_12__ {TYPE_1__ hi; TYPE_2__ psy_g_param; } ;
typedef TYPE_4__ codec_setup_info ;


 int FUNC_0 (TYPE_2__*,TYPE_2__ const*,int) ;

__attribute__((used)) static void FUNC_1(vorbis_info *VAR_0,double VAR_1,
                                            const vorbis_info_psy_global *VAR_2,
                                            const double *VAR_3){
  int VAR_4,VAR_5=VAR_1;
  double VAR_6=VAR_1-VAR_5;
  codec_setup_info *VAR_7=VAR_0->codec_setup;
  vorbis_info_psy_global *VAR_8=&VAR_7->psy_g_param;

  FUNC_0(VAR_8,VAR_2+(int)VAR_3[VAR_5],sizeof(*VAR_8));

  VAR_6=VAR_3[VAR_5]*(1.-VAR_6)+VAR_3[VAR_5+1]*VAR_6;
  VAR_5=(int)VAR_6;
  VAR_6-=VAR_5;
  if(VAR_6==0 && VAR_5>0){
    VAR_5--;
    VAR_6=1.;
  }


  for(VAR_4=0;VAR_4<4;VAR_4++){
    VAR_8->preecho_thresh[VAR_4]=VAR_2[VAR_5].preecho_thresh[VAR_4]*(1.-VAR_6)+VAR_2[VAR_5+1].preecho_thresh[VAR_4]*VAR_6;
    VAR_8->postecho_thresh[VAR_4]=VAR_2[VAR_5].postecho_thresh[VAR_4]*(1.-VAR_6)+VAR_2[VAR_5+1].postecho_thresh[VAR_4]*VAR_6;
  }
  VAR_8->ampmax_att_per_sec=VAR_7->hi.amplitude_track_dBpersec;
  return;
}
