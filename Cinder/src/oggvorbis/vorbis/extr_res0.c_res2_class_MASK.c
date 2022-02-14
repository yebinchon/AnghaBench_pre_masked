
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vorbis_look_residue ;
typedef int vorbis_block ;


 long** FUNC_0 (int *,int *,int**,int) ;

long **FUNC_1(vorbis_block *VAR_0,vorbis_look_residue *VAR_1,
                  int **VAR_2,int *VAR_3,int VAR_4){
  int VAR_5,VAR_6=0;
  for(VAR_5=0;VAR_5<VAR_4;VAR_5++)
    if(VAR_3[VAR_5])VAR_6++;
  if(VAR_6)
    return(FUNC_0(VAR_0,VAR_1,VAR_2,VAR_4));
  else
    return(0);
}
