
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ vgabase; } ;
struct TYPE_4__ {scalar_t__ vbase; } ;
struct savagefb_par {int open_lock; int open_count; int initial; TYPE_2__ vgastate; TYPE_1__ mmio; } ;
struct fb_info {struct savagefb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct savagefb_par*,int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_3, int VAR_4)
{
 struct savagefb_par *VAR_5 = VAR_3->par;

 FUNC_1(&VAR_5->open_lock);

 if (!VAR_5->open_count) {
  FUNC_0(&VAR_5->vgastate, 0, sizeof(VAR_5->vgastate));
  VAR_5->vgastate.flags = VAR_0 | VAR_1 |
   VAR_2;
  VAR_5->vgastate.vgabase = VAR_5->mmio.vbase + 0x8000;
  FUNC_4(&VAR_5->vgastate);
  FUNC_3(VAR_5, &VAR_5->initial);
 }

 VAR_5->open_count++;
 FUNC_2(&VAR_5->open_lock);
 return 0;
}
