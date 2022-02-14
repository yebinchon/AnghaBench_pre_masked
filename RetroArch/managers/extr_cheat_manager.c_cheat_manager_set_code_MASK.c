
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cheats; } ;
struct TYPE_3__ {int state; int code; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (char const*) ;

void FUNC_2(unsigned VAR_1, const char *VAR_2)
{
   if (!VAR_0.cheats)
      return;

   if (!FUNC_1(VAR_2))
      FUNC_0(VAR_0.cheats[VAR_1].code, VAR_2);

   VAR_0.cheats[VAR_1].state = 1;
}
