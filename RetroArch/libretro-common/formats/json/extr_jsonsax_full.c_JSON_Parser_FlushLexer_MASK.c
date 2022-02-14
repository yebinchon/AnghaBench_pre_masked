
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lexerState; } ;
typedef int JSON_Status ;
typedef TYPE_1__* JSON_Parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static JSON_Status FUNC_2(JSON_Parser VAR_5)
{




   if (!FUNC_0(VAR_5, VAR_0, 0))
      return VAR_2;


   if (VAR_5->lexerState != VAR_4)
   {
      FUNC_1(VAR_5, VAR_1);
      return VAR_2;
   }
   return VAR_3;
}
