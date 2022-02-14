
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ state_slot; } ;
struct TYPE_7__ {int rewind_granularity; } ;
struct TYPE_9__ {TYPE_2__ ints; TYPE_1__ uints; } ;
typedef TYPE_3__ settings_t ;
typedef int path ;
typedef int msg ;
struct TYPE_10__ {char* movie_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_4 ;
 int FUNC_2 (char*,int ) ;
 TYPE_6__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 TYPE_3__* VAR_7 ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static bool FUNC_9(void)
{
   char VAR_8[16384], VAR_9[8192];
   settings_t *VAR_10 = VAR_7;

   VAR_8[0] = VAR_9[0] = '\0';

   FUNC_3(VAR_10, VAR_10->uints.rewind_granularity, 1);

   if (VAR_10->ints.state_slot > 0)
      FUNC_6(VAR_9, sizeof(VAR_9), "%s%d.bsv",
            VAR_5.movie_path,
            VAR_10->ints.state_slot);
   else
   {
      FUNC_8(VAR_9, VAR_5.movie_path, sizeof(VAR_9));
      FUNC_7(VAR_9, ".bsv", sizeof(VAR_9));
   }


   FUNC_6(VAR_8, sizeof(VAR_8), "%s \"%s\".",
         FUNC_4(VAR_3),
         VAR_9);

   FUNC_2(VAR_9, VAR_4);

   if (!VAR_6)
   {
      FUNC_5(
            FUNC_4(VAR_2),
            2, 180, 1,
            ((void*)0), VAR_1, VAR_0);
      FUNC_0("%s\n",
            FUNC_4(VAR_2));
      return 0;
   }

   FUNC_5(VAR_8, 2, 180, 1, ((void*)0), VAR_1, VAR_0);
   FUNC_1("%s \"%s\".\n",
         FUNC_4(VAR_3),
         VAR_9);

   return 1;
}
