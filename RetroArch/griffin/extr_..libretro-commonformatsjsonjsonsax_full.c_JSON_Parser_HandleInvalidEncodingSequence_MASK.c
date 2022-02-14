
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ token; int flags; int depth; int tokenAttributes; } ;
typedef int JSON_Status ;
typedef TYPE_1__* JSON_Parser ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,size_t) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static JSON_Status FUNC_6(
      JSON_Parser VAR_8, size_t VAR_9)
{
   if (VAR_8->token == VAR_6 && FUNC_0(VAR_8->flags, VAR_4))
   {







      FUNC_5(VAR_7, VAR_8->tokenAttributes, VAR_0);
      return FUNC_3(VAR_8, VAR_5, VAR_9);
   }
   else if (!VAR_8->depth && FUNC_0(VAR_8->flags, VAR_3))
   {







      return (JSON_Status)(FUNC_1(VAR_8) && FUNC_2(VAR_8));
   }
   FUNC_4(VAR_8, VAR_1);
   return VAR_2;
}
