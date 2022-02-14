
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int dummy; } ;
struct kqueue {struct proc* kq_p; } ;
struct knote_lock_ctx {int dummy; } ;
struct knote {int kn_status; int kn_fp; int kn_id; } ;
struct TYPE_2__ {scalar_t__ f_isfd; int (* f_detach ) (struct knote*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct proc*,int ,int ,int ) ;
 int FUNC_2 (struct knote*) ;
 TYPE_1__* FUNC_3 (struct knote*) ;
 int FUNC_4 (struct knote*) ;
 int FUNC_5 (struct knote*) ;
 int FUNC_6 (struct kqueue*,struct knote*) ;
 int FUNC_7 (struct kqueue*,struct knote*,struct proc*,struct knote_lock_ctx*) ;
 int FUNC_8 (struct kqueue*) ;
 int FUNC_9 (struct knote*) ;

__attribute__((used)) static void
FUNC_10(struct kqueue *VAR_4, struct knote *VAR_5, struct knote_lock_ctx *VAR_6)
{
 struct proc *VAR_7 = VAR_4->kq_p;

 FUNC_8(VAR_4);

 FUNC_0((VAR_5->kn_status & VAR_1) == 0);
 if (VAR_6 == ((void*)0)) {
  FUNC_0((VAR_5->kn_status & VAR_2) == 0);
 }
 VAR_5->kn_status |= VAR_1;

 FUNC_5(VAR_5);
 FUNC_2(VAR_5);
 FUNC_6(VAR_4, VAR_5);


 if (VAR_5->kn_status & VAR_0) {
  FUNC_3(VAR_5)->f_detach(VAR_5);
 }


 FUNC_7(VAR_4, VAR_5, VAR_7, VAR_6);
 if (FUNC_3(VAR_5)->f_isfd && ((VAR_5->kn_status & VAR_3) == 0))
  FUNC_1(VAR_7, VAR_5->kn_id, VAR_5->kn_fp, 0);

 FUNC_4(VAR_5);
}
