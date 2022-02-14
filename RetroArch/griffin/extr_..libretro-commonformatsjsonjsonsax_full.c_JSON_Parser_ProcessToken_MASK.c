
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tokenBytesUsed; scalar_t__ tokenAttributes; int token; scalar_t__ lexerBits; int lexerState; int memorySuite; int grammarianData; } ;
typedef int JSON_Status ;
typedef TYPE_1__* JSON_Parser ;
typedef int GrammarianOutput ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;

__attribute__((used)) static JSON_Status FUNC_6(JSON_Parser VAR_6)
{
   GrammarianOutput VAR_7;
   VAR_7 = FUNC_2(&VAR_6->grammarianData, VAR_6->token, &VAR_6->memorySuite);
   switch (FUNC_1(VAR_7))
   {
      case 130:
         if (!FUNC_3(VAR_6, FUNC_0(VAR_7)))
            return VAR_2;
         break;

      case 129:
         FUNC_5(VAR_6, VAR_1);
         return VAR_2;

      case 128:
         FUNC_4(VAR_6, VAR_0);
         return VAR_2;
   }


   VAR_6->lexerState = VAR_4;
   VAR_6->lexerBits = 0;
   VAR_6->token = VAR_5;
   VAR_6->tokenAttributes = 0;
   VAR_6->tokenBytesUsed = 0;
   return VAR_3;
}
