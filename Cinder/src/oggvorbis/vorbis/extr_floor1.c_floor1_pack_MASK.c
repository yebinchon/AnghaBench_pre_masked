
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* postlist; int partitions; int* partitionclass; int* class_dim; int* class_subs; int* class_book; int** class_subbook; int mult; } ;
typedef TYPE_1__ vorbis_info_floor1 ;
typedef int vorbis_info_floor ;
typedef int oggpack_buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2 (vorbis_info_floor *VAR_0,oggpack_buffer *VAR_1){
  vorbis_info_floor1 *VAR_2=(vorbis_info_floor1 *)VAR_0;
  int VAR_3,VAR_4;
  int VAR_5=0;
  int VAR_6;
  int VAR_7=VAR_2->postlist[1];
  int VAR_8=-1;


  FUNC_1(VAR_1,VAR_2->partitions,5);
  for(VAR_3=0;VAR_3<VAR_2->partitions;VAR_3++){
    FUNC_1(VAR_1,VAR_2->partitionclass[VAR_3],4);
    if(VAR_8<VAR_2->partitionclass[VAR_3])VAR_8=VAR_2->partitionclass[VAR_3];
  }


  for(VAR_3=0;VAR_3<VAR_8+1;VAR_3++){
    FUNC_1(VAR_1,VAR_2->class_dim[VAR_3]-1,3);
    FUNC_1(VAR_1,VAR_2->class_subs[VAR_3],2);
    if(VAR_2->class_subs[VAR_3])FUNC_1(VAR_1,VAR_2->class_book[VAR_3],8);
    for(VAR_4=0;VAR_4<(1<<VAR_2->class_subs[VAR_3]);VAR_4++)
      FUNC_1(VAR_1,VAR_2->class_subbook[VAR_3][VAR_4]+1,8);
  }


  FUNC_1(VAR_1,VAR_2->mult-1,2);
  FUNC_1(VAR_1,FUNC_0(VAR_7),4);
  VAR_6=FUNC_0(VAR_7);

  for(VAR_3=0,VAR_4=0;VAR_3<VAR_2->partitions;VAR_3++){
    VAR_5+=VAR_2->class_dim[VAR_2->partitionclass[VAR_3]];
    for(;VAR_4<VAR_5;VAR_4++)
      FUNC_1(VAR_1,VAR_2->postlist[VAR_4+2],VAR_6);
  }
}
