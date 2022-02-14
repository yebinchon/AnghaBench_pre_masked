
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int n; TYPE_1__* vi; int bark; } ;
typedef TYPE_2__ vorbis_look_psy ;
struct TYPE_4__ {int noisewindowfixed; float* noisecompand; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,float*,int,int,int ,int ) ;
 float* FUNC_1 (int) ;
 int FUNC_2 (int,int ,float*,float*,int,int) ;

void FUNC_3(vorbis_look_psy *VAR_1,
                   float *VAR_2,
                   float *VAR_3){

  int VAR_4,VAR_5=VAR_1->n;
  float *VAR_6=FUNC_1(VAR_5*sizeof(*VAR_6));

  FUNC_2(VAR_5,VAR_1->bark,VAR_2,VAR_3,
                      140.,-1);

  for(VAR_4=0;VAR_4<VAR_5;VAR_4++)VAR_6[VAR_4]=VAR_2[VAR_4]-VAR_3[VAR_4];

  FUNC_2(VAR_5,VAR_1->bark,VAR_6,VAR_3,0.,
                      VAR_1->vi->noisewindowfixed);

  for(VAR_4=0;VAR_4<VAR_5;VAR_4++)VAR_6[VAR_4]=VAR_2[VAR_4]-VAR_6[VAR_4];
  for(VAR_4=0;VAR_4<VAR_5;VAR_4++){
    int VAR_7=VAR_3[VAR_4]+.5;
    if(VAR_7>=VAR_0)VAR_7=VAR_0-1;
    if(VAR_7<0)VAR_7=0;
    VAR_3[VAR_4]= VAR_6[VAR_4]+VAR_1->vi->noisecompand[VAR_7];
  }

}
