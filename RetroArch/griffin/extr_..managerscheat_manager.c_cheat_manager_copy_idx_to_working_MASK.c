
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct item_cheat {int dummy; } ;
struct TYPE_4__ {unsigned int size; char* working_desc; char* working_code; TYPE_1__* cheats; int working_cheat; } ;
struct TYPE_3__ {scalar_t__ code; scalar_t__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (char*,scalar_t__,int ) ;

bool FUNC_2(unsigned VAR_3)
{
   if ((!VAR_2.cheats) || (VAR_2.size < VAR_3 + 1))
      return 0;

   FUNC_0(&(VAR_2.working_cheat), &(VAR_2.cheats[VAR_3]), sizeof(struct item_cheat));

   if (VAR_2.cheats[VAR_3].desc)
      FUNC_1(VAR_2.working_desc, VAR_2.cheats[VAR_3].desc, VAR_1);
   else
      VAR_2.working_desc[0] = '\0';

   if (VAR_2.cheats[VAR_3].code)
      FUNC_1(VAR_2.working_code, VAR_2.cheats[VAR_3].code, VAR_0);
   else
      VAR_2.working_code[0] = '\0';

   return 1;
}
