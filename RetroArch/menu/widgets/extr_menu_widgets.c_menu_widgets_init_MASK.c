
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int menu_widget_msg_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int * VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int VAR_4 ;

bool FUNC_6(bool VAR_5)
{
   if (!FUNC_3(VAR_5))
      goto error;

   VAR_3 = 0;

   VAR_4 = FUNC_1(VAR_1 * sizeof(menu_widget_msg_t*));

   if (!VAR_4)
      goto error;

   VAR_2 = (file_list_t*)FUNC_0(1, sizeof(file_list_t));

   if (!VAR_2)
      goto error;

   if (!FUNC_2(VAR_2, VAR_0))
      goto error;

   return 1;

error:
   if (FUNC_5())
      FUNC_4();
   return 0;
}
