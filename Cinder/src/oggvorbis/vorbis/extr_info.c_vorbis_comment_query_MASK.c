
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long comments; char** user_comments; } ;
typedef TYPE_1__ vorbis_comment ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char*,int) ;

char *FUNC_5(vorbis_comment *VAR_0, const char *VAR_1, int VAR_2){
  long VAR_3;
  int VAR_4 = 0;
  int VAR_5 = FUNC_3(VAR_1)+1;
  char *VAR_6 = FUNC_0(VAR_5+ 1);

  FUNC_2(VAR_6, VAR_1);
  FUNC_1(VAR_6, "=");

  for(VAR_3=0;VAR_3<VAR_0->comments;VAR_3++){
    if(!FUNC_4(VAR_0->user_comments[VAR_3], VAR_6, VAR_5)){
      if(VAR_2 == VAR_4)

              return VAR_0->user_comments[VAR_3] + VAR_5;
      else
        VAR_4++;
    }
  }
  return ((void*)0);
}
