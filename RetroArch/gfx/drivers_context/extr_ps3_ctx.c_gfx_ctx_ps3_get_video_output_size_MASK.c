
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_1__ current; } ;
struct TYPE_9__ {int pal_enable; int pal60_enable; TYPE_2__ resolutions; } ;
struct TYPE_10__ {TYPE_3__ screen; } ;
struct TYPE_11__ {TYPE_4__ console; } ;
typedef TYPE_5__ global_t ;


 int FUNC_0 (int ,unsigned int*,unsigned int*) ;
 TYPE_5__* FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
      unsigned *VAR_1, unsigned *VAR_2)
{
   global_t *VAR_3 = FUNC_1();

   if (!VAR_3)
      return;

   FUNC_0(VAR_3->console.screen.resolutions.current.id,
         VAR_1, VAR_2);

   if (*VAR_1 == 720 && *VAR_2 == 576)
   {
      if (VAR_3->console.screen.pal_enable)
         VAR_3->console.screen.pal60_enable = 1;
   }
   else
   {
      VAR_3->console.screen.pal_enable = 0;
      VAR_3->console.screen.pal60_enable = 0;
   }
}
