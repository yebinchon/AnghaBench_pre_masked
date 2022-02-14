
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int pdev; scalar_t__ dev_private; } ;
struct TYPE_3__ {TYPE_2__* blit_queues; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_4__ {int num_free; int poll_timer; int wq; int busy_queue; int * blit_queue; int blit_lock; scalar_t__ aborting; scalar_t__ is_active; scalar_t__ num_outstanding; scalar_t__ serviced; scalar_t__ cur; scalar_t__ head; scalar_t__ done_blit_handle; scalar_t__ cur_blit_handle; struct drm_device* dev; } ;
typedef TYPE_2__ drm_via_blitq_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,unsigned long) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_5(struct drm_device *VAR_4)
{
 int VAR_5, VAR_6;
 drm_via_private_t *VAR_7 = (drm_via_private_t *)VAR_4->dev_private;
 drm_via_blitq_t *VAR_8;

 FUNC_2(VAR_4->pdev);

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  VAR_8 = VAR_7->blit_queues + VAR_5;
  VAR_8->dev = VAR_4;
  VAR_8->cur_blit_handle = 0;
  VAR_8->done_blit_handle = 0;
  VAR_8->head = 0;
  VAR_8->cur = 0;
  VAR_8->serviced = 0;
  VAR_8->num_free = VAR_1 - 1;
  VAR_8->num_outstanding = 0;
  VAR_8->is_active = 0;
  VAR_8->aborting = 0;
  FUNC_4(&VAR_8->blit_lock);
  for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
   FUNC_0(VAR_8->blit_queue + VAR_6);
  FUNC_0(&VAR_8->busy_queue);
  FUNC_1(&VAR_8->wq, VAR_3);
  FUNC_3(&VAR_8->poll_timer, VAR_2,
    (unsigned long)VAR_8);
 }
}
