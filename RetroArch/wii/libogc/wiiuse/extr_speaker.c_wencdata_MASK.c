
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ubyte ;
struct TYPE_3__ {int step; short predictor; } ;
typedef TYPE_1__ WENCStatus ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int* VAR_0 ;
 int* VAR_1 ;

ubyte FUNC_4(WENCStatus *VAR_2,short VAR_3)
{
 int VAR_4,VAR_5;

 if(!VAR_2->step) {
  VAR_2->predictor = 0;
  VAR_2->step = 127;
 }

 VAR_5 = VAR_3 - VAR_2->predictor;
 VAR_4 = FUNC_1(7,(FUNC_0(VAR_5)*4)/VAR_2->step) + ((VAR_5<0)*8);

 VAR_2->predictor += ((VAR_2->step*VAR_0[VAR_4])/8);
 VAR_2->predictor = FUNC_3(VAR_2->predictor);
 VAR_2->step = (VAR_2->step*VAR_1[VAR_4])>>8;
 VAR_2->step = FUNC_2(VAR_2->step,127,24576);

 return VAR_4;
}
