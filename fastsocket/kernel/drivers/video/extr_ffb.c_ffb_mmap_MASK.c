
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct ffb_par {int fbsize; int physbase; } ;
struct fb_info {scalar_t__ par; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_1, struct vm_area_struct *VAR_2)
{
 struct ffb_par *VAR_3 = (struct ffb_par *)VAR_1->par;

 return FUNC_0(VAR_0,
      VAR_3->physbase, VAR_3->fbsize,
      0, VAR_2);
}
