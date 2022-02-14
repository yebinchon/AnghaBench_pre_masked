
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum playlist_thumbnail_mode { ____Placeholder_playlist_thumbnail_mode } playlist_thumbnail_mode ;
typedef enum playlist_label_display_mode { ____Placeholder_playlist_label_display_mode } playlist_label_display_mode ;
struct TYPE_2__ {int object_depth; int array_depth; int* current_entry_int_val; unsigned int* current_entry_uint_val; int* current_meta_label_display_mode_val; int* current_meta_thumbnail_mode_val; int * current_meta_string; scalar_t__ in_items; } ;
typedef int JSON_StringAttributes ;
typedef int JSON_Parser_HandlerResult ;
typedef int JSON_Parser ;
typedef TYPE_1__ JSONContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int *,int) ;

__attribute__((used)) static JSON_Parser_HandlerResult FUNC_4(JSON_Parser VAR_1, char *VAR_2, size_t VAR_3, JSON_StringAttributes VAR_4)
{
   JSONContext *VAR_5 = (JSONContext*)FUNC_0(VAR_1);
   (void)VAR_4;

   if (VAR_5->in_items && VAR_5->object_depth == 2)
   {
      if (VAR_5->array_depth == 1)
      {
         if (VAR_5->current_entry_int_val && VAR_3 && !FUNC_2(VAR_2))
            *VAR_5->current_entry_int_val = (int)FUNC_3(VAR_2, ((void*)0), 10);
         else if (VAR_5->current_entry_uint_val && VAR_3 && !FUNC_2(VAR_2))
            *VAR_5->current_entry_uint_val = (unsigned)FUNC_3(VAR_2, ((void*)0), 10);
         else
         {

         }
      }
   }
   else if (VAR_5->object_depth == 1)
   {
      if (VAR_5->array_depth == 0)
      {
         if (VAR_5->current_meta_string && VAR_3 && !FUNC_2(VAR_2))
         {



            FUNC_1(VAR_5->current_meta_string);
            VAR_5->current_meta_string = ((void*)0);

            if (VAR_5->current_meta_label_display_mode_val)
               *VAR_5->current_meta_label_display_mode_val = (enum playlist_label_display_mode)FUNC_3(VAR_2, ((void*)0), 10);
            else if (VAR_5->current_meta_thumbnail_mode_val)
               *VAR_5->current_meta_thumbnail_mode_val = (enum playlist_thumbnail_mode)FUNC_3(VAR_2, ((void*)0), 10);
            else
            {

            }
         }
      }
   }

   VAR_5->current_entry_int_val = ((void*)0);
   VAR_5->current_entry_uint_val = ((void*)0);
   VAR_5->current_meta_label_display_mode_val = ((void*)0);
   VAR_5->current_meta_thumbnail_mode_val = ((void*)0);

   return VAR_0;
}
