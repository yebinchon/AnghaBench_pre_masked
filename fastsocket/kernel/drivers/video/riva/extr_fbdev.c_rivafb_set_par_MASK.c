
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int (* LockUnlock ) (TYPE_4__*,int ) ;} ;
struct riva_par {int cursor_reset; TYPE_4__ riva; } ;
struct TYPE_7__ {int scan_align; } ;
struct TYPE_6__ {int xres_virtual; int bits_per_pixel; } ;
struct TYPE_5__ {int line_length; int visual; } ;
struct fb_info {int flags; TYPE_3__ pixmap; TYPE_2__ var; TYPE_1__ fix; struct riva_par* par; } ;


 int FUNC_0 (struct riva_par*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_3)
{
 struct riva_par *VAR_4 = VAR_3->par;
 int VAR_5 = 0;

 FUNC_1();

 FUNC_0(VAR_4, 0x11, 0xFF);
 VAR_4->riva.LockUnlock(&VAR_4->riva, 0);
 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5)
  goto out;
 if(!(VAR_3->flags & VAR_0))
  FUNC_4(VAR_3);

 VAR_4->cursor_reset = 1;
 VAR_3->fix.line_length = (VAR_3->var.xres_virtual * (VAR_3->var.bits_per_pixel >> 3));
 VAR_3->fix.visual = (VAR_3->var.bits_per_pixel == 8) ?
    VAR_2 : VAR_1;

 if (VAR_3->flags & VAR_0)
  VAR_3->pixmap.scan_align = 1;
 else
  VAR_3->pixmap.scan_align = 4;

out:
 FUNC_2();
 return VAR_5;
}
