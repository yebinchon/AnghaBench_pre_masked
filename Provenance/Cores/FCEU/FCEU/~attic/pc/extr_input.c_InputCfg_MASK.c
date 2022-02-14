
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_4(char *VAR_4)
{
         if(!FUNC_3(VAR_4,"gamepad",FUNC_2("gamepad")))
         {
          FUNC_0(VAR_0,(VAR_4[FUNC_2("gamepad")]-'1')&3);
         }
         else if(!FUNC_3(VAR_4,"powerpad",FUNC_2("powerpad")))
         {
          FUNC_0(VAR_2,(VAR_4[FUNC_2("powerpad")]-'1')&1);
         }
         else if(!FUNC_1(VAR_4,"hypershot"))
          FUNC_0(VAR_1,0);
         else if(!FUNC_1(VAR_4,"quizking"))
          FUNC_0(VAR_3,0);
}
