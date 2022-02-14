
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vorbis_info ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,long,long,float) ;
 int FUNC_2 (int *) ;

int FUNC_3(vorbis_info *VAR_0,
                           long VAR_1,
                           long VAR_2,

                           float VAR_3
                           ){
  int VAR_4=0;

  VAR_4=FUNC_1(VAR_0,VAR_1,VAR_2,VAR_3);

  if(VAR_4){
    FUNC_2(VAR_0);
    return VAR_4;
  }
  VAR_4=FUNC_0(VAR_0);
  if(VAR_4)
    FUNC_2(VAR_0);
  return(VAR_4);
}
