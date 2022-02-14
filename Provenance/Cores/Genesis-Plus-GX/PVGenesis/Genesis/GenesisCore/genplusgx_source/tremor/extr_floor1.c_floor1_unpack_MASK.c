
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int partitions; int* partitionclass; int* class_subs; scalar_t__* class_book; int** class_subbook; int* postlist; scalar_t__* class_dim; scalar_t__ mult; } ;
typedef TYPE_1__ vorbis_info_floor1 ;
typedef TYPE_1__ vorbis_info_floor ;
struct TYPE_9__ {scalar_t__ codec_setup; } ;
typedef TYPE_3__ vorbis_info ;
typedef int oggpack_buffer ;
struct TYPE_10__ {scalar_t__ books; } ;
typedef TYPE_4__ codec_setup_info ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int *,int) ;

__attribute__((used)) static vorbis_info_floor *FUNC_3 (vorbis_info *VAR_0,oggpack_buffer *VAR_1){
  codec_setup_info *VAR_2=(codec_setup_info *)VAR_0->codec_setup;
  int VAR_3,VAR_4,VAR_5=0,VAR_6=-1,VAR_7;

  vorbis_info_floor1 *VAR_8=(vorbis_info_floor1 *)FUNC_0(1,sizeof(*VAR_8));

  VAR_8->partitions=FUNC_2(VAR_1,5);
  for(VAR_3=0;VAR_3<VAR_8->partitions;VAR_3++){
    VAR_8->partitionclass[VAR_3]=FUNC_2(VAR_1,4);
    if(VAR_6<VAR_8->partitionclass[VAR_3])VAR_6=VAR_8->partitionclass[VAR_3];
  }


  for(VAR_3=0;VAR_3<VAR_6+1;VAR_3++){
    VAR_8->class_dim[VAR_3]=FUNC_2(VAR_1,3)+1;
    VAR_8->class_subs[VAR_3]=FUNC_2(VAR_1,2);
    if(VAR_8->class_subs[VAR_3]<0)
      goto err_out;
    if(VAR_8->class_subs[VAR_3])VAR_8->class_book[VAR_3]=FUNC_2(VAR_1,8);
    if(VAR_8->class_book[VAR_3]<0 || VAR_8->class_book[VAR_3]>=VAR_2->books)
      goto err_out;
    for(VAR_4=0;VAR_4<(1<<VAR_8->class_subs[VAR_3]);VAR_4++){
      VAR_8->class_subbook[VAR_3][VAR_4]=FUNC_2(VAR_1,8)-1;
      if(VAR_8->class_subbook[VAR_3][VAR_4]<-1 || VAR_8->class_subbook[VAR_3][VAR_4]>=VAR_2->books)
 goto err_out;
    }
  }


  VAR_8->mult=FUNC_2(VAR_1,2)+1;
  VAR_7=FUNC_2(VAR_1,4);

  for(VAR_3=0,VAR_4=0;VAR_3<VAR_8->partitions;VAR_3++){
    VAR_5+=VAR_8->class_dim[VAR_8->partitionclass[VAR_3]];
    for(;VAR_4<VAR_5;VAR_4++){
      int VAR_9=VAR_8->postlist[VAR_4+2]=FUNC_2(VAR_1,VAR_7);
      if(VAR_9<0 || VAR_9>=(1<<VAR_7))
 goto err_out;
    }
  }
  VAR_8->postlist[0]=0;
  VAR_8->postlist[1]=1<<VAR_7;

  return(VAR_8);

 err_out:
  FUNC_1(VAR_8);
  return(((void*)0));
}
