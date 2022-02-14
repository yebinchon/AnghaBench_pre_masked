
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float const twofitatten; } ;
typedef TYPE_1__ vorbis_info_floor1 ;
struct TYPE_7__ {int x0; int x1; int xa; int ya; int x2a; int y2a; int xya; int an; int xb; int yb; int x2b; int y2b; int xyb; int bn; } ;
typedef TYPE_2__ lsfit_acc ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (float const*) ;

__attribute__((used)) static int FUNC_2(const float *VAR_0,const float *VAR_1,
                          int VAR_2, int VAR_3,lsfit_acc *VAR_4,
                          int VAR_5,vorbis_info_floor1 *VAR_6){
  long VAR_7;

  int VAR_8=0,VAR_9=0,VAR_10=0,VAR_11=0,VAR_12=0,VAR_13=0, VAR_14=0,VAR_15=0,VAR_16=0,VAR_17=0,VAR_18=0,VAR_19=0;

  FUNC_0(VAR_4,0,sizeof(*VAR_4));
  VAR_4->x0=VAR_2;
  VAR_4->x1=VAR_3;
  if(VAR_3>=VAR_5)VAR_3=VAR_5-1;

  for(VAR_7=VAR_2;VAR_7<=VAR_3;VAR_7++){
    int VAR_20=FUNC_1(VAR_0+VAR_7);
    if(VAR_20){
      if(VAR_1[VAR_7]+VAR_6->twofitatten>=VAR_0[VAR_7]){
        VAR_8 += VAR_7;
        VAR_9 += VAR_20;
        VAR_10 += VAR_7*VAR_7;
        VAR_11 += VAR_20*VAR_20;
        VAR_12 += VAR_7*VAR_20;
        VAR_13++;
      }else{
        VAR_14 += VAR_7;
        VAR_15 += VAR_20;
        VAR_16 += VAR_7*VAR_7;
        VAR_17 += VAR_20*VAR_20;
        VAR_18 += VAR_7*VAR_20;
        VAR_19++;
      }
    }
  }

  VAR_4->xa=VAR_8;
  VAR_4->ya=VAR_9;
  VAR_4->x2a=VAR_10;
  VAR_4->y2a=VAR_11;
  VAR_4->xya=VAR_12;
  VAR_4->an=VAR_13;

  VAR_4->xb=VAR_14;
  VAR_4->yb=VAR_15;
  VAR_4->x2b=VAR_16;
  VAR_4->y2b=VAR_17;
  VAR_4->xyb=VAR_18;
  VAR_4->bn=VAR_19;

  return(VAR_13);
}
