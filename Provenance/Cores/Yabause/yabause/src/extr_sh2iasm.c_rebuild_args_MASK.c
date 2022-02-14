
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; void* reg; } ;
typedef TYPE_1__ sh_operand_info ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (char*,char const*) ;
 void* FUNC_1 (char*,char**,int) ;

int FUNC_2(const char *VAR_4,const char *VAR_5,sh_operand_info *VAR_6,
                  sh_operand_info *VAR_7,sh_operand_info *VAR_8)





{
   char VAR_9[30],VAR_10[30];
   char *VAR_11;

   FUNC_0(VAR_9,VAR_4);
   FUNC_0(VAR_10,VAR_5);
   VAR_11 = ((void*)0);

   switch(VAR_6->type)
   {
     case 131:
     case 142:
     case 135:
     case 133:
     case 129: VAR_6->type = VAR_2;
                   break;
     case 130:
     case 141:
     case 134:
     case 132:
     case 128: VAR_6->type = VAR_3;
                   break;
     case 139: VAR_8->reg = FUNC_1(&VAR_9[2],&VAR_11,16);
                     VAR_8->type = VAR_1;
                     break;
     case 140:VAR_8->reg = FUNC_1(&VAR_9[2],&VAR_11,16);
                     VAR_8->type = VAR_0;
                     break;
     case 138: VAR_8->reg = FUNC_1(&VAR_9[2],&VAR_11,16);
                        VAR_8->type = VAR_0;
                        VAR_6->type = VAR_2;
                        break;
     case 137: VAR_8->reg = FUNC_1(&VAR_9[2],&VAR_11,16);
                        VAR_8->type = VAR_0;
                        VAR_6->type = VAR_3;
                        break;
     case 136 : VAR_8->reg = FUNC_1(&VAR_9[1],&VAR_11,16);
                        VAR_8->type = VAR_0;
                        break;
     case 144 :
     case 143 : VAR_8->reg = FUNC_1(VAR_9,&VAR_11,16);
                        VAR_8->type = VAR_0;
                        break;

   }

   switch(VAR_7->type)
   {
     case 131:
     case 142:
     case 135:
     case 133:
     case 129: VAR_7->type = VAR_2;

                   break;
     case 130:
     case 141:
     case 134:
     case 132:
     case 128: VAR_7->type = VAR_3;

                   break;
     case 139: VAR_8->reg = FUNC_1(&VAR_10[2],&VAR_11,16);
                     VAR_8->type = VAR_1;
                     break;
     case 140:VAR_8->reg = FUNC_1(&VAR_10[2],&VAR_11,16);
                     VAR_8->type = VAR_0;
                     break;
     case 138: VAR_8->reg = FUNC_1(&VAR_10[2],&VAR_11,16);
                        VAR_8->type = VAR_0;
                        VAR_7->type = VAR_2;
                        break;
     case 137: VAR_8->reg = FUNC_1(&VAR_10[2],&VAR_11,16);
                        VAR_8->type = VAR_0;
                        VAR_7->type = VAR_3;
                        break;
     case 136 : VAR_8->reg = FUNC_1(&VAR_10[1],&VAR_11,16);
                        VAR_8->type = VAR_0;
                        break;
     case 144 :
     case 143 : VAR_8->reg = FUNC_1(VAR_10,&VAR_11,16);
                        VAR_8->type = VAR_0;
                        break;
   }

   return 0;
}
