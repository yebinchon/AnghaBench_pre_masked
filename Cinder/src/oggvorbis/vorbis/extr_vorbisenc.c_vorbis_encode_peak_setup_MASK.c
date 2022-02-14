
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tone_abs_limit; } ;
typedef TYPE_1__ vorbis_info_psy ;
struct TYPE_6__ {TYPE_3__* codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
struct TYPE_7__ {TYPE_1__** psy_param; } ;
typedef TYPE_3__ codec_setup_info ;



__attribute__((used)) static void FUNC_0(vorbis_info *VAR_0,double VAR_1,int VAR_2,
                                    const int *VAR_3){
  int VAR_4=VAR_1;
  double VAR_5=VAR_1-VAR_4;
  codec_setup_info *VAR_6=VAR_0->codec_setup;
  vorbis_info_psy *VAR_7=VAR_6->psy_param[VAR_2];

  VAR_7->tone_abs_limit=VAR_3[VAR_4]*(1.-VAR_5)+VAR_3[VAR_4+1]*VAR_5;

  return;
}
