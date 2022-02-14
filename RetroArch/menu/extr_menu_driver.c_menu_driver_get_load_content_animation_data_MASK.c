
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int menu_texture_item ;
struct TYPE_2__ {scalar_t__ (* get_load_content_animation_data ) (int ,int *,char**) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,char**) ;

bool FUNC_1(menu_texture_item *VAR_2, char **VAR_3)
{
   return VAR_0 && VAR_0->get_load_content_animation_data
      && VAR_0->get_load_content_animation_data(VAR_1, VAR_2, VAR_3);
}
