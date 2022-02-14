
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct arcfb_par* par; } ;
struct arcfb_par {int ref_count; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_0, int VAR_1)
{
 struct arcfb_par *VAR_2 = VAR_0->par;

 FUNC_0(&VAR_2->ref_count);
 return 0;
}
