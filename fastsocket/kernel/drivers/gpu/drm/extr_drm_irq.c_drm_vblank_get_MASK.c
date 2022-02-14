
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int* vblank_enabled; int vbl_lock; int * vblank_refcount; int vblank_time_lock; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* enable_vblank ) (struct drm_device*,int) ;} ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct drm_device*,int) ;

int FUNC_7(struct drm_device *VAR_1, int VAR_2)
{
 unsigned long VAR_3, VAR_4;
 int VAR_5 = 0;

 FUNC_4(&VAR_1->vbl_lock, VAR_3);

 if (FUNC_1(1, &VAR_1->vblank_refcount[VAR_2]) == 1) {
  FUNC_4(&VAR_1->vblank_time_lock, VAR_4);
  if (!VAR_1->vblank_enabled[VAR_2]) {






   VAR_5 = VAR_1->driver->enable_vblank(VAR_1, VAR_2);
   FUNC_0("enabling vblank on crtc %d, ret: %d\n",
      VAR_2, VAR_5);
   if (VAR_5)
    FUNC_2(&VAR_1->vblank_refcount[VAR_2]);
   else {
    VAR_1->vblank_enabled[VAR_2] = 1;
    FUNC_3(VAR_1, VAR_2);
   }
  }
  FUNC_5(&VAR_1->vblank_time_lock, VAR_4);
 } else {
  if (!VAR_1->vblank_enabled[VAR_2]) {
   FUNC_2(&VAR_1->vblank_refcount[VAR_2]);
   VAR_5 = -VAR_0;
  }
 }
 FUNC_5(&VAR_1->vbl_lock, VAR_3);

 return VAR_5;
}
