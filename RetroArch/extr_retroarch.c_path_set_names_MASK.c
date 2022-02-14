
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cheatfile; int savestate; int savefile; } ;
struct TYPE_5__ {TYPE_1__ name; } ;
typedef TYPE_2__ global_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(const char *VAR_4)
{
   global_t *VAR_5 = &VAR_2;

   FUNC_1(VAR_4);

   if (VAR_5)
   {
      if (!FUNC_3(VAR_0, ((void*)0)))
         FUNC_0(VAR_5->name.savefile, VAR_3,
               ".srm", sizeof(VAR_5->name.savefile));

      if (!FUNC_3(VAR_1, ((void*)0)))
         FUNC_0(VAR_5->name.savestate, VAR_3,
               ".state", sizeof(VAR_5->name.savestate));

      FUNC_0(VAR_5->name.cheatfile, VAR_3,
            ".cht", sizeof(VAR_5->name.cheatfile));
   }

   FUNC_2();
}
