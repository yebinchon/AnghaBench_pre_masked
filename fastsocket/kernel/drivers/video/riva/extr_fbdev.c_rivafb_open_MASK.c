
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vgastate {int dummy; } ;
struct TYPE_4__ {scalar_t__ Architecture; int (* LockUnlock ) (TYPE_1__*,int ) ;} ;
struct TYPE_5__ {int flags; } ;
struct riva_par {int open_lock; int ref_count; int initial_state; TYPE_1__ riva; TYPE_2__ state; } ;
struct fb_info {struct riva_par* par; } ;


 int FUNC_0 (struct riva_par*,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct riva_par*,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_9(struct fb_info *VAR_4, int VAR_5)
{
 struct riva_par *VAR_6 = VAR_4->par;

 FUNC_1();
 FUNC_4(&VAR_6->open_lock);
 if (!VAR_6->ref_count) {
  FUNC_0(VAR_6, 0x11, 0xFF);
  VAR_6->riva.LockUnlock(&VAR_6->riva, 0);

  FUNC_6(VAR_6, &VAR_6->initial_state);
 }
 VAR_6->ref_count++;
 FUNC_5(&VAR_6->open_lock);
 FUNC_2();
 return 0;
}
