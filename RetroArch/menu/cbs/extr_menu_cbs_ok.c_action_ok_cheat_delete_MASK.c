
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct item_cheat {int dummy; } ;
typedef int msg ;
struct TYPE_5__ {size_t idx; } ;
struct TYPE_7__ {int size; TYPE_2__* cheats; TYPE_1__ working_cheat; } ;
struct TYPE_6__ {int * desc; int * code; int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int,int ) ;
 TYPE_4__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (size_t*,int ,int) ;
 size_t FUNC_6 () ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_10 (char*,int ,int) ;

__attribute__((used)) static int FUNC_11(const char *VAR_7,
      const char *VAR_8, unsigned VAR_9, size_t VAR_10, size_t VAR_11)
{
   char VAR_12[256];
   size_t VAR_13 = 0;
   unsigned int VAR_14 = FUNC_0() - 1;

   if (VAR_14 >0)
   {
      unsigned VAR_15;
      if (VAR_6.cheats[VAR_6.working_cheat.idx].code)
      {
         FUNC_2(VAR_6.cheats[VAR_6.working_cheat.idx].code);
         VAR_6.cheats[VAR_6.working_cheat.idx].code = ((void*)0) ;
      }
      if (VAR_6.cheats[VAR_6.working_cheat.idx].desc)
      {
         FUNC_2(VAR_6.cheats[VAR_6.working_cheat.idx].desc);
         VAR_6.cheats[VAR_6.working_cheat.idx].desc = ((void*)0) ;
      }
      for (VAR_15 = VAR_6.working_cheat.idx ; VAR_15 <VAR_6.size-1 ; VAR_15++)
      {
         FUNC_3(&VAR_6.cheats[VAR_15], &VAR_6.cheats[VAR_15+1], sizeof(struct item_cheat ));
         VAR_6.cheats[VAR_15].idx-- ;
      }
      VAR_6.cheats[VAR_6.size-1].code = ((void*)0) ;
      VAR_6.cheats[VAR_6.size-1].desc = ((void*)0) ;
   }

   FUNC_1(VAR_14, VAR_0);

   FUNC_10(VAR_12, FUNC_8(VAR_3), sizeof(VAR_12));
   VAR_12[sizeof(VAR_12) - 1] = 0;

   FUNC_9(VAR_12, 1, 180, 1, ((void*)0), VAR_2, VAR_1);

   VAR_13 = FUNC_6();
   FUNC_5(&VAR_13, 0, 1);
   FUNC_7(VAR_13);

   FUNC_4(VAR_5, ((void*)0));
   FUNC_4(VAR_4, ((void*)0));

   return 0;
}
