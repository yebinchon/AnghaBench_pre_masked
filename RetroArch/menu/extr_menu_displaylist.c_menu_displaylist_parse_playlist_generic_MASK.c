
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int playlist_t ;
typedef int menu_handle_t ;
typedef int menu_displaylist_info_t ;


 int FUNC_0 (int *,int *,char const*,int) ;
 int FUNC_1 (int *,char const*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
      menu_handle_t *VAR_0,
      menu_displaylist_info_t *VAR_1,
      const char *VAR_2,
      const char *VAR_3,
      bool VAR_4,
      bool VAR_5,
      int *VAR_6)
{
   playlist_t *VAR_7 = ((void*)0);

   FUNC_1(VAR_0, VAR_3);

   VAR_7 = FUNC_2();

   if (!VAR_7)
      return;

   if (VAR_5)
      FUNC_3(VAR_7);

   *VAR_6 = FUNC_0(VAR_1,
         VAR_7, VAR_2, VAR_4);
}
