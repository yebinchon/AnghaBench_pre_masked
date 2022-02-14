
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int blockflag; int normal_p; int normal_start; int normal_partition; double normal_thresh; } ;
typedef TYPE_1__ vorbis_info_psy ;
struct TYPE_9__ {TYPE_4__* codec_setup; } ;
typedef TYPE_2__ vorbis_info ;
struct TYPE_10__ {scalar_t__ noise_normalize_p; } ;
typedef TYPE_3__ highlevel_encode_setup ;
struct TYPE_11__ {int psys; TYPE_1__** psy_param; TYPE_3__ hi; } ;
typedef TYPE_4__ codec_setup_info ;


 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

__attribute__((used)) static void FUNC_2(vorbis_info *VAR_1,double VAR_2,
                                       const int *VAR_3,
                                       const int *VAR_4,
                                       const double *VAR_5,
                                       int VAR_6){
  codec_setup_info *VAR_7=VAR_1->codec_setup;
  vorbis_info_psy *VAR_8=VAR_7->psy_param[VAR_6];
  highlevel_encode_setup *VAR_9=&VAR_7->hi;
  int VAR_10=VAR_2;

  if(VAR_6>=VAR_7->psys)
    VAR_7->psys=VAR_6+1;
  if(!VAR_8){
    VAR_8=FUNC_0(1,sizeof(*VAR_8));
    VAR_7->psy_param[VAR_6]=VAR_8;
  }

  FUNC_1(VAR_8,&VAR_0,sizeof(*VAR_8));
  VAR_8->blockflag=VAR_6>>1;

  if(VAR_9->noise_normalize_p){
    VAR_8->normal_p=1;
    VAR_8->normal_start=VAR_3[VAR_10];
    VAR_8->normal_partition=VAR_4[VAR_10];
    VAR_8->normal_thresh=VAR_5[VAR_10];
  }

  return;
}
