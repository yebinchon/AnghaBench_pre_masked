
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct playlist_entry {int dummy; } ;
struct TYPE_5__ {int modified; size_t cap; void* left_thumbnail_mode; void* right_thumbnail_mode; int label_display_mode; struct playlist_entry* entries; int * default_core_path; int * default_core_name; int conf_path; scalar_t__ size; } ;
typedef TYPE_1__ playlist_t ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (char const*) ;

playlist_t *FUNC_5(const char *VAR_2, size_t VAR_3)
{
   struct playlist_entry *VAR_4 = ((void*)0);
   playlist_t *VAR_5 = (playlist_t*)FUNC_2(sizeof(*VAR_5));
   if (!VAR_5)
      return ((void*)0);

   VAR_4 = (struct playlist_entry*)FUNC_0(VAR_3, sizeof(*VAR_4));
   if (!VAR_4)
   {
      FUNC_1(VAR_5);
      return ((void*)0);
   }

   VAR_5->modified = 0;
   VAR_5->size = 0;
   VAR_5->cap = VAR_3;
   VAR_5->conf_path = FUNC_4(VAR_2);
   VAR_5->default_core_name = ((void*)0);
   VAR_5->default_core_path = ((void*)0);
   VAR_5->entries = VAR_4;
   VAR_5->label_display_mode = VAR_0;
   VAR_5->right_thumbnail_mode = VAR_1;
   VAR_5->left_thumbnail_mode = VAR_1;

   FUNC_3(VAR_5, VAR_2);

   return VAR_5;
}
