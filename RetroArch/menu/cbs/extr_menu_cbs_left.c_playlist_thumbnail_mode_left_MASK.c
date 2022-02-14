
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int playlist_t ;
typedef enum playlist_thumbnail_mode { ____Placeholder_playlist_thumbnail_mode } playlist_thumbnail_mode ;
typedef enum playlist_thumbnail_id { ____Placeholder_playlist_thumbnail_id } playlist_thumbnail_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(playlist_t *VAR_2, enum playlist_thumbnail_id VAR_3,
      bool VAR_4)
{
   enum playlist_thumbnail_mode VAR_5 =
         FUNC_0(VAR_2, VAR_3);

   if (VAR_5 > VAR_1)
      VAR_5 = (enum playlist_thumbnail_mode)((unsigned)VAR_5 - 1);
   else if (VAR_4)
      VAR_5 = VAR_0;

   FUNC_1(VAR_2, VAR_3, VAR_5);
   FUNC_2(VAR_2);
}
