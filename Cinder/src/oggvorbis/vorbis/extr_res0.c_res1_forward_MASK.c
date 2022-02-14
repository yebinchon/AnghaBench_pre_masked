
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vorbis_look_residue ;
typedef int vorbis_block ;
typedef int oggpack_buffer ;


 int FUNC_0 (int *,int *,int**,int,long**,int ,...) ;
 int VAR_0 ;

int FUNC_1(oggpack_buffer *VAR_1,vorbis_block *VAR_2,vorbis_look_residue *VAR_3,
                 int **VAR_4,int *VAR_5,int VAR_6, long **VAR_7, int VAR_8){
  int VAR_9,VAR_10=0;
  (void)VAR_2;
  for(VAR_9=0;VAR_9<VAR_6;VAR_9++)
    if(VAR_5[VAR_9])
      VAR_4[VAR_10++]=VAR_4[VAR_9];

  if(VAR_10){



    (void)VAR_8;
    return FUNC_0(VAR_1,VAR_3,VAR_4,VAR_10,VAR_7,VAR_0);

  }else{
    return(0);
  }
}
