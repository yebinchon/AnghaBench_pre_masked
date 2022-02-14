
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfb_info {int pseudo_palette; } ;
struct TYPE_2__ {int activate; } ;
struct fb_info {int cmap; int * pseudo_palette; int flags; int * fbops; TYPE_1__ var; int * device; struct mfb_info* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_3)
{
 struct mfb_info *VAR_4 = VAR_3->par;

 VAR_3->device = ((void*)0);
 VAR_3->var.activate = VAR_1;
 VAR_3->fbops = &VAR_2;
 VAR_3->flags = VAR_0;
 VAR_3->pseudo_palette = &VAR_4->pseudo_palette;


 FUNC_0(&VAR_3->cmap, 16, 0);
 return 0;
}
