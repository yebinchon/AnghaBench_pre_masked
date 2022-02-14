
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int playlist_t ;
struct TYPE_4__ {int rpl_entry_selection_ptr; } ;
typedef TYPE_1__ menu_handle_t ;
struct TYPE_5__ {int * content_favorites; int * image_history; int * video_history; int * music_history; int * content_history; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (size_t*,int ,int) ;
 size_t FUNC_3 () ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 () ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_1,
      const char *VAR_2, unsigned VAR_3, size_t VAR_4, size_t VAR_5)
{
   size_t VAR_6;
   char *VAR_7 = ((void*)0);
   char *VAR_8 = ((void*)0);
   char *VAR_9 = ((void*)0);






   char *VAR_10 = ((void*)0);
   playlist_t *VAR_11 = FUNC_6();
   menu_handle_t *VAR_12 = FUNC_1();

   if (!VAR_12)
      return FUNC_0();

   VAR_7 = FUNC_7(VAR_11);
   VAR_8 = FUNC_7(VAR_0.content_history);
   VAR_9 = FUNC_7(VAR_0.music_history);






   VAR_10 = FUNC_7(VAR_0.content_favorites);

   if (FUNC_9(VAR_7, VAR_8))
      VAR_11 = VAR_0.content_history;
   else if (FUNC_9(VAR_7, VAR_9))
      VAR_11 = VAR_0.music_history;
   else if (FUNC_9(VAR_7, VAR_10))
      VAR_11 = VAR_0.content_favorites;

   if (VAR_11)
   {
      FUNC_5(VAR_11, VAR_12->rpl_entry_selection_ptr);
      FUNC_8(VAR_11);
   }

   VAR_6 = FUNC_3();
   FUNC_2(&VAR_6, 0, 1);
   FUNC_4(VAR_6);

   return 0;
}
