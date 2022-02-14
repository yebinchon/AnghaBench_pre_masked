
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int mode; } ;
struct TYPE_9__ {TYPE_2__ stat; int name; } ;
typedef TYPE_3__ iox_dirent_t ;
struct TYPE_10__ {size_t current_folder_position; size_t items; TYPE_1__* FileEntry; } ;
struct TYPE_7__ {scalar_t__ dircheck; int filename; } ;
typedef TYPE_4__ DescriptorTranslation ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_2, iox_dirent_t *VAR_3)
{
   DescriptorTranslation *VAR_4 = FUNC_0(VAR_2);

   if (VAR_4 && VAR_4->current_folder_position < VAR_4->items) {
      FUNC_1(VAR_3->name, VAR_4->FileEntry[VAR_4->current_folder_position].filename);
      if (VAR_4->FileEntry[VAR_4->current_folder_position].dircheck) {
         VAR_3->stat.mode = VAR_0;
      } else {
         VAR_3->stat.mode = VAR_1;
      }
      VAR_4->current_folder_position++;
   } else {
      VAR_4->current_folder_position = 0;
      return 0;
   }

   return 1;
}
