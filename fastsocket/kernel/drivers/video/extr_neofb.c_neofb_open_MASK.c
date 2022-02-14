
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vgastate {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct neofb_par {int ref_count; TYPE_1__ state; } ;
struct fb_info {struct neofb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(struct fb_info *VAR_2, int VAR_3)
{
 struct neofb_par *VAR_4 = VAR_2->par;

 if (!VAR_4->ref_count) {
  FUNC_0(&VAR_4->state, 0, sizeof(struct vgastate));
  VAR_4->state.flags = VAR_1 | VAR_0;
  FUNC_1(&VAR_4->state);
 }
 VAR_4->ref_count++;

 return 0;
}
