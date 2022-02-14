
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int playlist_t ;
typedef int file_list_t ;
typedef enum playlist_thumbnail_mode { ____Placeholder_playlist_thumbnail_mode } playlist_thumbnail_mode ;
typedef enum playlist_thumbnail_id { ____Placeholder_playlist_thumbnail_id } playlist_thumbnail_id ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
typedef enum menu_settings_type { ____Placeholder_menu_settings_type } menu_settings_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 scalar_t__ FUNC_0 (int *,int ,char*,int ,int,int ,int ) ;
 int FUNC_1 (int *,size_t,int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static unsigned FUNC_5(
      file_list_t *VAR_9, enum playlist_thumbnail_id VAR_10)
{
   unsigned VAR_11 = 0;
   playlist_t *VAR_12 = FUNC_3();

   if (VAR_9 && VAR_12)
   {
      size_t VAR_13;

      enum playlist_thumbnail_mode VAR_14 =
            FUNC_4(VAR_12, VAR_10);

      enum menu_settings_type VAR_15 =
            (VAR_10 == VAR_8) ?
                  VAR_7 :
                  VAR_6;


      for (VAR_13 = 0; VAR_13 <= (unsigned)131; VAR_13++)
      {
         enum msg_hash_enums VAR_16;
         enum playlist_thumbnail_mode VAR_17 =
               (enum playlist_thumbnail_mode)VAR_13;


         switch (VAR_17)
         {
            case 130:
               VAR_16 = VAR_1;
               break;
            case 129:
               VAR_16 = VAR_4;
               break;
            case 128:
               VAR_16 = VAR_5;
               break;
            case 131:
               VAR_16 = VAR_3;
               break;
            default:

               VAR_16 = VAR_2;
               break;
         }


         if (FUNC_0(VAR_9,
               FUNC_2(VAR_16),
               "",
               VAR_0,
               VAR_15,
               0, 0))
            VAR_11++;


         if (VAR_14 == VAR_17)
            FUNC_1(VAR_9, VAR_13, 1);
      }
   }

   return VAR_11;
}
