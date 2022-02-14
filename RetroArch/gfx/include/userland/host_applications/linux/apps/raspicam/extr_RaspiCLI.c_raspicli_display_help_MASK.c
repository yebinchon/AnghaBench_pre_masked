
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* abbrev; char* command; char* help; } ;
typedef TYPE_1__ COMMAND_LIST ;


 int FUNC_0 (int ,char*,char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__ const*) ;

void FUNC_2(const COMMAND_LIST *VAR_1, const int VAR_2)
{
   int VAR_3;

   FUNC_1(VAR_1);

   if (!VAR_1)
      return;

   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   {
      FUNC_0(VAR_0, "-%s, -%s\t: %s\n", VAR_1[VAR_3].abbrev,
              VAR_1[VAR_3].command, VAR_1[VAR_3].help);
   }
}
