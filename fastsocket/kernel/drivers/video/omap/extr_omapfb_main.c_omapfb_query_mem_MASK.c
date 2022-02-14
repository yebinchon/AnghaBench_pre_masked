
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_plane_struct {size_t idx; struct omapfb_device* fbdev; } ;
struct omapfb_mem_region {int type; int size; } ;
struct omapfb_mem_info {int type; int size; } ;
struct TYPE_2__ {struct omapfb_mem_region* region; } ;
struct omapfb_device {TYPE_1__ mem_desc; } ;
struct fb_info {struct omapfb_plane_struct* par; } ;


 int FUNC_0 (struct omapfb_mem_info*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_0, struct omapfb_mem_info *VAR_1)
{
 struct omapfb_plane_struct *VAR_2 = VAR_0->par;
 struct omapfb_device *VAR_3 = VAR_2->fbdev;
 struct omapfb_mem_region *VAR_4;

 VAR_4 = &VAR_3->mem_desc.region[VAR_2->idx];
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->size = VAR_4->size;
 VAR_1->type = VAR_4->type;

 return 0;
}
