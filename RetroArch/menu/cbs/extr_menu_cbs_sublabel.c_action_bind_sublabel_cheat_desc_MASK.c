
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int file_list_t ;
struct TYPE_4__ {TYPE_1__* cheats; } ;
struct TYPE_3__ {scalar_t__ handler; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_1(
      file_list_t *VAR_3,
      unsigned VAR_4, unsigned VAR_5,
      const char *VAR_6, const char *VAR_7,
      char *VAR_8, size_t VAR_9)
{
   unsigned VAR_10 = (VAR_4 - VAR_1);

   if (VAR_2.cheats)
   {
      if (VAR_2.cheats[VAR_10].handler == VAR_0)
         FUNC_0(VAR_8, "Emulator-Handled", VAR_9);
      else
         FUNC_0(VAR_8, "RetroArch-Handled", VAR_9);
   }

   return 0;
}
