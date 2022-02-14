
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int menu_materialui_thumbnail_view_portrait; int menu_materialui_thumbnail_view_landscape; } ;
struct TYPE_7__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {int primary_thumbnail_available; void* list_view_type; scalar_t__ is_portrait; int thumbnail_path_data; int is_playlist; } ;
typedef TYPE_3__ materialui_handle_t ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(
      materialui_handle_t *VAR_7, settings_t *VAR_8)
{
   if (!VAR_7->is_playlist)
   {



      VAR_7->list_view_type = VAR_1;
      VAR_7->primary_thumbnail_available = 0;
   }
   else
   {


      VAR_7->list_view_type = VAR_2;


      VAR_7->primary_thumbnail_available =
            FUNC_0(VAR_7->thumbnail_path_data, VAR_0);

      if (VAR_7->primary_thumbnail_available)
      {


         if (VAR_7->is_portrait)
         {
            switch (VAR_8->uints.menu_materialui_thumbnail_view_portrait)
            {
               case 128:
                  VAR_7->list_view_type = VAR_6;
                  break;
               case 129:
                  VAR_7->list_view_type = VAR_5;
                  break;
               case 130:
                  VAR_7->list_view_type = VAR_3;
                  break;
               case 131:
               default:
                  VAR_7->list_view_type = VAR_2;
                  break;
            }
         }
         else
         {
            switch (VAR_8->uints.menu_materialui_thumbnail_view_landscape)
            {
               case 132:
                  VAR_7->list_view_type = VAR_6;
                  break;
               case 133:
                  VAR_7->list_view_type = VAR_5;
                  break;
               case 134:
                  VAR_7->list_view_type = VAR_4;
                  break;
               case 135:
               default:
                  VAR_7->list_view_type = VAR_2;
                  break;
            }
         }
      }
   }
}
