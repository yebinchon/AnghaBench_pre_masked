
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct TYPE_2__ {int smem_len; int smem_start; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ par; } ;
struct bw2_par {int which_io; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_1, struct vm_area_struct *VAR_2)
{
 struct bw2_par *VAR_3 = (struct bw2_par *)VAR_1->par;

 return FUNC_0(VAR_0,
      VAR_1->fix.smem_start, VAR_1->fix.smem_len,
      VAR_3->which_io,
      VAR_2);
}
