
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {int event_wrap; } ;
typedef TYPE_1__ drm_savage_private_t ;
struct TYPE_5__ {int count; int flags; } ;
typedef TYPE_2__ drm_savage_event_emit_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_0, void *VAR_1, struct drm_file *VAR_2)
{
 drm_savage_private_t *VAR_3 = VAR_0->dev_private;
 drm_savage_event_emit_t *VAR_4 = VAR_1;

 FUNC_0("\n");

 FUNC_1(VAR_0, VAR_2);

 VAR_4->count = FUNC_2(VAR_3, VAR_4->flags);
 VAR_4->count |= VAR_3->event_wrap << 16;

 return 0;
}
