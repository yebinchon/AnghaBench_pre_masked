
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int playlist_t ;
struct TYPE_6__ {scalar_t__ status; scalar_t__ delay_timer; } ;
typedef TYPE_1__ menu_thumbnail_t ;
typedef int menu_thumbnail_path_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 float FUNC_0 () ;
 int FUNC_1 (int *,int ,int *,size_t,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *,size_t) ;
 scalar_t__ VAR_4 ;

void FUNC_4(
      menu_thumbnail_path_data_t *VAR_5,
      playlist_t *VAR_6, size_t VAR_7,
      menu_thumbnail_t *VAR_8, menu_thumbnail_t *VAR_9,
      bool VAR_10)
{
   if (!VAR_8 || !VAR_9)
      return;

   if (VAR_10)
   {



      bool VAR_11 = (VAR_8->status == VAR_3);
      bool VAR_12 = (VAR_9->status == VAR_3);

      if (VAR_11 || VAR_12)
      {

         float VAR_13 = FUNC_0();
         bool VAR_14 = 0;
         bool VAR_15 = 0;

         if (VAR_11)
         {
            VAR_8->delay_timer += VAR_13;
            VAR_14 =
                  (VAR_8->delay_timer > VAR_4);
         }

         if (VAR_12)
         {
            VAR_9->delay_timer += VAR_13;
            VAR_15 =
                  (VAR_9->delay_timer > VAR_4);
         }


         if (VAR_14 || VAR_15)
         {

            if (!VAR_5 || !VAR_6)
               return;


            if (!FUNC_3(VAR_5, VAR_6, VAR_7))
            {


               if (VAR_14)
               {
                  FUNC_2(VAR_8);
                  VAR_8->status = VAR_2;
               }

               if (VAR_15)
               {
                  FUNC_2(VAR_9);
                  VAR_9->status = VAR_2;
               }

               return;
            }


            if (VAR_14)
               FUNC_1(
                     VAR_5, VAR_1, VAR_6, VAR_7, VAR_8);

            if (VAR_15)
               FUNC_1(
                     VAR_5, VAR_0, VAR_6, VAR_7, VAR_9);
         }
      }
   }
   else
   {





      if (VAR_8->status == VAR_3)
         VAR_8->delay_timer = 0.0f;
      else
         FUNC_2(VAR_8);

      if (VAR_9->status == VAR_3)
         VAR_9->delay_timer = 0.0f;
      else
         FUNC_2(VAR_9);
   }
}
