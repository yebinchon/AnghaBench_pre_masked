
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ content_favorites_size; } ;
struct TYPE_7__ {unsigned int content_history_size; } ;
struct TYPE_9__ {TYPE_2__ ints; TYPE_1__ uints; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_10__ {char* db_playlist_file; } ;
typedef TYPE_4__ menu_handle_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*,unsigned int) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,int ) ;
 int FUNC_8 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_9(
      menu_handle_t *VAR_6, const char *VAR_7)
{
   unsigned VAR_8 = VAR_0;
   const char *VAR_9 = FUNC_2(VAR_7);
   settings_t *VAR_10 = FUNC_0();

   VAR_6->db_playlist_file[0] = '\0';

   if (FUNC_4())
      FUNC_3();


   if (VAR_10 && !FUNC_6(VAR_9))
   {
      if (FUNC_7(VAR_9, FUNC_1(VAR_2)) ||
          FUNC_7(VAR_9, FUNC_1(VAR_4)) ||
          FUNC_7(VAR_9, FUNC_1(VAR_5)) ||
          FUNC_7(VAR_9, FUNC_1(VAR_3)))
         VAR_8 = VAR_10->uints.content_history_size;
      else if (FUNC_7(VAR_9, FUNC_1(VAR_1)))
         if (VAR_10->ints.content_favorites_size >= 0)
            VAR_8 = (unsigned)VAR_10->ints.content_favorites_size;
   }

   if (FUNC_5(VAR_7, VAR_8))
      FUNC_8(
            VAR_6->db_playlist_file,
            VAR_7,
            sizeof(VAR_6->db_playlist_file));
}
