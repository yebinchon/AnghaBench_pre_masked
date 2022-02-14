
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct item_cheat {int idx; void* desc; void* code; } ;
typedef int msg ;
struct TYPE_3__ {size_t idx; } ;
struct TYPE_4__ {int size; TYPE_1__ working_cheat; struct item_cheat* cheats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int,int ) ;
 TYPE_2__ VAR_6 ;
 int FUNC_2 (struct item_cheat*,struct item_cheat*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int,int,int *,int ,int ) ;
 void* FUNC_7 (void*) ;
 int FUNC_8 (char*,int ,int) ;

__attribute__((used)) static int FUNC_9(const char *VAR_7,
      const char *VAR_8, unsigned VAR_9, size_t VAR_10, size_t VAR_11)
{
   int VAR_12;
   struct item_cheat VAR_13;
   char VAR_14[256];
   bool VAR_15 = 0 ;
   unsigned int VAR_16 = FUNC_0() + 1;

   FUNC_1(VAR_16, VAR_0);

   FUNC_2(&VAR_13, &VAR_6.cheats[VAR_6.working_cheat.idx], sizeof(struct item_cheat));
   VAR_13.idx = VAR_6.working_cheat.idx+1 ;
   if (VAR_13.code)
      VAR_13.code = FUNC_7(VAR_13.code);
   if (VAR_13.desc)
      VAR_13.desc = FUNC_7(VAR_13.desc);

   for (VAR_12 = VAR_6.size-2 ; VAR_12 >= (int)(VAR_6.working_cheat.idx+1); VAR_12--)
   {
      FUNC_2(&VAR_6.cheats[VAR_12+1], &VAR_6.cheats[VAR_12], sizeof(struct item_cheat));
      VAR_6.cheats[VAR_12+1].idx++ ;
   }

   FUNC_2(&VAR_6.cheats[VAR_6.working_cheat.idx+1], &VAR_13, sizeof(struct item_cheat ));

   FUNC_4(VAR_1, &VAR_15);
   FUNC_3(VAR_5, ((void*)0));

   FUNC_8(VAR_14, FUNC_5(VAR_4), sizeof(VAR_14));
   VAR_14[sizeof(VAR_14) - 1] = 0;

   FUNC_6(VAR_14, 1, 180, 1, ((void*)0), VAR_3, VAR_2);

   return 0 ;
}
