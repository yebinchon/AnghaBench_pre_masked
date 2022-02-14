
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ smem_start; } ;
struct fb_info {TYPE_1__ fix; void* screen_base; int var; } ;


 int FUNC_0 (TYPE_1__*,struct fb_info*) ;
 int FUNC_1 (int *,struct fb_info*) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_0)
{
 FUNC_1(&VAR_0->var, VAR_0);
 FUNC_0(&VAR_0->fix, VAR_0);

 VAR_0->screen_base = (void *)VAR_0->fix.smem_start;
}
