
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ogg_int64_t ;



ogg_int64_t FUNC_0(ogg_int64_t VAR_0, ogg_int64_t VAR_1, ogg_int64_t VAR_2){
  ogg_int64_t VAR_3=0;
  ogg_int64_t VAR_4=0;
  int VAR_5;
  if(VAR_0 >= VAR_1) return VAR_2;
  if(VAR_0 <= 0) return 0;

  for(VAR_5=0;VAR_5<64;VAR_5++){
    if(VAR_0>=VAR_1){
      VAR_3|=1;
      VAR_0-=VAR_1;
    }
    VAR_0<<=1;
    VAR_3<<=1;
  }

  for(VAR_5=0;VAR_5<64;VAR_5++){
    if(VAR_3 & 1){
      VAR_4+=VAR_2;
    }
    VAR_3>>=1;
    VAR_4>>=1;
  }

  return VAR_4;
}
