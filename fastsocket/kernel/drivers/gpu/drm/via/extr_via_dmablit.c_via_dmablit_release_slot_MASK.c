
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int busy_queue; int blit_lock; int num_free; } ;
typedef TYPE_1__ drm_via_blitq_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(drm_via_blitq_t *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->blit_lock, VAR_1);
 VAR_0->num_free++;
 FUNC_2(&VAR_0->blit_lock, VAR_1);
 FUNC_0(&VAR_0->busy_queue);
}
