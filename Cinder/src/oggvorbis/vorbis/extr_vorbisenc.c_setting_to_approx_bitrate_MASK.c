
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int channels; TYPE_4__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_7__ {double* rate_mapping; } ;
typedef TYPE_2__ ve_setup_data_template ;
struct TYPE_8__ {int base_setting; scalar_t__ setup; } ;
typedef TYPE_3__ highlevel_encode_setup ;
struct TYPE_9__ {TYPE_3__ hi; } ;
typedef TYPE_4__ codec_setup_info ;



__attribute__((used)) static double FUNC_0(vorbis_info *VAR_0){
  codec_setup_info *VAR_1=VAR_0->codec_setup;
  highlevel_encode_setup *VAR_2=&VAR_1->hi;
  ve_setup_data_template *VAR_3=(ve_setup_data_template *)VAR_2->setup;
  int VAR_4=VAR_2->base_setting;
  double VAR_5=VAR_2->base_setting-VAR_4;
  int VAR_6=VAR_0->channels;
  const double *VAR_7=VAR_3->rate_mapping;

  if(VAR_7==((void*)0))
    return(-1);

  return((VAR_7[VAR_4]*(1.-VAR_5)+VAR_7[VAR_4+1]*VAR_5)*VAR_6);
}
