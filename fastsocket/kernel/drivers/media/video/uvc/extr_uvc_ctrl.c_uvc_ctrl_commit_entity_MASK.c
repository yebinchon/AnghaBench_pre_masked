
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvc_entity {unsigned int ncontrols; struct uvc_control* controls; } ;
struct uvc_device {int intfnum; } ;
struct TYPE_4__ {int flags; int size; int selector; } ;
struct uvc_control {scalar_t__ dirty; TYPE_2__ info; TYPE_1__* entity; scalar_t__ loaded; int initialized; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct uvc_control*,int ) ;
 int FUNC_2 (struct uvc_device*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct uvc_device *VAR_4,
 struct uvc_entity *VAR_5, int VAR_6)
{
 struct uvc_control *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 if (VAR_5 == ((void*)0))
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_5->ncontrols; ++VAR_8) {
  VAR_7 = &VAR_5->controls[VAR_8];
  if (!VAR_7->initialized)
   continue;





  if (VAR_7->info.flags & VAR_0)
   VAR_7->loaded = 0;

  if (!VAR_7->dirty)
   continue;

  if (!VAR_6)
   VAR_9 = FUNC_2(VAR_4, VAR_3, VAR_7->entity->id,
    VAR_4->intfnum, VAR_7->info.selector,
    FUNC_1(VAR_7, VAR_2),
    VAR_7->info.size);
  else
   VAR_9 = 0;

  if (VAR_6 || VAR_9 < 0)
   FUNC_0(FUNC_1(VAR_7, VAR_2),
          FUNC_1(VAR_7, VAR_1),
          VAR_7->info.size);

  VAR_7->dirty = 0;

  if (VAR_9 < 0)
   return VAR_9;
 }

 return 0;
}
