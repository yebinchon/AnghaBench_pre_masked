
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
typedef int uint32_t ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_2__ {int * blit_queues; } ;
typedef TYPE_1__ drm_via_private_t ;
typedef int drm_via_blitq_t ;


 int FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,int,int) ;
 scalar_t__ FUNC_2 (int *,int,int ,int **) ;

__attribute__((used)) static int
FUNC_3(struct drm_device *VAR_1, uint32_t VAR_2, int VAR_3)
{

 drm_via_private_t *VAR_4 = (drm_via_private_t *)VAR_1->dev_private;
 drm_via_blitq_t *VAR_5 = VAR_4->blit_queues + VAR_3;
 wait_queue_head_t *VAR_6;
 int VAR_7 = 0;

 if (FUNC_2(VAR_5, VAR_3, VAR_2, &VAR_6)) {
  FUNC_1(VAR_7, *VAR_6, 3 * VAR_0,
       !FUNC_2(VAR_5, VAR_3, VAR_2, ((void*)0)));
 }
 FUNC_0("DMA blit sync handle 0x%x engine %d returned %d\n",
    VAR_2, VAR_3, VAR_7);

 return VAR_7;
}
