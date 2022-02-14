
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int begin; int end; int grouping; int partitions; int groupbook; int* secondstages; int* booklist; } ;
typedef TYPE_1__ vorbis_info_residue0 ;
typedef int vorbis_info_residue ;
typedef int oggpack_buffer ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int) ;

void FUNC_3(vorbis_info_residue *VAR_0,oggpack_buffer *VAR_1){
  vorbis_info_residue0 *VAR_2=(vorbis_info_residue0 *)VAR_0;
  int VAR_3,VAR_4=0;
  FUNC_2(VAR_1,VAR_2->begin,24);
  FUNC_2(VAR_1,VAR_2->end,24);

  FUNC_2(VAR_1,VAR_2->grouping-1,24);

  FUNC_2(VAR_1,VAR_2->partitions-1,6);
  FUNC_2(VAR_1,VAR_2->groupbook,8);




  for(VAR_3=0;VAR_3<VAR_2->partitions;VAR_3++){
    if(FUNC_1(VAR_2->secondstages[VAR_3])>3){

      FUNC_2(VAR_1,VAR_2->secondstages[VAR_3],3);
      FUNC_2(VAR_1,1,1);
      FUNC_2(VAR_1,VAR_2->secondstages[VAR_3]>>3,5);
    }else
      FUNC_2(VAR_1,VAR_2->secondstages[VAR_3],4);
    VAR_4+=FUNC_0(VAR_2->secondstages[VAR_3]);
  }
  for(VAR_3=0;VAR_3<VAR_4;VAR_3++)
    FUNC_2(VAR_1,VAR_2->booklist[VAR_3],8);

}
