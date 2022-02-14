
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* specialNumberHandler ) (TYPE_1__*,int ) ;scalar_t__ token; int state; } ;
typedef int JSON_Status ;
typedef scalar_t__ JSON_Parser_HandlerResult ;
typedef TYPE_1__* JSON_Parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static JSON_Status FUNC_4(JSON_Parser VAR_11)
{
   if (VAR_11->specialNumberHandler)
   {
      JSON_Parser_HandlerResult VAR_12;
      FUNC_2(VAR_8, VAR_11->state, VAR_7);
      VAR_12 = VAR_11->specialNumberHandler(VAR_11, VAR_11->token == VAR_10 ? VAR_3 :
            (VAR_11->token == VAR_9 ? VAR_2 : VAR_4));
      FUNC_1(VAR_8, VAR_11->state, VAR_7);

      if (VAR_12 != VAR_5)
      {
         FUNC_0(VAR_11, VAR_0);
         return VAR_1;
      }
   }
   return VAR_6;
}
