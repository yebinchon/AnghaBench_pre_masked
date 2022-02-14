
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct display {TYPE_2__* conp; } ;
struct aafb_info {struct display disp; } ;
struct TYPE_4__ {TYPE_1__* vc_sw; } ;
struct TYPE_3__ {int (* con_cursor ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct display*,int,struct aafb_info*) ;
 int VAR_1 ;
 struct display* VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_3, struct fb_info *VAR_4)
{
 struct aafb_info *VAR_5 = (struct aafb_info *)VAR_4;
 struct display *VAR_6 = (VAR_1 < 0) ? &VAR_5->disp : (VAR_2 + VAR_1);
 struct display *VAR_7 = (VAR_3 < 0) ? &VAR_5->disp : (VAR_2 + VAR_3);

 if (VAR_6->conp && VAR_6->conp->vc_sw && VAR_6->conp->vc_sw->con_cursor)
  VAR_6->conp->vc_sw->con_cursor(VAR_6->conp, VAR_0);


 VAR_1 = VAR_3;
 FUNC_0(VAR_7, VAR_3, VAR_5);

 return 0;
}
