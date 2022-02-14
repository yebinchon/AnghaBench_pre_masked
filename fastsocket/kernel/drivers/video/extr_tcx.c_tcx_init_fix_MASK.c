
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcx_par {scalar_t__ lowdepth; } ;
struct TYPE_2__ {int line_length; int accel; int visual; int type; int id; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_1(struct fb_info *VAR_3, int VAR_4)
{
 struct tcx_par *VAR_5 = (struct tcx_par *)VAR_3->par;
 const char *VAR_6;

 if (VAR_5->lowdepth)
  VAR_6 = "TCX8";
 else
  VAR_6 = "TCX24";

 FUNC_0(VAR_3->fix.id, VAR_6, sizeof(VAR_3->fix.id));

 VAR_3->fix.type = VAR_1;
 VAR_3->fix.visual = VAR_2;

 VAR_3->fix.line_length = VAR_4;

 VAR_3->fix.accel = VAR_0;
}
