
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1(char *VAR_1)
{
        static char *VAR_2[11]={"none","arkanoid","shadow","4player","fkb","hypershot",
                        "mahjong","quizking","ftrainera","ftrainerb","oekakids"};

        static int VAR_3[11]={131,137,128,
                                 138,136,133,132,129,
                                 135,134,130};
 int VAR_4;
 for(VAR_4=0;VAR_4<11;VAR_4++)
  if(!FUNC_0(VAR_2[VAR_4],VAR_1))
   VAR_0[2]=VAR_3[VAR_4];
}
