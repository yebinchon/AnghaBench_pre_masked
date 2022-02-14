
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int irq_enabled; int num_crtcs; TYPE_1__* driver; int pdev; int vbl_lock; int * last_vblank; scalar_t__* vblank_enabled; int * vbl_queue; int struct_mutex; } ;
struct TYPE_2__ {int (* irq_uninstall ) (struct drm_device*) ;int (* get_vblank_counter ) (struct drm_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ,struct drm_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct drm_device*,int) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (int ,int *,int *,int *) ;

int FUNC_12(struct drm_device *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6;

 if (!FUNC_2(VAR_3, VAR_0))
  return -VAR_2;

 FUNC_5(&VAR_3->struct_mutex);
 VAR_5 = VAR_3->irq_enabled;
 VAR_3->irq_enabled = 0;
 FUNC_6(&VAR_3->struct_mutex);




 if (VAR_3->num_crtcs) {
  FUNC_7(&VAR_3->vbl_lock, VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_3->num_crtcs; VAR_6++) {
   FUNC_1(&VAR_3->vbl_queue[VAR_6]);
   VAR_3->vblank_enabled[VAR_6] = 0;
   VAR_3->last_vblank[VAR_6] =
    VAR_3->driver->get_vblank_counter(VAR_3, VAR_6);
  }
  FUNC_8(&VAR_3->vbl_lock, VAR_4);
 }

 if (!VAR_5)
  return -VAR_2;

 FUNC_0("irq=%d\n", FUNC_3(VAR_3));

 if (!FUNC_2(VAR_3, VAR_1))
  FUNC_11(VAR_3->pdev, ((void*)0), ((void*)0), ((void*)0));

 if (VAR_3->driver->irq_uninstall)
  VAR_3->driver->irq_uninstall(VAR_3);

 FUNC_4(FUNC_3(VAR_3), VAR_3);

 return 0;
}
