
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_3__ {int blit_queues; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_4__ {int poll_timer; struct drm_device* dev; } ;
typedef TYPE_2__ drm_via_blitq_t ;


 int FUNC_0 (char*,int,unsigned long) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*,int,int ) ;

__attribute__((used)) static void
FUNC_4(unsigned long VAR_1)
{
 drm_via_blitq_t *VAR_2 = (drm_via_blitq_t *) VAR_1;
 struct drm_device *VAR_3 = VAR_2->dev;
 int VAR_4 = (int)
  (VAR_2 - ((drm_via_private_t *)VAR_3->dev_private)->blit_queues);

 FUNC_0("Polling timer called for engine %d, jiffies %lu\n", VAR_4,
    (unsigned long) VAR_0);

 FUNC_3(VAR_3, VAR_4, 0);

 if (!FUNC_2(&VAR_2->poll_timer)) {
  FUNC_1(&VAR_2->poll_timer, VAR_0 + 1);






        FUNC_3(VAR_3, VAR_4, 0);

 }
}
