
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int playlist_t ;
typedef int file_list_t ;
typedef enum playlist_label_display_mode { ____Placeholder_playlist_label_display_mode } playlist_label_display_mode ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char const* FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_4(
      file_list_t* VAR_7,
      unsigned *VAR_8, unsigned VAR_9, unsigned VAR_10,
      const char *VAR_11,
      char *VAR_12, size_t VAR_13,
      const char *VAR_14,
      char *VAR_15, size_t VAR_16)
{
   enum playlist_label_display_mode VAR_17;
   playlist_t *VAR_18 = FUNC_1();

   if (!VAR_18)
      return;

   VAR_17 = FUNC_2(VAR_18);

   *VAR_8 = 19;

   FUNC_3(VAR_15, VAR_14, VAR_16);

   switch (VAR_17)
   {
      case 129 :
         FUNC_3(VAR_12, FUNC_0(VAR_5), VAR_13);
         break;
      case 130 :
         FUNC_3(VAR_12, FUNC_0(VAR_4), VAR_13);
         break;
      case 128 :
         FUNC_3(VAR_12, FUNC_0(VAR_6), VAR_13);
         break;
      case 133 :
         FUNC_3(VAR_12, FUNC_0(VAR_1), VAR_13);
         break;
      case 132 :
         FUNC_3(VAR_12, FUNC_0(VAR_2), VAR_13);
         break;
      case 131 :
         FUNC_3(VAR_12, FUNC_0(VAR_3), VAR_13);
         break;
      default:
         FUNC_3(VAR_12, FUNC_0(VAR_0), VAR_13);
   }
}
