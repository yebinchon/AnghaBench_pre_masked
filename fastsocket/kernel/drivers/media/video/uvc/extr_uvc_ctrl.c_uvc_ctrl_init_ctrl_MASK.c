
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_device {int dummy; } ;
struct uvc_control_mapping {scalar_t__ selector; int entity; } ;
struct uvc_control_info {scalar_t__ index; int entity; } ;
struct TYPE_2__ {scalar_t__ selector; } ;
struct uvc_control {scalar_t__ index; TYPE_1__ info; int entity; int initialized; } ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct uvc_device*,struct uvc_control*,struct uvc_control_mapping const*) ;
 int FUNC_3 (struct uvc_device*,struct uvc_control*,struct uvc_control_info const*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct uvc_device *VAR_3, struct uvc_control *VAR_4)
{
 const struct uvc_control_info *VAR_5 = VAR_2;
 const struct uvc_control_info *VAR_6 = VAR_5 + FUNC_0(VAR_2);
 const struct uvc_control_mapping *VAR_7 = VAR_1;
 const struct uvc_control_mapping *VAR_8 =
  VAR_7 + FUNC_0(VAR_1);






 if (FUNC_1(VAR_4->entity) == VAR_0)
  return;

 for (; VAR_5 < VAR_6; ++VAR_5) {
  if (FUNC_4(VAR_4->entity, VAR_5->entity) &&
      VAR_4->index == VAR_5->index) {
   FUNC_3(VAR_3, VAR_4, VAR_5);
   break;
   }
 }

 if (!VAR_4->initialized)
  return;

 for (; VAR_7 < VAR_8; ++VAR_7) {
  if (FUNC_4(VAR_4->entity, VAR_7->entity) &&
      VAR_4->info.selector == VAR_7->selector)
   FUNC_2(VAR_3, VAR_4, VAR_7);
 }
}
