
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vgastate {int dummy; } ;
struct fb_info {struct arkfb_info* par; } ;
struct TYPE_3__ {int flags; int num_crtc; int num_seq; } ;
struct arkfb_info {scalar_t__ ref_count; int open_lock; TYPE_1__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_3, int VAR_4)
{
 struct arkfb_info *VAR_5 = VAR_3->par;

 FUNC_1(&(VAR_5->open_lock));
 if (VAR_5->ref_count == 0) {
  FUNC_0(&(VAR_5->state), 0, sizeof(struct vgastate));
  VAR_5->state.flags = VAR_2 | VAR_1 | VAR_0;
  VAR_5->state.num_crtc = 0x60;
  VAR_5->state.num_seq = 0x30;
  FUNC_3(&(VAR_5->state));
 }

 VAR_5->ref_count++;
 FUNC_2(&(VAR_5->open_lock));

 return 0;
}
