
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int savestate_auto_save; } ;
struct TYPE_9__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_8__ {int savestate; } ;
struct TYPE_10__ {TYPE_2__ name; } ;
typedef TYPE_4__ global_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 (char const*,int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,int ,char*,size_t) ;
 int FUNC_4 (char*) ;
 TYPE_4__ VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9(void)
{
   bool VAR_8 = 0;
   char *VAR_9 = ((void*)0);
   size_t
      VAR_10 = VAR_2 * sizeof(char);
   settings_t *VAR_11 = VAR_4;
   global_t *VAR_12 = &VAR_6;

   if (!VAR_12 || !VAR_11 || !VAR_11->bools.savestate_auto_save)
      return 0;
   if (VAR_5 == VAR_0)
      return 0;

   if (FUNC_8(FUNC_6(FUNC_7(VAR_3))))
      return 0;






   VAR_9 = (char*)
      FUNC_1(VAR_2, sizeof(*VAR_9));

   FUNC_3(VAR_9, VAR_12->name.savestate,
         ".auto", VAR_10);

   VAR_8 = FUNC_2((const char*)VAR_9, 1, 1);
   FUNC_0("%s \"%s\" %s.\n",
         FUNC_5(VAR_1),
         VAR_9, VAR_8 ?
         "succeeded" : "failed");

   FUNC_4(VAR_9);
   return 1;
}
