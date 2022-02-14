
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
typedef int u32 ;
struct timeval {int dummy; } ;
struct drm_device {int num_crtcs; scalar_t__ vblank_disable_allowed; int * vblank_refcount; int * _vblank_count; int * vbl_queue; TYPE_1__* driver; void* _vblank_time; void* vblank_inmodeset; void* last_vblank_wait; void* last_vblank; void* vblank_enabled; int vblank_time_lock; int vbl_lock; int vblank_disable_timer; } ;
typedef int atomic_t ;
struct TYPE_2__ {scalar_t__ get_vblank_timestamp; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int,int,int ) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int ,unsigned long) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;

int FUNC_8(struct drm_device *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = -VAR_1;

 FUNC_6(&VAR_4->vblank_disable_timer, VAR_3,
      (unsigned long)VAR_4);
 FUNC_7(&VAR_4->vbl_lock);
 FUNC_7(&VAR_4->vblank_time_lock);

 VAR_4->num_crtcs = VAR_5;

 VAR_4->vbl_queue = FUNC_5(sizeof(wait_queue_head_t) * VAR_5,
     VAR_2);
 if (!VAR_4->vbl_queue)
  goto err;

 VAR_4->_vblank_count = FUNC_5(sizeof(atomic_t) * VAR_5, VAR_2);
 if (!VAR_4->_vblank_count)
  goto err;

 VAR_4->vblank_refcount = FUNC_5(sizeof(atomic_t) * VAR_5,
           VAR_2);
 if (!VAR_4->vblank_refcount)
  goto err;

 VAR_4->vblank_enabled = FUNC_4(VAR_5, sizeof(int), VAR_2);
 if (!VAR_4->vblank_enabled)
  goto err;

 VAR_4->last_vblank = FUNC_4(VAR_5, sizeof(u32), VAR_2);
 if (!VAR_4->last_vblank)
  goto err;

 VAR_4->last_vblank_wait = FUNC_4(VAR_5, sizeof(u32), VAR_2);
 if (!VAR_4->last_vblank_wait)
  goto err;

 VAR_4->vblank_inmodeset = FUNC_4(VAR_5, sizeof(int), VAR_2);
 if (!VAR_4->vblank_inmodeset)
  goto err;

 VAR_4->_vblank_time = FUNC_4(VAR_5 * VAR_0,
        sizeof(struct timeval), VAR_2);
 if (!VAR_4->_vblank_time)
  goto err;

 FUNC_0("Supports vblank timestamp caching Rev 1 (10.10.2010).\n");


 if (VAR_4->driver->get_vblank_timestamp)
  FUNC_0("Driver supports precise vblank timestamp query.\n");
 else
  FUNC_0("No driver support for vblank timestamp query.\n");


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  FUNC_3(&VAR_4->vbl_queue[VAR_6]);
  FUNC_1(&VAR_4->_vblank_count[VAR_6], 0);
  FUNC_1(&VAR_4->vblank_refcount[VAR_6], 0);
 }

 VAR_4->vblank_disable_allowed = 0;
 return 0;

err:
 FUNC_2(VAR_4);
 return VAR_7;
}
