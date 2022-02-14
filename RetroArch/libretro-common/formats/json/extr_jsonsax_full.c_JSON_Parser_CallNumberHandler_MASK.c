
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ (* numberHandler ) (TYPE_1__*,char*,int ,int ) ;int state; int tokenAttributes; int tokenBytesUsed; scalar_t__ pTokenBytes; } ;
typedef int JSON_Status ;
typedef scalar_t__ JSON_Parser_HandlerResult ;
typedef TYPE_1__* JSON_Parser ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char*,int ,int ) ;

__attribute__((used)) static JSON_Status FUNC_5(JSON_Parser VAR_6)
{
   if (VAR_6->numberHandler)
   {
      JSON_Parser_HandlerResult VAR_7;
      FUNC_0(VAR_6);
      FUNC_3(VAR_5, VAR_6->state, VAR_4);
      VAR_7 = VAR_6->numberHandler(VAR_6, (char*)VAR_6->pTokenBytes,
            VAR_6->tokenBytesUsed, VAR_6->tokenAttributes);

      FUNC_2(VAR_5, VAR_6->state, VAR_4);

      if (VAR_7 != VAR_2)
      {
         FUNC_1(VAR_6, VAR_0);
         return VAR_1;
      }
   }
   return VAR_3;
}
