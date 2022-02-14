
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ (* objectMemberHandler ) (TYPE_1__*,char*,int ,int ) ;scalar_t__ (* stringHandler ) (TYPE_1__*,char*,int ,int ) ;int state; int tokenAttributes; int tokenBytesUsed; scalar_t__ pTokenBytes; } ;
typedef int JSON_Status ;
typedef scalar_t__ (* JSON_Parser_StringHandler ) (TYPE_1__*,char*,int ,int ) ;
typedef scalar_t__ JSON_Parser_HandlerResult ;
typedef TYPE_1__* JSON_Parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static JSON_Status FUNC_4(JSON_Parser VAR_8, int VAR_9)
{
   JSON_Parser_StringHandler VAR_10 = VAR_9 ? VAR_8->objectMemberHandler : VAR_8->stringHandler;
   if (VAR_10)
   {
      JSON_Parser_HandlerResult VAR_11;
      FUNC_0(VAR_8);
      FUNC_3(VAR_7, VAR_8->state, VAR_6);
      VAR_11 = VAR_10(VAR_8, (char*)VAR_8->pTokenBytes, VAR_8->tokenBytesUsed, VAR_8->tokenAttributes);
      FUNC_2(VAR_7, VAR_8->state, VAR_6);

      if (VAR_11 != VAR_3)
      {
         FUNC_1(VAR_8,
               (VAR_9 && VAR_11 == VAR_4)
               ? VAR_1
               : VAR_0);
         return VAR_2;
      }
   }
   return VAR_5;
}
