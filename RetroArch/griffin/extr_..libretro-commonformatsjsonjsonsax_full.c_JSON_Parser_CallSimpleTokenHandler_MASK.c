
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state; } ;
typedef int JSON_Status ;
typedef scalar_t__ (* JSON_Parser_SimpleTokenHandler ) (TYPE_1__*) ;
typedef scalar_t__ JSON_Parser_HandlerResult ;
typedef TYPE_1__* JSON_Parser ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static JSON_Status FUNC_3(JSON_Parser VAR_6, JSON_Parser_SimpleTokenHandler VAR_7)
{
   if (VAR_7)
   {
      JSON_Parser_HandlerResult VAR_8;
      FUNC_2(VAR_5, VAR_6->state, VAR_4);
      VAR_8 = VAR_7(VAR_6);
      FUNC_1(VAR_5, VAR_6->state, VAR_4);
      if (VAR_8 != VAR_2)
      {
         FUNC_0(VAR_6, VAR_0);
         return VAR_1;
      }
   }
   return VAR_3;
}
