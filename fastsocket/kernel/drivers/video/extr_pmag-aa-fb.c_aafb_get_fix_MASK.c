
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct fb_fix_screeninfo {int ypanstep; int ywrapstep; int line_length; int accel; int visual; int type; int smem_len; int smem_start; int id; } ;
struct aafb_info {int fb_size; int fb_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fb_fix_screeninfo*,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct fb_fix_screeninfo *VAR_3, int VAR_4,
   struct fb_info *VAR_5)
{
 struct aafb_info *VAR_6 = (struct aafb_info *)VAR_5;

 FUNC_0(VAR_3, 0, sizeof(struct fb_fix_screeninfo));
 FUNC_1(VAR_3->id, "PMAG-AA");
 VAR_3->smem_start = VAR_6->fb_start;
 VAR_3->smem_len = VAR_6->fb_size;
 VAR_3->type = VAR_1;
 VAR_3->ypanstep = 1;
 VAR_3->ywrapstep = 1;
 VAR_3->visual = VAR_2;
 VAR_3->line_length = 1280;
 VAR_3->accel = VAR_0;

 return 0;
}
