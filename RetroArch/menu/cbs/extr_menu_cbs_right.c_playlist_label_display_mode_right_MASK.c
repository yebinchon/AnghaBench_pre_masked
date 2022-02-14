
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int playlist_t ;
typedef enum playlist_label_display_mode { ____Placeholder_playlist_label_display_mode } playlist_label_display_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(unsigned VAR_2, const char *VAR_3,
      bool VAR_4)
{
   enum playlist_label_display_mode VAR_5;
   playlist_t *VAR_6 = FUNC_0();

   if (!VAR_6)
      return -1;

   VAR_5 = FUNC_1(VAR_6);

   if (VAR_5 != VAR_1)
      VAR_5 = (enum playlist_label_display_mode)((int)VAR_5 + 1);
   else if (VAR_4)
      VAR_5 = VAR_0;

   FUNC_2(VAR_6, VAR_5);
   FUNC_3(VAR_6);

   return 0;
}
