
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int comments; int ** user_comments; int ** comment_lengths; } ;
typedef TYPE_1__ vorbis_comment ;


 int * FUNC_0 (int *) ;
 void* FUNC_1 (int **,int) ;
 int FUNC_2 (int *,char const*) ;
 int * FUNC_3 (char const*) ;

void FUNC_4(vorbis_comment *VAR_0,const char *VAR_1){
  VAR_0->user_comments=FUNC_1(VAR_0->user_comments,
                            (VAR_0->comments+2)*sizeof(*VAR_0->user_comments));
  VAR_0->comment_lengths=FUNC_1(VAR_0->comment_lengths,
                                  (VAR_0->comments+2)*sizeof(*VAR_0->comment_lengths));
  VAR_0->comment_lengths[VAR_0->comments]=FUNC_3(VAR_1);
  VAR_0->user_comments[VAR_0->comments]=FUNC_0(VAR_0->comment_lengths[VAR_0->comments]+1);
  FUNC_2(VAR_0->user_comments[VAR_0->comments], VAR_1);
  VAR_0->comments++;
  VAR_0->user_comments[VAR_0->comments]=((void*)0);
}
