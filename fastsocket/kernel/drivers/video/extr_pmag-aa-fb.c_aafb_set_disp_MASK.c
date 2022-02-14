
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct fb_fix_screeninfo {int line_length; int ywrapstep; int ypanstep; int type_aux; int type; int visual; scalar_t__ smem_start; } ;
struct display {int next_line; int can_soft_blank; int scrollmode; scalar_t__ inverse; int line_length; int ywrapstep; int ypanstep; int type_aux; int type; int visual; int * screen_base; scalar_t__ dispsw_data; int * dispsw; TYPE_2__* conp; int var; int * fb_info; } ;
struct aafb_info {int info; } ;
struct TYPE_4__ {TYPE_1__* vc_sw; } ;
struct TYPE_3__ {int (* con_cursor ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_fix_screeninfo*,int,int *) ;
 int FUNC_1 (int *,int,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct display*,int ,int ) ;
 int FUNC_3 (struct display*) ;
 int FUNC_4 (struct display*) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_6(struct display *VAR_3, int VAR_4,
     struct aafb_info *VAR_5)
{
 struct fb_fix_screeninfo VAR_6;

 VAR_3->fb_info = &VAR_5->info;
 FUNC_1(&VAR_3->var, VAR_4, &VAR_5->info);
 if (VAR_3->conp && VAR_3->conp->vc_sw && VAR_3->conp->vc_sw->con_cursor)
  VAR_3->conp->vc_sw->con_cursor(VAR_3->conp, VAR_0);
 VAR_3->dispsw = &VAR_2;
 VAR_3->dispsw_data = 0;

 FUNC_0(&VAR_6, VAR_4, &VAR_5->info);
 VAR_3->screen_base = (u8 *) VAR_6.smem_start;
 VAR_3->visual = VAR_6.visual;
 VAR_3->type = VAR_6.type;
 VAR_3->type_aux = VAR_6.type_aux;
 VAR_3->ypanstep = VAR_6.ypanstep;
 VAR_3->ywrapstep = VAR_6.ywrapstep;
 VAR_3->line_length = VAR_6.line_length;
 VAR_3->next_line = 2048;
 VAR_3->can_soft_blank = 1;
 VAR_3->inverse = 0;
 VAR_3->scrollmode = VAR_1;

 FUNC_2(VAR_3, FUNC_4(VAR_3), FUNC_3(VAR_3));
}
