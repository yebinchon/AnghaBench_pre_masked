
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vc_data {int vc_num; } ;
struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {int modelist; } ;
struct TYPE_5__ {int mode; } ;
struct TYPE_4__ {struct vc_data* d; } ;


 size_t* VAR_0 ;
 int FUNC_0 (struct fb_var_screeninfo*,TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 struct fb_videomode* FUNC_1 (int ,int *) ;
 int FUNC_2 (struct fb_var_screeninfo*,struct fb_videomode const*) ;
 int FUNC_3 (struct fb_info*,struct fb_var_screeninfo*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct fb_info** VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_6)
{
 int VAR_7;
 struct vc_data *VAR_8;
 struct fb_var_screeninfo VAR_9;
 const struct fb_videomode *VAR_10;

 for (VAR_7 = VAR_2; VAR_7 <= VAR_3; VAR_7++) {
  if (VAR_4[VAR_0[VAR_7]] != VAR_6)
   continue;
  if (!VAR_1[VAR_7].mode)
   continue;
  VAR_8 = VAR_5[VAR_7].d;
  FUNC_0(&VAR_9, &VAR_1[VAR_7]);
  VAR_10 = FUNC_1(VAR_1[VAR_7].mode,
         &VAR_6->modelist);
  FUNC_2(&VAR_9, VAR_10);
  FUNC_3(VAR_6, &VAR_9, VAR_8->vc_num);
 }
}
