
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


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int**,int,int,int ) ;

__attribute__((used)) static vorbis_info_floor *FUNC_4 (vorbis_info *VAR_2,oggpack_buffer *VAR_3){
  codec_setup_info *VAR_4=(codec_setup_info *)VAR_2->codec_setup;
  int VAR_5,VAR_6,VAR_7=0,VAR_8=-1,VAR_9;

  vorbis_info_floor1 *VAR_10=(vorbis_info_floor1 *)FUNC_0(1,sizeof(*VAR_10));

  VAR_10->partitions=FUNC_2(VAR_3,5);
  for(VAR_5=0;VAR_5<VAR_10->partitions;VAR_5++){
    VAR_10->partitionclass[VAR_5]=FUNC_2(VAR_3,4);
    if(VAR_10->partitionclass[VAR_5]<0)goto err_out;
    if(VAR_8<VAR_10->partitionclass[VAR_5])VAR_8=VAR_10->partitionclass[VAR_5];
  }


  for(VAR_5=0;VAR_5<VAR_8+1;VAR_5++){
    VAR_10->class_dim[VAR_5]=FUNC_2(VAR_3,3)+1;
    VAR_10->class_subs[VAR_5]=FUNC_2(VAR_3,2);
    if(VAR_10->class_subs[VAR_5]<0)
      goto err_out;
    if(VAR_10->class_subs[VAR_5])VAR_10->class_book[VAR_5]=FUNC_2(VAR_3,8);
    if(VAR_10->class_book[VAR_5]<0 || VAR_10->class_book[VAR_5]>=VAR_4->books)
      goto err_out;
    for(VAR_6=0;VAR_6<(1<<VAR_10->class_subs[VAR_5]);VAR_6++){
      VAR_10->class_subbook[VAR_5][VAR_6]=FUNC_2(VAR_3,8)-1;
      if(VAR_10->class_subbook[VAR_5][VAR_6]<-1 || VAR_10->class_subbook[VAR_5][VAR_6]>=VAR_4->books)
 goto err_out;
    }
  }


  VAR_10->mult=FUNC_2(VAR_3,2)+1;
  VAR_9=FUNC_2(VAR_3,4);
  if(VAR_9<0)goto err_out;

  for(VAR_5=0,VAR_6=0;VAR_5<VAR_10->partitions;VAR_5++){
    VAR_7+=VAR_10->class_dim[VAR_10->partitionclass[VAR_5]];
    if(VAR_7>VAR_0)goto err_out;
    for(;VAR_6<VAR_7;VAR_6++){
      int VAR_11=VAR_10->postlist[VAR_6+2]=FUNC_2(VAR_3,VAR_9);
      if(VAR_11<0 || VAR_11>=(1<<VAR_9))
 goto err_out;
    }
  }
  VAR_10->postlist[0]=0;
  VAR_10->postlist[1]=1<<VAR_9;



  {
    int *VAR_12[VAR_0+2];
    for(VAR_5=0;VAR_5<VAR_7+2;VAR_5++)VAR_12[VAR_5]=VAR_10->postlist+VAR_5;
    FUNC_3(VAR_12,VAR_7+2,sizeof(*VAR_12),VAR_1);

    for(VAR_5=1;VAR_5<VAR_7+2;VAR_5++)
      if(*VAR_12[VAR_5-1]==*VAR_12[VAR_5])goto err_out;
  }

  return(VAR_10);

 err_out:
  FUNC_1(VAR_10);
  return(((void*)0));
}
