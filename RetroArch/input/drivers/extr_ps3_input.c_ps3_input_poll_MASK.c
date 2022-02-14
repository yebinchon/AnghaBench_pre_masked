
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mice_connected; TYPE_1__* joypad; } ;
typedef TYPE_2__ ps3_input_t ;
struct TYPE_7__ {int now_connect; } ;
struct TYPE_5__ {int (* poll ) () ;} ;
typedef TYPE_3__ CellMouseInfo ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
   ps3_input_t *VAR_1 = (ps3_input_t*)VAR_0;

   if (VAR_1 && VAR_1->joypad)
      VAR_1->joypad->poll();






}
