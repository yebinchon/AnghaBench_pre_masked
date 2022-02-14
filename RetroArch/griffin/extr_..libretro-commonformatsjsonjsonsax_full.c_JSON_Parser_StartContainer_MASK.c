
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; int flags; } ;
typedef int JSON_Status ;
typedef TYPE_1__* JSON_Parser ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static JSON_Status FUNC_2(JSON_Parser VAR_3, int VAR_4)
{
   if (VAR_4 && FUNC_0(VAR_3->flags, VAR_2) &&
         !FUNC_1(VAR_3))
   {
      return VAR_0;
   }
   VAR_3->depth++;
   return VAR_1;
}
