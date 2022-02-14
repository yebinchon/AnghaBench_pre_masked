
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int version; int channels; int rate; int bitrate_upper; int bitrate_nominal; int bitrate_lower; TYPE_2__* codec_setup; } ;
typedef TYPE_1__ vorbis_info ;
typedef int oggpack_buffer ;
struct TYPE_6__ {int* blocksizes; } ;
typedef TYPE_2__ codec_setup_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(vorbis_info *VAR_3,oggpack_buffer *VAR_4){
  codec_setup_info *VAR_5=VAR_3->codec_setup;
  if(!VAR_5)return(VAR_1);

  VAR_3->version=FUNC_0(VAR_4,32);
  if(VAR_3->version!=0)return(VAR_2);

  VAR_3->channels=FUNC_0(VAR_4,8);
  VAR_3->rate=FUNC_0(VAR_4,32);

  VAR_3->bitrate_upper=FUNC_0(VAR_4,32);
  VAR_3->bitrate_nominal=FUNC_0(VAR_4,32);
  VAR_3->bitrate_lower=FUNC_0(VAR_4,32);

  VAR_5->blocksizes[0]=1<<FUNC_0(VAR_4,4);
  VAR_5->blocksizes[1]=1<<FUNC_0(VAR_4,4);

  if(VAR_3->rate<1)goto err_out;
  if(VAR_3->channels<1)goto err_out;
  if(VAR_5->blocksizes[0]<64)goto err_out;
  if(VAR_5->blocksizes[1]<VAR_5->blocksizes[0])goto err_out;
  if(VAR_5->blocksizes[1]>8192)goto err_out;

  if(FUNC_0(VAR_4,1)!=1)goto err_out;

  return(0);
 err_out:
  FUNC_1(VAR_3);
  return(VAR_0);
}
