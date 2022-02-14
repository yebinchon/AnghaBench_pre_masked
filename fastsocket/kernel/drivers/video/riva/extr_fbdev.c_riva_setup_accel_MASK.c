
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* Clip; } ;
struct riva_par {TYPE_3__ riva; } ;
struct TYPE_4__ {int xres_virtual; int yres_virtual; } ;
struct fb_info {TYPE_1__ var; struct riva_par* par; } ;
struct TYPE_5__ {int WidthHeight; int TopLeft; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_3__,int ,int) ;
 int FUNC_2 (struct riva_par*,int) ;
 int FUNC_3 (struct riva_par*) ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_1)
{
 struct riva_par *VAR_2 = VAR_1->par;

 FUNC_1(VAR_2->riva, VAR_0, 2);
 FUNC_0(&VAR_2->riva.Clip->TopLeft, 0, 0x0);
 FUNC_0(&VAR_2->riva.Clip->WidthHeight, 0,
  (VAR_1->var.xres_virtual & 0xffff) |
  (VAR_1->var.yres_virtual << 16));
 FUNC_2(VAR_2, 0xcc);
 FUNC_3(VAR_2);
}
