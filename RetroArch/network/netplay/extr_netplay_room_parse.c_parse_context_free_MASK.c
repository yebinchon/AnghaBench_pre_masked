
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parser; int * cur_field; } ;
typedef TYPE_1__ Context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(Context* VAR_0)
{
   if (VAR_0->cur_field)
      FUNC_1(VAR_0->cur_field);

   VAR_0->cur_field = ((void*)0);

   FUNC_0(VAR_0->parser);
}
