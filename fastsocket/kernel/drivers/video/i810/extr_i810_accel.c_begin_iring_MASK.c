
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i810fb_par {int dev_flags; } ;
struct fb_info {struct i810fb_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_info*,int ) ;

__attribute__((used)) static inline u32 FUNC_2(struct fb_info *VAR_1, u32 VAR_2)
{
 struct i810fb_par *VAR_3 = VAR_1->par;

 if (VAR_3->dev_flags & VAR_0)
  FUNC_0(VAR_1);
 return FUNC_1(VAR_1, VAR_2);
}
