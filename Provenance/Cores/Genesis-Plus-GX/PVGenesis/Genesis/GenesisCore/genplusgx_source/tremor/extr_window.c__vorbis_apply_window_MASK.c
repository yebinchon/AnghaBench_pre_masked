
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ogg_int32_t ;
typedef int LOOKUP_T ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

void FUNC_1(ogg_int32_t *VAR_0,const void *VAR_1[2],
     long *VAR_2,
     int VAR_3,int VAR_4,int VAR_5){

  LOOKUP_T *VAR_6[2];
  long VAR_7=VAR_2[VAR_4];
  long VAR_8=VAR_2[VAR_3];
  long VAR_9=VAR_2[VAR_5];

  long VAR_10=VAR_7/4-VAR_8/4;
  long VAR_11=VAR_10+VAR_8/2;

  long VAR_12=VAR_7/2+VAR_7/4-VAR_9/4;
  long VAR_13=VAR_12+VAR_9/2;

  int VAR_14,VAR_15;

  VAR_6[0]=VAR_1[0];
  VAR_6[1]=VAR_1[1];

  for(VAR_14=0;VAR_14<VAR_10;VAR_14++)
    VAR_0[VAR_14]=0;

  for(VAR_15=0;VAR_14<VAR_11;VAR_14++,VAR_15++)
    VAR_0[VAR_14]=FUNC_0(VAR_0[VAR_14],VAR_6[VAR_3][VAR_15]);

  for(VAR_14=VAR_12,VAR_15=VAR_9/2-1;VAR_14<VAR_13;VAR_14++,VAR_15--)
    VAR_0[VAR_14]=FUNC_0(VAR_0[VAR_14],VAR_6[VAR_5][VAR_15]);

  for(;VAR_14<VAR_7;VAR_14++)
    VAR_0[VAR_14]=0;
}
