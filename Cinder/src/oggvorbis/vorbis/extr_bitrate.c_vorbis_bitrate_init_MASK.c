
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {long rate; TYPE_2__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_11__ {long reservoir_bits; int avg_rate; int min_rate; int max_rate; long reservoir_bias; } ;
struct TYPE_9__ {int* blocksizes; TYPE_4__ bi; } ;
typedef TYPE_2__ codec_setup_info ;
struct TYPE_10__ {int short_per_long; int managed; int avgfloat; long minmax_reservoir; long avg_reservoir; void* max_bitsper; void* min_bitsper; void* avg_bitsper; } ;
typedef TYPE_3__ bitrate_manager_state ;
typedef TYPE_4__ bitrate_manager_info ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 void* FUNC_1 (int) ;

void FUNC_2(vorbis_info *VAR_1,bitrate_manager_state *VAR_2){
  codec_setup_info *VAR_3=VAR_1->codec_setup;
  bitrate_manager_info *VAR_4=&VAR_3->bi;

  FUNC_0(VAR_2,0,sizeof(*VAR_2));

  if(VAR_4 && (VAR_4->reservoir_bits>0)){
    long VAR_5=VAR_1->rate;
    int VAR_6=VAR_3->blocksizes[0]>>1;

    VAR_2->short_per_long=VAR_3->blocksizes[1]/VAR_3->blocksizes[0];
    VAR_2->managed=1;

    VAR_2->avg_bitsper= FUNC_1(1.*VAR_4->avg_rate*VAR_6/VAR_5);
    VAR_2->min_bitsper= FUNC_1(1.*VAR_4->min_rate*VAR_6/VAR_5);
    VAR_2->max_bitsper= FUNC_1(1.*VAR_4->max_rate*VAR_6/VAR_5);

    VAR_2->avgfloat=VAR_0/2;



    {
      long VAR_7=VAR_4->reservoir_bits*VAR_4->reservoir_bias;
      VAR_2->minmax_reservoir=VAR_7;
      VAR_2->avg_reservoir=VAR_7;
    }

  }
}
