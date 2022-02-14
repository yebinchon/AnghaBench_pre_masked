
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_start; int vm_flags; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct fb_info *VAR_3, struct vm_area_struct *VAR_4)
{



 VAR_4->vm_flags |= VAR_1;
 VAR_4->vm_start = VAR_2;

 return 0;



}
