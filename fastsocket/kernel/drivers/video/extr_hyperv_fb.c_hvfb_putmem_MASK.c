
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int smem_start; } ;
struct fb_info {TYPE_1__ fix; int screen_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_1)
{
 FUNC_0(VAR_1->screen_base);
 FUNC_1(VAR_1->fix.smem_start, VAR_0);
}
