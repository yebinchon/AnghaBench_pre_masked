
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {scalar_t__ par; } ;
struct atyfb_par {scalar_t__ mmaped; int open; } ;



__attribute__((used)) static int FUNC_0(struct fb_info *VAR_0, int VAR_1)
{
 struct atyfb_par *VAR_2 = (struct atyfb_par *) VAR_0->par;

 if (VAR_1) {
  VAR_2->open++;



 }
 return 0;
}
