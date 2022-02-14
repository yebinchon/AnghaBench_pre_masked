
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {TYPE_1__* fbops; } ;
struct fb_event {struct fb_blit_caps* data; struct fb_info* info; } ;
struct fb_blit_caps {int flags; int x; int y; scalar_t__ len; } ;
typedef int fbcaps ;
typedef int caps ;
struct TYPE_2__ {int (* fb_get_caps ) (struct fb_info*,struct fb_blit_caps*,struct fb_var_screeninfo*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct fb_event*) ;
 int FUNC_1 (struct fb_blit_caps*,int ,int) ;
 int FUNC_2 (struct fb_info*,struct fb_blit_caps*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_3, struct fb_var_screeninfo *VAR_4,
    u32 VAR_5)
{
 struct fb_event VAR_6;
 struct fb_blit_caps VAR_7, VAR_8;
 int VAR_9 = 0;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_7.flags = (VAR_5 & VAR_1) ? 1 : 0;
 VAR_6.info = VAR_3;
 VAR_6.data = &VAR_7;
 FUNC_0(VAR_2, &VAR_6);
 VAR_3->fbops->fb_get_caps(VAR_3, &VAR_8, VAR_4);

 if (((VAR_8.x ^ VAR_7.x) & VAR_7.x) ||
     ((VAR_8.y ^ VAR_7.y) & VAR_7.y) ||
     (VAR_8.len < VAR_7.len))
  VAR_9 = -VAR_0;

 return VAR_9;
}
