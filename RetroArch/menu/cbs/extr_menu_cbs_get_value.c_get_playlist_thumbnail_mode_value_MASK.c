
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int playlist_t ;
typedef enum playlist_thumbnail_mode { ____Placeholder_playlist_thumbnail_mode } playlist_thumbnail_mode ;
typedef enum playlist_thumbnail_id { ____Placeholder_playlist_thumbnail_id } playlist_thumbnail_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 char const* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static const char *FUNC_2(playlist_t *VAR_5, enum playlist_thumbnail_id VAR_6)
{
   enum playlist_thumbnail_mode VAR_7 =
         FUNC_1(VAR_5, VAR_6);

   switch (VAR_7)
   {
      case 130:
         return FUNC_0(VAR_0);
      case 129:
         return FUNC_0(VAR_3);
      case 128:
         return FUNC_0(VAR_4);
      case 131:
         return FUNC_0(VAR_2);
      default:

         break;
   }

   return FUNC_0(VAR_1);
}
