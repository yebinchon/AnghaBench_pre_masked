
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vorbis_look_residue ;
typedef int vorbis_block ;
typedef int ogg_int32_t ;


 int FUNC_0 (int *,int *,int **,int,int ) ;
 int VAR_0 ;

int FUNC_1(vorbis_block *VAR_1,vorbis_look_residue *VAR_2,
   ogg_int32_t **VAR_3,int *VAR_4,int VAR_5){
  int VAR_6,VAR_7=0;
  for(VAR_6=0;VAR_6<VAR_5;VAR_6++)
    if(VAR_4[VAR_6])
      VAR_3[VAR_7++]=VAR_3[VAR_6];
  if(VAR_7)
    return(FUNC_0(VAR_1,VAR_2,VAR_3,VAR_7,VAR_0));
  else
    return(0);
}
