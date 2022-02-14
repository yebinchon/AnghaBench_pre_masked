
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int videomode ;
typedef int uint32_t ;
typedef unsigned int uint16_t ;
struct TYPE_9__ {int id; int idx; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_10__ {int check; int count; int* list; TYPE_2__ current; TYPE_1__ initial; } ;
struct TYPE_11__ {TYPE_3__ resolutions; } ;
struct TYPE_12__ {TYPE_4__ screen; } ;
struct TYPE_13__ {TYPE_5__ console; } ;
typedef TYPE_6__ global_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ) ;
 TYPE_6__* FUNC_1 () ;
 int* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void)
{
   unsigned VAR_10;
   uint32_t VAR_11[] = {
      VAR_6,
      VAR_7,
      VAR_9,
      VAR_8,
      VAR_3,
      VAR_4,
      VAR_5,
      VAR_2
   };
   uint32_t VAR_12 = 0;
   bool VAR_13 = 1;
   uint16_t VAR_14 = sizeof(VAR_11) / sizeof(uint32_t);
   global_t *VAR_15 = FUNC_1();

   if (VAR_15->console.screen.resolutions.check)
      return;

   for (VAR_10 = 0; VAR_10 < VAR_14; VAR_10++)
   {
      if (FUNC_0(
               VAR_1, VAR_11[VAR_10],
               VAR_0, 0))
         VAR_12++;
   }

   VAR_15->console.screen.resolutions.count = 0;
   VAR_15->console.screen.resolutions.list =
      FUNC_2(VAR_12 * sizeof(uint32_t));

   for (VAR_10 = 0; VAR_10 < VAR_14; VAR_10++)
   {
      if (FUNC_0(
               VAR_1,
               VAR_11[VAR_10],
               VAR_0, 0))
      {
         VAR_15->console.screen.resolutions.list[
            VAR_15->console.screen.resolutions.count++] = VAR_11[VAR_10];
         VAR_15->console.screen.resolutions.initial.id = VAR_11[VAR_10];

         if (VAR_15->console.screen.resolutions.current.id == VAR_11[VAR_10])
         {
            VAR_13 = 0;
            VAR_15->console.screen.resolutions.current.idx =
               VAR_15->console.screen.resolutions.count-1;
         }
      }
   }





   if (VAR_15->console.screen.resolutions.current.id > VAR_14 || VAR_13)
    {
      VAR_15->console.screen.resolutions.current.idx = VAR_12 - 1;
      VAR_15->console.screen.resolutions.current.id = VAR_15->console.screen.resolutions.list[VAR_15->console.screen.resolutions.current.idx];
    }

   VAR_15->console.screen.resolutions.check = 1;
}
