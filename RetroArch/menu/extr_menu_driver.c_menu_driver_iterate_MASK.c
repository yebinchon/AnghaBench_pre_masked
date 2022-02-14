
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int action; } ;
typedef TYPE_1__ menu_ctx_iterate_t ;
struct TYPE_5__ {int (* iterate ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int *,char*,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ) ;

bool FUNC_5(menu_ctx_iterate_t *VAR_8)
{

   VAR_3 = FUNC_0();

   if (VAR_5)
   {





      VAR_5 = 0;
      FUNC_3(((void*)0), VAR_1);
      FUNC_2(1);

      FUNC_1("", ((void*)0),
            "", 0, 0, 0, VAR_0);

      VAR_6 = 0;

      return 1;
   }

   if (
         VAR_2 &&
         VAR_2->iterate &&
         VAR_2->iterate(VAR_4,
            VAR_7, VAR_8->action) != -1)
      return 1;

   return 0;
}
