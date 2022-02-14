
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct TYPE_2__ {int smem_len; int smem_start; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ par; } ;
struct cg14_par {int iospace; int mmap_map; } ;


 int FUNC_0 (int ,int ,int ,int ,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_0, struct vm_area_struct *VAR_1)
{
 struct cg14_par *VAR_2 = (struct cg14_par *) VAR_0->par;

 return FUNC_0(VAR_2->mmap_map,
      VAR_0->fix.smem_start, VAR_0->fix.smem_len,
      VAR_2->iospace, VAR_1);
}
