
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ categories_selection_ptr; int is_playlist; scalar_t__ categories_active_idx_old; void* is_quick_menu; void* is_db_manager_list; } ;
typedef TYPE_1__ xmb_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (char const*,int ) ;
 unsigned int FUNC_3 (TYPE_1__*,unsigned int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(void *VAR_12,
      const char *VAR_13,
      const char *VAR_14, unsigned VAR_15)
{
   xmb_handle_t *VAR_16 = (xmb_handle_t*)VAR_12;
   unsigned VAR_17;

   if (!VAR_16)
      return;


   VAR_17 = FUNC_3(VAR_16, (unsigned)VAR_16->categories_selection_ptr);
   VAR_16->is_playlist = (VAR_17 == VAR_9) ||
                      (VAR_17 == VAR_10) ||



                      FUNC_2(VAR_14, FUNC_1(VAR_6)) ||
                      FUNC_2(VAR_14, FUNC_1(VAR_3)) ||
                      FUNC_2(VAR_14, FUNC_1(VAR_1)) ||
                      FUNC_2(VAR_14, FUNC_1(VAR_2));
   VAR_16->is_playlist = VAR_16->is_playlist && !FUNC_2(VAR_14, FUNC_1(VAR_4));


   VAR_16->is_db_manager_list = FUNC_2(VAR_14, FUNC_1(VAR_0));


   VAR_16->is_quick_menu = FUNC_2(VAR_14, FUNC_1(VAR_5));

   if (FUNC_0(VAR_7, ((void*)0)))
   {
      FUNC_6(VAR_16, 0);
      FUNC_0(VAR_8, ((void*)0));
      return;
   }

   FUNC_7(VAR_16);

   if (VAR_16->categories_selection_ptr != VAR_16->categories_active_idx_old)
      FUNC_5(VAR_16);
   else
      FUNC_4(VAR_16);
}
