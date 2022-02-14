
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vorbis_look_residue ;
struct TYPE_4__ {int pcmend; } ;
typedef TYPE_1__ vorbis_block ;
typedef int oggpack_buffer ;


 int FUNC_0 (int *,int *,int**,int,long**,int ,...) ;
 int VAR_0 ;
 int* FUNC_1 (TYPE_1__*,int) ;

int FUNC_2(oggpack_buffer *VAR_1,
                 vorbis_block *VAR_2,vorbis_look_residue *VAR_3,
                 int **VAR_4,int *VAR_5,int VAR_6, long **VAR_7,int VAR_8){
  long VAR_9,VAR_10,VAR_11,VAR_12=VAR_2->pcmend/2,VAR_13=0;




  int *VAR_14=FUNC_1(VAR_2,VAR_6*VAR_12*sizeof(*VAR_14));
  for(VAR_9=0;VAR_9<VAR_6;VAR_9++){
    int *VAR_15=VAR_4[VAR_9];
    if(VAR_5[VAR_9])VAR_13++;
    for(VAR_10=0,VAR_11=VAR_9;VAR_10<VAR_12;VAR_10++,VAR_11+=VAR_6)
      VAR_14[VAR_11]=VAR_15[VAR_10];
  }

  if(VAR_13){



    (void)VAR_8;
    return FUNC_0(VAR_1,VAR_3,&VAR_14,1,VAR_7,VAR_0);

  }else{
    return(0);
  }
}
