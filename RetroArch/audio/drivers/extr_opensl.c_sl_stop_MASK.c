
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_paused; int player; } ;
typedef TYPE_1__ sl_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_1(void *VAR_2)
{
   sl_t *VAR_3 = (sl_t*)VAR_2;
   VAR_3->is_paused = (FUNC_0(VAR_3->player, VAR_0)
         == VAR_1) ? 1 : 0;

   return VAR_3->is_paused ? 1 : 0;
}
