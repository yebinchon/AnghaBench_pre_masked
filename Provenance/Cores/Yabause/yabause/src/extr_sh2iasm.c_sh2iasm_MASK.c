
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ reg; scalar_t__ type; } ;
typedef TYPE_1__ sh_operand_info ;
typedef int sh_opcode_info ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_2 (char*,TYPE_1__*,char*) ;
 int FUNC_3 (char*,char*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (char*,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 char FUNC_7 (char) ;

int FUNC_8(char *VAR_0, char *VAR_1)



{
   char VAR_2[30];
   char VAR_3[30];
   char VAR_4[30];
   char *VAR_5;
   int VAR_6;
   int VAR_7,VAR_8,VAR_9;
   sh_operand_info VAR_10,VAR_11,VAR_12;
   sh_opcode_info VAR_13;

   VAR_10.type = 0;
   VAR_10.reg = 0;
   VAR_11.type = 0;
   VAR_11.reg = 0;

   VAR_5 = VAR_0;
   while(*VAR_5 == ' ')
     VAR_5++;

   if((VAR_7 = FUNC_6(VAR_5,VAR_2)) == 0)
    {
       FUNC_0("No opcode", VAR_1);
       return 0;
    }

   VAR_5 += VAR_7;
   while(*VAR_5 == ' ')
     VAR_5++;

   VAR_8 = FUNC_5(VAR_5,VAR_3);
   VAR_5 += VAR_8;

   while(*VAR_5 == ' ')
     VAR_5++;
   if(*VAR_5 == ',')
     VAR_5++;
   while(*VAR_5 == ' ')
     VAR_5++;

   VAR_9 = FUNC_5(VAR_5,VAR_4);

   for(VAR_6 = 0;VAR_2[VAR_6] != 0;VAR_6++)
   {
       VAR_2[VAR_6] = FUNC_7(VAR_2[VAR_6]);
   }
   for(VAR_6 = 0;VAR_3[VAR_6] != 0;VAR_6++)
      VAR_3[VAR_6] = FUNC_7(VAR_3[VAR_6]);
   for(VAR_6 = 0;VAR_4[VAR_6] != 0;VAR_6++)
      VAR_4[VAR_6] = FUNC_7(VAR_4[VAR_6]);

   if(!FUNC_2(VAR_3,&VAR_10,VAR_1))
   {
      if(VAR_3[0] != 0)
        FUNC_0("Arg 1", VAR_1);
      return 0;
   }
   if(!FUNC_2(VAR_4,&VAR_11,VAR_1))
   {
      if(VAR_4[0] != 0)
        FUNC_0("Arg 2", VAR_1);
      return 0;
   }

   if(!FUNC_4(VAR_2,&VAR_10,&VAR_11,&VAR_13))
   {
     FUNC_0("Invalid opcode. Likely doesn't exist or format is wrong\n", VAR_1);
     return 0;
   }

   VAR_6 = 0;
   FUNC_3(VAR_3,VAR_4,&VAR_10,&VAR_11,&VAR_12);
   return FUNC_1(VAR_13,VAR_10,VAR_11,VAR_12);
}
