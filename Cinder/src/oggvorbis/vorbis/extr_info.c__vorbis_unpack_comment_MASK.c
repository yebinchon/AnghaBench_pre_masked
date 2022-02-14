
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int comments; int* comment_lengths; void** user_comments; void* vendor; } ;
typedef TYPE_1__ vorbis_comment ;
struct TYPE_10__ {int storage; } ;
typedef TYPE_2__ oggpack_buffer ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,void*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(vorbis_comment *VAR_1,oggpack_buffer *VAR_2){
  int VAR_3;
  int VAR_4=FUNC_3(VAR_2,32);
  if(VAR_4<0)goto err_out;
  if(VAR_4>VAR_2->storage-8)goto err_out;
  VAR_1->vendor=FUNC_0(VAR_4+1,1);
  FUNC_1(VAR_2,VAR_1->vendor,VAR_4);
  VAR_3=FUNC_3(VAR_2,32);
  if(VAR_3<0)goto err_out;
  if(VAR_3>((VAR_2->storage-FUNC_2(VAR_2))>>2))goto err_out;
  VAR_1->comments=VAR_3;
  VAR_1->user_comments=FUNC_0(VAR_1->comments+1,sizeof(*VAR_1->user_comments));
  VAR_1->comment_lengths=FUNC_0(VAR_1->comments+1, sizeof(*VAR_1->comment_lengths));

  for(VAR_3=0;VAR_3<VAR_1->comments;VAR_3++){
    int VAR_5=FUNC_3(VAR_2,32);
    if(VAR_5<0)goto err_out;
    if(VAR_5>VAR_2->storage-FUNC_2(VAR_2))goto err_out;
    VAR_1->comment_lengths[VAR_3]=VAR_5;
    VAR_1->user_comments[VAR_3]=FUNC_0(VAR_5+1,1);
    FUNC_1(VAR_2,VAR_1->user_comments[VAR_3],VAR_5);
  }
  if(FUNC_3(VAR_2,1)!=1)goto err_out;

  return(0);
 err_out:
  FUNC_4(VAR_1);
  return(VAR_0);
}
