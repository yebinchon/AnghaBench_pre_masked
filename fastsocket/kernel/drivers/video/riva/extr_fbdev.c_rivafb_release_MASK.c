
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* LockUnlock ) (TYPE_1__*,int) ;int (* LoadStateExt ) (TYPE_1__*,int *) ;} ;
struct TYPE_6__ {int ext; } ;
struct riva_par {int ref_count; int open_lock; TYPE_1__ riva; int state; TYPE_4__ initial_state; } ;
struct fb_info {struct riva_par* par; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct riva_par*,TYPE_4__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_9(struct fb_info *VAR_1, int VAR_2)
{
 struct riva_par *VAR_3 = VAR_1->par;

 FUNC_0();
 FUNC_2(&VAR_3->open_lock);
 if (!VAR_3->ref_count) {
  FUNC_3(&VAR_3->open_lock);
  return -VAR_0;
 }
 if (VAR_3->ref_count == 1) {
  VAR_3->riva.LockUnlock(&VAR_3->riva, 0);
  VAR_3->riva.LoadStateExt(&VAR_3->riva, &VAR_3->initial_state.ext);
  FUNC_5(VAR_3, &VAR_3->initial_state);



  VAR_3->riva.LockUnlock(&VAR_3->riva, 1);
 }
 VAR_3->ref_count--;
 FUNC_3(&VAR_3->open_lock);
 FUNC_1();
 return 0;
}
