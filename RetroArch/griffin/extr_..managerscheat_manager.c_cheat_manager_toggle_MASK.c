
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; size_t ptr; TYPE_1__* cheats; } ;
struct TYPE_4__ {int state; } ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,size_t) ;

void FUNC_2(void)
{
   if (!VAR_0.cheats || VAR_0.size == 0)
      return;

   VAR_0.cheats[VAR_0.ptr].state ^= 1;
   FUNC_0();
   FUNC_1(&VAR_0, VAR_0.ptr);
}
