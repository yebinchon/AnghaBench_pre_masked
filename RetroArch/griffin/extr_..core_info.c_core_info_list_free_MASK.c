
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t firmware_count; TYPE_2__* firmware; scalar_t__ config_data; int required_hw_api_list; int databases_list; int categories_list; int licenses_list; int permissions_list; int note_list; int authors_list; int supported_extensions_list; TYPE_2__* required_hw_api; TYPE_2__* notes; TYPE_2__* databases; TYPE_2__* categories; TYPE_2__* licenses; TYPE_2__* permissions; TYPE_2__* authors; TYPE_2__* supported_extensions; TYPE_2__* display_version; TYPE_2__* display_name; TYPE_2__* system_manufacturer; TYPE_2__* system_id; TYPE_2__* systemname; TYPE_2__* core_name; TYPE_2__* path; } ;
typedef TYPE_1__ core_info_t ;
struct TYPE_6__ {size_t count; struct TYPE_6__* list; struct TYPE_6__* all_ext; struct TYPE_6__* desc; struct TYPE_6__* path; } ;
typedef TYPE_2__ core_info_list_t ;
typedef int config_file_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(core_info_list_t *VAR_0)
{
   size_t VAR_1, VAR_2;

   if (!VAR_0)
      return;

   for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
   {
      core_info_t *VAR_3 = (core_info_t*)&VAR_0->list[VAR_1];

      FUNC_1(VAR_3->path);
      FUNC_1(VAR_3->core_name);
      FUNC_1(VAR_3->systemname);
      FUNC_1(VAR_3->system_id);
      FUNC_1(VAR_3->system_manufacturer);
      FUNC_1(VAR_3->display_name);
      FUNC_1(VAR_3->display_version);
      FUNC_1(VAR_3->supported_extensions);
      FUNC_1(VAR_3->authors);
      FUNC_1(VAR_3->permissions);
      FUNC_1(VAR_3->licenses);
      FUNC_1(VAR_3->categories);
      FUNC_1(VAR_3->databases);
      FUNC_1(VAR_3->notes);
      FUNC_1(VAR_3->required_hw_api);
      FUNC_2(VAR_3->supported_extensions_list);
      FUNC_2(VAR_3->authors_list);
      FUNC_2(VAR_3->note_list);
      FUNC_2(VAR_3->permissions_list);
      FUNC_2(VAR_3->licenses_list);
      FUNC_2(VAR_3->categories_list);
      FUNC_2(VAR_3->databases_list);
      FUNC_2(VAR_3->required_hw_api_list);
      FUNC_0((config_file_t*)VAR_3->config_data);

      for (VAR_2 = 0; VAR_2 < VAR_3->firmware_count; VAR_2++)
      {
         FUNC_1(VAR_3->firmware[VAR_2].path);
         FUNC_1(VAR_3->firmware[VAR_2].desc);
      }
      FUNC_1(VAR_3->firmware);
   }

   FUNC_1(VAR_0->all_ext);
   FUNC_1(VAR_0->list);
   FUNC_1(VAR_0);
}
