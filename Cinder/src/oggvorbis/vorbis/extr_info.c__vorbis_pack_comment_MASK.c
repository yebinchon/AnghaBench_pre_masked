
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int comments; char** user_comments; int* comment_lengths; } ;
typedef TYPE_1__ vorbis_comment ;
typedef int oggpack_buffer ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(oggpack_buffer *VAR_1,vorbis_comment *VAR_2){
  int VAR_3 = FUNC_2(VAR_0);


  FUNC_1(VAR_1,0x03,8);
  FUNC_0(VAR_1,"vorbis", 6);


  FUNC_1(VAR_1,VAR_3,32);
  FUNC_0(VAR_1,VAR_0, VAR_3);



  FUNC_1(VAR_1,VAR_2->comments,32);
  if(VAR_2->comments){
    int VAR_4;
    for(VAR_4=0;VAR_4<VAR_2->comments;VAR_4++){
      if(VAR_2->user_comments[VAR_4]){
        FUNC_1(VAR_1,VAR_2->comment_lengths[VAR_4],32);
        FUNC_0(VAR_1,VAR_2->user_comments[VAR_4], VAR_2->comment_lengths[VAR_4]);
      }else{
        FUNC_1(VAR_1,0,32);
      }
    }
  }
  FUNC_1(VAR_1,1,1);

  return(0);
}
