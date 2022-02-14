
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* vendor; int comments; char** user_comments; int* comment_lengths; } ;
typedef TYPE_1__ vorbis_comment ;
typedef int oggpack_buffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(vorbis_comment *VAR_1,oggpack_buffer *VAR_2){
  int VAR_3;
  int VAR_4=FUNC_2(VAR_2,32);
  if(VAR_4<0)goto err_out;
  VAR_1->vendor=(char *)FUNC_0(VAR_4+1,1);
  FUNC_1(VAR_2,VAR_1->vendor,VAR_4);
  VAR_1->comments=FUNC_2(VAR_2,32);
  if(VAR_1->comments<0)goto err_out;
  VAR_1->user_comments=(char **)FUNC_0(VAR_1->comments+1,sizeof(*VAR_1->user_comments));
  VAR_1->comment_lengths=(int *)FUNC_0(VAR_1->comments+1, sizeof(*VAR_1->comment_lengths));

  for(VAR_3=0;VAR_3<VAR_1->comments;VAR_3++){
    int VAR_5=FUNC_2(VAR_2,32);
    if(VAR_5<0)goto err_out;
 VAR_1->comment_lengths[VAR_3]=VAR_5;
    VAR_1->user_comments[VAR_3]=(char *)FUNC_0(VAR_5+1,1);
    FUNC_1(VAR_2,VAR_1->user_comments[VAR_3],VAR_5);
  }
  if(FUNC_2(VAR_2,1)!=1)goto err_out;

  return(0);
 err_out:
  FUNC_3(VAR_1);
  return(VAR_0);
}
