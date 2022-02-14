
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct item_cheat {int dummy; } ;
struct TYPE_4__ {unsigned int size; int working_code; TYPE_1__* cheats; int working_desc; int working_cheat; } ;
struct TYPE_3__ {void* code; void* desc; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 void* FUNC_2 (int ) ;

bool FUNC_3(unsigned VAR_1)
{
   if ((!VAR_0.cheats) || (VAR_0.size < VAR_1 + 1))
      return 0;

   FUNC_1(&(VAR_0.cheats[VAR_1]), &(VAR_0.working_cheat), sizeof(struct item_cheat));

   if (VAR_0.cheats[VAR_1].desc)
      FUNC_0(VAR_0.cheats[VAR_1].desc);

   VAR_0.cheats[VAR_1].desc = FUNC_2(VAR_0.working_desc);

   if (VAR_0.cheats[VAR_1].code)
      FUNC_0(VAR_0.cheats[VAR_1].code);

   VAR_0.cheats[VAR_1].code = FUNC_2(VAR_0.working_code);

   return 1;
}
