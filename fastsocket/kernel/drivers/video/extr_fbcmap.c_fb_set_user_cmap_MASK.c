
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct fb_info {TYPE_1__* fbops; } ;
struct fb_cmap_user {int len; scalar_t__ start; int * transp; int * blue; int * green; int * red; } ;
struct fb_cmap {scalar_t__ start; int transp; int blue; int green; int red; } ;
struct TYPE_2__ {int fb_setcmap; int fb_setcolreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct fb_cmap*,int,int ) ;
 int FUNC_2 (struct fb_cmap*) ;
 int FUNC_3 (struct fb_cmap*,struct fb_info*) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct fb_cmap*,int ,int) ;
 int FUNC_6 (struct fb_info*) ;

int FUNC_7(struct fb_cmap_user *VAR_3, struct fb_info *VAR_4)
{
 int VAR_5, VAR_6 = VAR_3->len * sizeof(u16);
 struct fb_cmap VAR_7;

 FUNC_5(&VAR_7, 0, sizeof(struct fb_cmap));
 VAR_5 = FUNC_1(&VAR_7, VAR_3->len, VAR_3->transp != ((void*)0));
 if (VAR_5)
  return VAR_5;
 if (FUNC_0(VAR_7.red, VAR_3->red, VAR_6) ||
     FUNC_0(VAR_7.green, VAR_3->green, VAR_6) ||
     FUNC_0(VAR_7.blue, VAR_3->blue, VAR_6) ||
     (VAR_3->transp && FUNC_0(VAR_7.transp, VAR_3->transp, VAR_6))) {
  VAR_5 = -VAR_0;
  goto out;
 }
 VAR_7.start = VAR_3->start;
 if (!FUNC_4(VAR_4)) {
  VAR_5 = -VAR_2;
  goto out;
 }
 if (VAR_3->start < 0 || (!VAR_4->fbops->fb_setcolreg &&
    !VAR_4->fbops->fb_setcmap)) {
  VAR_5 = -VAR_1;
  goto out1;
 }
 VAR_5 = FUNC_3(&VAR_7, VAR_4);
out1:
 FUNC_6(VAR_4);
out:
 FUNC_2(&VAR_7);
 return VAR_5;
}
