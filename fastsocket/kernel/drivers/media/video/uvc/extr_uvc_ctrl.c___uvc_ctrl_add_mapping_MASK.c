
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_device {int dummy; } ;
struct uvc_control_mapping {int menu_count; int name; int list; TYPE_1__* ctrl; int * set; int * get; struct uvc_control_mapping const* menu_info; } ;
struct TYPE_2__ {int selector; int entity; int mappings; } ;
struct uvc_control {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uvc_control_mapping*) ;
 void* FUNC_1 (struct uvc_control_mapping const*,unsigned int,int ) ;
 int FUNC_2 (int *,int *) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct uvc_device *VAR_5,
 struct uvc_control *VAR_6, const struct uvc_control_mapping *VAR_7)
{
 struct uvc_control_mapping *VAR_8;
 unsigned int VAR_9;





 VAR_8 = FUNC_1(VAR_7, sizeof(*VAR_7), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_9 = sizeof(*VAR_7->menu_info) * VAR_7->menu_count;
 VAR_8->menu_info = FUNC_1(VAR_7->menu_info, VAR_9, VAR_1);
 if (VAR_8->menu_info == ((void*)0)) {
  FUNC_0(VAR_8);
  return -VAR_0;
 }

 if (VAR_8->get == ((void*)0))
  VAR_8->get = VAR_3;
 if (VAR_8->set == ((void*)0))
  VAR_8->set = VAR_4;

 VAR_8->ctrl = &VAR_6->info;
 FUNC_2(&VAR_8->list, &VAR_6->info.mappings);
 FUNC_3(VAR_2,
  "Adding mapping '%s' to control %pUl/%u.\n",
  VAR_8->name, VAR_6->info.entity, VAR_6->info.selector);

 return 0;
}
