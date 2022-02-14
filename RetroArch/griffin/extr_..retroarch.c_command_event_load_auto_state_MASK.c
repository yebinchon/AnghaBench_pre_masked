
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int savestate_auto_load; } ;
struct TYPE_9__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_8__ {int savestate; } ;
struct TYPE_10__ {TYPE_2__ name; } ;
typedef TYPE_4__ global_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*,int ,char*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int ,char*,size_t) ;
 int FUNC_4 (char*) ;
 TYPE_4__ VAR_5 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_8(void)
{
   bool VAR_7 = 0;
   char *VAR_8 = ((void*)0);
   size_t VAR_9 = VAR_2 * sizeof(char);
   settings_t *VAR_10 = VAR_4;
   global_t *VAR_11 = &VAR_5;

   if (!VAR_11 || !VAR_10->bools.savestate_auto_load)
      return;
   VAR_8 = (char*)FUNC_1(VAR_2,
         sizeof(*VAR_8));

   FUNC_3(VAR_8, VAR_11->name.savestate,
         ".auto", VAR_9);

   if (!FUNC_7(VAR_8))
   {
      FUNC_4(VAR_8);
      return;
   }

   VAR_7 = FUNC_2(VAR_8, 0, 1);

   FUNC_0("%s: %s\n%s \"%s\" %s.\n",
         FUNC_5(VAR_1),
         VAR_8,
         FUNC_5(VAR_0),
         VAR_8, VAR_7 ? "succeeded" : "failed"
         );

   FUNC_4(VAR_8);
}
