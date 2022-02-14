
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int settings_t ;
struct TYPE_7__ {int need_compute; } ;
typedef TYPE_1__ materialui_handle_t ;


 int * FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(materialui_handle_t *VAR_0)
{
   settings_t *VAR_1 = FUNC_0();

   if (!VAR_1)
      return;

   FUNC_2(VAR_0, VAR_1);
   FUNC_1(VAR_0, VAR_1);
   FUNC_4(VAR_0);
   FUNC_3(VAR_0, VAR_1);

   VAR_0->need_compute = 1;
}
