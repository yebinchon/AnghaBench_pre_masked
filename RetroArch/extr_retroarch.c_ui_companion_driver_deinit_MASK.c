
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* deinit ) (int *) ;} ;
typedef TYPE_1__ ui_companion_driver_t ;
struct TYPE_5__ {int (* deinit ) (int *) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 TYPE_2__ VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
   const ui_companion_driver_t *VAR_5 = VAR_1;

   if (!VAR_5)
      return;
   if (VAR_5->deinit)
      VAR_5->deinit(VAR_2);
   VAR_2 = ((void*)0);
}
