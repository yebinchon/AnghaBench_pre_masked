
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int idx; int id; } ;
struct TYPE_8__ {TYPE_1__ current; int * list; } ;
struct TYPE_9__ {TYPE_2__ resolutions; } ;
struct TYPE_10__ {TYPE_3__ screen; } ;
struct TYPE_11__ {TYPE_4__ console; } ;
typedef TYPE_5__ global_t ;


 TYPE_5__* FUNC_0 () ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
   global_t *VAR_1 = FUNC_0();

   if (!VAR_1)
      return;

   if (VAR_1->console.screen.resolutions.current.idx)
   {
      VAR_1->console.screen.resolutions.current.idx--;
      VAR_1->console.screen.resolutions.current.id =
         VAR_1->console.screen.resolutions.list
         [VAR_1->console.screen.resolutions.current.idx];
   }
}
