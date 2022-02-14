
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int comments; int * user_comments; } ;
typedef TYPE_1__ vorbis_comment ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,char*,int) ;

int FUNC_5(vorbis_comment *VAR_0, const char *VAR_1){
  int VAR_2,VAR_3=0;
  int VAR_4 = FUNC_3(VAR_1)+1;
  char *VAR_5 = FUNC_0(VAR_4+1);
  FUNC_2(VAR_5,VAR_1);
  FUNC_1(VAR_5, "=");

  for(VAR_2=0;VAR_2<VAR_0->comments;VAR_2++){
    if(!FUNC_4(VAR_0->user_comments[VAR_2], VAR_5, VAR_4))
      VAR_3++;
  }

  return VAR_3;
}
