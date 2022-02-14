
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* booleanHandler ) (TYPE_1__*,int ) ;scalar_t__ token; int state; } ;
typedef int JSON_Status ;
typedef scalar_t__ JSON_Parser_HandlerResult ;
typedef TYPE_1__* JSON_Parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static JSON_Status FUNC_4(JSON_Parser VAR_9)
{
   if (VAR_9->booleanHandler)
   {
      JSON_Parser_HandlerResult VAR_10;
      FUNC_2(VAR_7, VAR_9->state, VAR_6);
      VAR_10 = VAR_9->booleanHandler(VAR_9, VAR_9->token == VAR_8 ? VAR_5 : VAR_2);
      FUNC_1(VAR_7, VAR_9->state, VAR_6);
      if (VAR_10 != VAR_3)
      {
         FUNC_0(VAR_9, VAR_0);
         return VAR_1;
      }
   }
   return VAR_4;
}
