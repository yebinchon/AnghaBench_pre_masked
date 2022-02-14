
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int var; } ;
struct fb_fix_screeninfo {int dummy; } ;
struct atafb_par {int dummy; } ;
struct TYPE_2__ {int (* decode_var ) (int *,struct atafb_par*) ;int (* encode_fix ) (struct fb_fix_screeninfo*,struct atafb_par*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct fb_fix_screeninfo*,int ,int) ;
 int FUNC_1 (int *,struct atafb_par*) ;
 int FUNC_2 (struct fb_fix_screeninfo*,struct atafb_par*) ;

__attribute__((used)) static int FUNC_3(struct fb_fix_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 struct atafb_par VAR_3;
 int VAR_4;

 VAR_4 = VAR_0->decode_var(&VAR_2->var, &VAR_3);
 if (VAR_4)
  return VAR_4;
 FUNC_0(VAR_1, 0, sizeof(struct fb_fix_screeninfo));
 VAR_4 = VAR_0->encode_fix(VAR_1, &VAR_3);
 return VAR_4;
}
