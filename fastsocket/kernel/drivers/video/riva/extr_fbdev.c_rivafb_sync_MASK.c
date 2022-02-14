
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct riva_par {int dummy; } ;
struct fb_info {struct riva_par* par; } ;


 int FUNC_0 (struct riva_par*) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_0)
{
 struct riva_par *VAR_1 = VAR_0->par;

 FUNC_0(VAR_1);
 return 0;
}
