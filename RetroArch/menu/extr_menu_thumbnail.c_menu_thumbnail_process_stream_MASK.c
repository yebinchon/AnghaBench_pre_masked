
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int playlist_t ;
struct TYPE_5__ {scalar_t__ status; scalar_t__ delay_timer; } ;
typedef TYPE_1__ menu_thumbnail_t ;
typedef int menu_thumbnail_path_data_t ;
typedef enum menu_thumbnail_id { ____Placeholder_menu_thumbnail_id } menu_thumbnail_id ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int,int *,size_t,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *,size_t) ;
 scalar_t__ VAR_2 ;

void FUNC_4(
      menu_thumbnail_path_data_t *VAR_3, enum menu_thumbnail_id VAR_4,
      playlist_t *VAR_5, size_t VAR_6, menu_thumbnail_t *VAR_7, bool VAR_8)
{
   if (!VAR_7)
      return;

   if (VAR_8)
   {



      if (VAR_7->status == VAR_1)
      {

         VAR_7->delay_timer += FUNC_0();

         if (VAR_7->delay_timer > VAR_2)
         {

            if (!VAR_3 || !VAR_5)
               return;


            if (!FUNC_3(VAR_3, VAR_5, VAR_6))
            {


               FUNC_2(VAR_7);
               VAR_7->status = VAR_0;
               return;
            }


            FUNC_1(
                  VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
         }
      }
   }
   else
   {




      if (VAR_7->status == VAR_1)
         VAR_7->delay_timer = 0.0f;

      else
         FUNC_2(VAR_7);
   }
}
