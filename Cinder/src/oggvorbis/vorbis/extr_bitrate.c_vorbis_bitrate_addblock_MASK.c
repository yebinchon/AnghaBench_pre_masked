
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int rate; TYPE_6__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
struct TYPE_11__ {TYPE_1__* vi; TYPE_5__* backend_state; } ;
typedef TYPE_2__ vorbis_dsp_state ;
struct TYPE_12__ {int * packetblob; } ;
typedef TYPE_3__ vorbis_block_internal ;
struct TYPE_13__ {int W; TYPE_2__* vd; TYPE_3__* internal; } ;
typedef TYPE_4__ vorbis_block ;
struct TYPE_16__ {long min_bitsper; long short_per_long; long max_bitsper; long avg_bitsper; long avg_reservoir; long minmax_reservoir; int choice; scalar_t__ avgfloat; TYPE_4__* vb; int managed; } ;
struct TYPE_14__ {TYPE_7__ bms; } ;
typedef TYPE_5__ private_state ;
struct TYPE_17__ {long reservoir_bits; long reservoir_bias; int slew_damp; } ;
struct TYPE_15__ {int* blocksizes; TYPE_8__ bi; } ;
typedef TYPE_6__ codec_setup_info ;
typedef TYPE_7__ bitrate_manager_state ;
typedef TYPE_8__ bitrate_manager_info ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,long) ;
 int FUNC_3 (scalar_t__) ;

int FUNC_4(vorbis_block *VAR_1){
  vorbis_block_internal *VAR_2=VAR_1->internal;
  vorbis_dsp_state *VAR_3=VAR_1->vd;
  private_state *VAR_4=VAR_3->backend_state;
  bitrate_manager_state *VAR_5=&VAR_4->bms;
  vorbis_info *VAR_6=VAR_3->vi;
  codec_setup_info *VAR_7=VAR_6->codec_setup;
  bitrate_manager_info *VAR_8=&VAR_7->bi;

  int VAR_9=FUNC_3(VAR_5->avgfloat);
  long VAR_10=FUNC_0(VAR_2->packetblob[VAR_9])*8;
  long VAR_11=(VAR_1->W?VAR_5->min_bitsper*VAR_5->short_per_long:VAR_5->min_bitsper);
  long VAR_12=(VAR_1->W?VAR_5->max_bitsper*VAR_5->short_per_long:VAR_5->max_bitsper);
  int VAR_13=VAR_7->blocksizes[VAR_1->W]>>1;
  long VAR_14=VAR_8->reservoir_bits*VAR_8->reservoir_bias;
  if(!VAR_5->managed){



    if(VAR_5->vb)return(-1);

    VAR_5->vb=VAR_1;
    return(0);
  }

  VAR_5->vb=VAR_1;


  if(VAR_5->avg_bitsper>0){
    double VAR_15=0.;
    long VAR_16=(VAR_1->W?VAR_5->avg_bitsper*VAR_5->short_per_long:VAR_5->avg_bitsper);
    double VAR_17= 15./VAR_8->slew_damp;
    if(VAR_5->avg_reservoir+(VAR_10-VAR_16)>VAR_14){
      while(VAR_9>0 && VAR_10>VAR_16 &&
            VAR_5->avg_reservoir+(VAR_10-VAR_16)>VAR_14){
        VAR_9--;
        VAR_10=FUNC_0(VAR_2->packetblob[VAR_9])*8;
      }
    }else if(VAR_5->avg_reservoir+(VAR_10-VAR_16)<VAR_14){
      while(VAR_9+1<VAR_0 && VAR_10<VAR_16 &&
            VAR_5->avg_reservoir+(VAR_10-VAR_16)<VAR_14){
        VAR_9++;
        VAR_10=FUNC_0(VAR_2->packetblob[VAR_9])*8;
      }
    }

    VAR_15=FUNC_3(VAR_9-VAR_5->avgfloat)/VAR_13*VAR_6->rate;
    if(VAR_15<-VAR_17)VAR_15=-VAR_17;
    if(VAR_15>VAR_17)VAR_15=VAR_17;
    VAR_9=FUNC_3(VAR_5->avgfloat+= VAR_15/VAR_6->rate*VAR_13);
    VAR_10=FUNC_0(VAR_2->packetblob[VAR_9])*8;
  }




  if(VAR_5->min_bitsper>0){

    if(VAR_10<VAR_11){
      while(VAR_5->minmax_reservoir-(VAR_11-VAR_10)<0){
        VAR_9++;
        if(VAR_9>=VAR_0)break;
        VAR_10=FUNC_0(VAR_2->packetblob[VAR_9])*8;
      }
    }
  }


  if(VAR_5->max_bitsper>0){

    if(VAR_10>VAR_12){
      while(VAR_5->minmax_reservoir+(VAR_10-VAR_12)>VAR_8->reservoir_bits){
        VAR_9--;
        if(VAR_9<0)break;
        VAR_10=FUNC_0(VAR_2->packetblob[VAR_9])*8;
      }
    }
  }




  if(VAR_9<0){


    long VAR_18=(VAR_12+(VAR_8->reservoir_bits-VAR_5->minmax_reservoir))/8;
    VAR_5->choice=VAR_9=0;

    if(FUNC_0(VAR_2->packetblob[VAR_9])>VAR_18){

      FUNC_2(VAR_2->packetblob[VAR_9],VAR_18*8);
      VAR_10=FUNC_0(VAR_2->packetblob[VAR_9])*8;
    }
  }else{
    long VAR_19=(VAR_11-VAR_5->minmax_reservoir+7)/8;
    if(VAR_9>=VAR_0)
      VAR_9=VAR_0-1;

    VAR_5->choice=VAR_9;


    VAR_19-=FUNC_0(VAR_2->packetblob[VAR_9]);
    while(VAR_19-->0)FUNC_1(VAR_2->packetblob[VAR_9],0,8);
    VAR_10=FUNC_0(VAR_2->packetblob[VAR_9])*8;

  }



  if(VAR_5->min_bitsper>0 || VAR_5->max_bitsper>0){

    if(VAR_12>0 && VAR_10>VAR_12){
      VAR_5->minmax_reservoir+=(VAR_10-VAR_12);
    }else if(VAR_11>0 && VAR_10<VAR_11){
      VAR_5->minmax_reservoir+=(VAR_10-VAR_11);
    }else{

      if(VAR_5->minmax_reservoir>VAR_14){
        if(VAR_12>0){
          VAR_5->minmax_reservoir+=(VAR_10-VAR_12);
          if(VAR_5->minmax_reservoir<VAR_14)VAR_5->minmax_reservoir=VAR_14;
        }else{
          VAR_5->minmax_reservoir=VAR_14;
        }
      }else{
        if(VAR_11>0){
          VAR_5->minmax_reservoir+=(VAR_10-VAR_11);
          if(VAR_5->minmax_reservoir>VAR_14)VAR_5->minmax_reservoir=VAR_14;
        }else{
          VAR_5->minmax_reservoir=VAR_14;
        }
      }
    }
  }


  if(VAR_5->avg_bitsper>0){
    long VAR_20=(VAR_1->W?VAR_5->avg_bitsper*VAR_5->short_per_long:VAR_5->avg_bitsper);
    VAR_5->avg_reservoir+=VAR_10-VAR_20;
  }

  return(0);
}
