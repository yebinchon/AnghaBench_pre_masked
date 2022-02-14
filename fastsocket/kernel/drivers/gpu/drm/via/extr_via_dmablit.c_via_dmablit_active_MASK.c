
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_queue_head_t ;
typedef int uint32_t ;
struct TYPE_3__ {int done_blit_handle; int cur_blit_handle; int cur; int blit_lock; int * blit_queue; } ;
typedef TYPE_1__ drm_via_blitq_t ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_2(drm_via_blitq_t *VAR_1, int VAR_2, uint32_t VAR_3, wait_queue_head_t **VAR_4)
{
 unsigned long VAR_5;
 uint32_t VAR_6;
 int VAR_7;

 FUNC_0(&VAR_1->blit_lock, VAR_5);





 VAR_7 = ((VAR_1->done_blit_handle - VAR_3) > (1 << 23)) &&
  ((VAR_1->cur_blit_handle - VAR_3) <= (1 << 23));

 if (VAR_4 && VAR_7) {
  VAR_6 = VAR_3 - VAR_1->done_blit_handle + VAR_1->cur - 1;
  if (VAR_6 >= VAR_0)
   VAR_6 -= VAR_0;
  *VAR_4 = VAR_1->blit_queue + VAR_6;
 }

 FUNC_1(&VAR_1->blit_lock, VAR_5);

 return VAR_7;
}
