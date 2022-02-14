
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* vi; } ;
typedef TYPE_2__ vorbis_dsp_state ;
typedef int ogg_int64_t ;
struct TYPE_4__ {double rate; } ;



double FUNC_0(vorbis_dsp_state *VAR_0,ogg_int64_t VAR_1){
  if(VAR_1 == -1) return -1;



  if(VAR_1>=0){
    return((double)VAR_1/VAR_0->vi->rate);
  }else{
    ogg_int64_t VAR_2=0xffffffff;
    VAR_2<<=31;
    VAR_2|=0x7ffffffff;
    return(((double)VAR_1+2+VAR_2+VAR_2)/VAR_0->vi->rate);
  }
}
