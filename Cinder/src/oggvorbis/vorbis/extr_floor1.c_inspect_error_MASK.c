
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float const twofitatten; int maxover; int maxunder; int maxerr; } ;
typedef TYPE_1__ vorbis_info_floor1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (float const*) ;

__attribute__((used)) static int FUNC_2(int VAR_0,int VAR_1,int VAR_2,int VAR_3,const float *VAR_4,
                         const float *VAR_5,
                         vorbis_info_floor1 *VAR_6){
  int VAR_7=VAR_3-VAR_2;
  int VAR_8=VAR_1-VAR_0;
  int VAR_9=FUNC_0(VAR_7);
  int VAR_10=VAR_7/VAR_8;
  int VAR_11=(VAR_7<0?VAR_10-1:VAR_10+1);
  int VAR_12=VAR_0;
  int VAR_13=VAR_2;
  int VAR_14=0;
  int VAR_15=FUNC_1(VAR_4+VAR_12);
  int VAR_16=0;
  int VAR_17=0;

  VAR_9-=FUNC_0(VAR_10*VAR_8);

  VAR_16=(VAR_13-VAR_15);
  VAR_16*=VAR_16;
  VAR_17++;
  if(VAR_5[VAR_12]+VAR_6->twofitatten>=VAR_4[VAR_12]){
    if(VAR_13+VAR_6->maxover<VAR_15)return(1);
    if(VAR_13-VAR_6->maxunder>VAR_15)return(1);
  }

  while(++VAR_12<VAR_1){
    VAR_14=VAR_14+VAR_9;
    if(VAR_14>=VAR_8){
      VAR_14-=VAR_8;
      VAR_13+=VAR_11;
    }else{
      VAR_13+=VAR_10;
    }

    VAR_15=FUNC_1(VAR_4+VAR_12);
    VAR_16+=((VAR_13-VAR_15)*(VAR_13-VAR_15));
    VAR_17++;
    if(VAR_5[VAR_12]+VAR_6->twofitatten>=VAR_4[VAR_12]){
      if(VAR_15){
        if(VAR_13+VAR_6->maxover<VAR_15)return(1);
        if(VAR_13-VAR_6->maxunder>VAR_15)return(1);
      }
    }
  }

  if(VAR_6->maxover*VAR_6->maxover/VAR_17>VAR_6->maxerr)return(0);
  if(VAR_6->maxunder*VAR_6->maxunder/VAR_17>VAR_6->maxerr)return(0);
  if(VAR_16/VAR_17>VAR_6->maxerr)return(1);
  return(0);
}
