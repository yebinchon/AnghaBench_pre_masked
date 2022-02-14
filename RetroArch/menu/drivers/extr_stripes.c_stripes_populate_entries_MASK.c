
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ categories_selection_ptr; scalar_t__ categories_active_idx_old; } ;
typedef TYPE_1__ stripes_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(void *VAR_3,
      const char *VAR_4,
      const char *VAR_5, unsigned VAR_6)
{
   stripes_handle_t *VAR_7 = (stripes_handle_t*)VAR_3;

   if (!VAR_7)
      return;

   if (FUNC_0(VAR_1, ((void*)0)))
   {
      FUNC_5(VAR_7, 0);
      FUNC_0(VAR_2, ((void*)0));
      if (!FUNC_2(FUNC_7('R'),
               FUNC_1(VAR_0)))
         FUNC_9(VAR_7);
      FUNC_8(VAR_7);
      if (!FUNC_2(FUNC_7('L'),
               FUNC_1(VAR_0)))
         FUNC_9(VAR_7);
      return;
   }

   FUNC_6(VAR_7);

   if (VAR_7->categories_selection_ptr != VAR_7->categories_active_idx_old)
      FUNC_4(VAR_7);
   else
      FUNC_3(VAR_7);
}
