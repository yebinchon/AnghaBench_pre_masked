
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ampmax; int * gi; int channels; } ;
typedef TYPE_1__ vorbis_look_psy_global ;
typedef int vorbis_info_psy_global ;
struct TYPE_8__ {int channels; TYPE_3__* codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
struct TYPE_9__ {int psy_g_param; } ;
typedef TYPE_3__ codec_setup_info ;


 TYPE_1__* FUNC_0 (int,int) ;

vorbis_look_psy_global *FUNC_1(vorbis_info *VAR_0){
  codec_setup_info *VAR_1=VAR_0->codec_setup;
  vorbis_info_psy_global *VAR_2=&VAR_1->psy_g_param;
  vorbis_look_psy_global *VAR_3=FUNC_0(1,sizeof(*VAR_3));

  VAR_3->channels=VAR_0->channels;

  VAR_3->ampmax=-9999.;
  VAR_3->gi=VAR_2;
  return(VAR_3);
}
