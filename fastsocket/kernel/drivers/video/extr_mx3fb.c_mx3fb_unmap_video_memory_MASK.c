
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ smem_len; scalar_t__ smem_start; } ;
struct fb_info {int mm_lock; TYPE_1__ fix; scalar_t__ screen_base; int device; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_0)
{
 FUNC_0(VAR_0->device, VAR_0->fix.smem_len,
         VAR_0->screen_base, VAR_0->fix.smem_start);

 VAR_0->screen_base = 0;
 FUNC_1(&VAR_0->mm_lock);
 VAR_0->fix.smem_start = 0;
 VAR_0->fix.smem_len = 0;
 FUNC_2(&VAR_0->mm_lock);
 return 0;
}
