
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int smem_start; int smem_len; } ;
struct fb_info {TYPE_1__ fix; int screen_base; int device; } ;
struct atmel_lcdfb_info {struct fb_info* info; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct atmel_lcdfb_info *VAR_0)
{
 struct fb_info *VAR_1 = VAR_0->info;

 FUNC_0(VAR_1->device, VAR_1->fix.smem_len,
    VAR_1->screen_base, VAR_1->fix.smem_start);
}
