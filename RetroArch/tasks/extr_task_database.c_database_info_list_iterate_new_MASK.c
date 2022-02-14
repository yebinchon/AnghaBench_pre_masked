
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int info; TYPE_1__* list; scalar_t__ list_index; } ;
typedef TYPE_2__ database_state_handle_t ;
struct TYPE_5__ {scalar_t__ size; } ;


 char* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int,char const*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(database_state_handle_t *VAR_1,
      const char *VAR_2)
{
   const char *VAR_3 = FUNC_0(VAR_1);


   FUNC_3(VAR_0, "Check database [%d/%d] : %s\n", (unsigned)VAR_1->list_index,
         (unsigned)VAR_1->list->size, VAR_3);

   if (VAR_1->info)
   {
      FUNC_1(VAR_1->info);
      FUNC_4(VAR_1->info);
   }
   VAR_1->info = FUNC_2(VAR_3, VAR_2);
   return 0;
}
