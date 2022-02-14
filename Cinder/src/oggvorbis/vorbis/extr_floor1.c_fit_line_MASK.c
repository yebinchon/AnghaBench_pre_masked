
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int twofitweight; } ;
typedef TYPE_1__ vorbis_info_floor1 ;
struct TYPE_6__ {int x0; int x1; int bn; int an; double xa; double ya; double x2a; double y2a; double xya; scalar_t__ xyb; scalar_t__ y2b; scalar_t__ x2b; scalar_t__ yb; scalar_t__ xb; } ;
typedef TYPE_2__ lsfit_acc ;


 int FUNC_0 (double) ;

__attribute__((used)) static int FUNC_1(lsfit_acc *VAR_0,int VAR_1,int *VAR_2,int *VAR_3,
                    vorbis_info_floor1 *VAR_4){
  double VAR_5=0,VAR_6=0,VAR_7=0,VAR_8=0,VAR_9=0,VAR_10=0;
  int VAR_11;
  int VAR_12=VAR_0[0].x0;
  int VAR_13=VAR_0[VAR_1-1].x1;

  for(VAR_11=0;VAR_11<VAR_1;VAR_11++){
    double VAR_14 = (VAR_0[VAR_11].bn+VAR_0[VAR_11].an)*VAR_4->twofitweight/(VAR_0[VAR_11].an+1)+1.;

    VAR_5+=VAR_0[VAR_11].xb + VAR_0[VAR_11].xa * VAR_14;
    VAR_6+=VAR_0[VAR_11].yb + VAR_0[VAR_11].ya * VAR_14;
    VAR_7+=VAR_0[VAR_11].x2b + VAR_0[VAR_11].x2a * VAR_14;
    VAR_8+=VAR_0[VAR_11].y2b + VAR_0[VAR_11].y2a * VAR_14;
    VAR_9+=VAR_0[VAR_11].xyb + VAR_0[VAR_11].xya * VAR_14;
    VAR_10+=VAR_0[VAR_11].bn + VAR_0[VAR_11].an * VAR_14;
  }

  if(*VAR_2>=0){
    VAR_5+= VAR_12;
    VAR_6+= *VAR_2;
    VAR_7+= VAR_12 * VAR_12;
    VAR_8+= *VAR_2 * *VAR_2;
    VAR_9+= *VAR_2 * VAR_12;
    VAR_10++;
  }

  if(*VAR_3>=0){
    VAR_5+= VAR_13;
    VAR_6+= *VAR_3;
    VAR_7+= VAR_13 * VAR_13;
    VAR_8+= *VAR_3 * *VAR_3;
    VAR_9+= *VAR_3 * VAR_13;
    VAR_10++;
  }

  {
    double VAR_15=(VAR_10*VAR_7-VAR_5*VAR_5);

    if(VAR_15>0.){
      double VAR_16=(VAR_6*VAR_7-VAR_9*VAR_5)/VAR_15;
      double VAR_17=(VAR_10*VAR_9-VAR_5*VAR_6)/VAR_15;
      *VAR_2=FUNC_0(VAR_16+VAR_17*VAR_12);
      *VAR_3=FUNC_0(VAR_16+VAR_17*VAR_13);


      if(*VAR_2>1023)*VAR_2=1023;
      if(*VAR_3>1023)*VAR_3=1023;
      if(*VAR_2<0)*VAR_2=0;
      if(*VAR_3<0)*VAR_3=0;

      return 0;
    }else{
      *VAR_2=0;
      *VAR_3=0;
      return 1;
    }
  }
}
