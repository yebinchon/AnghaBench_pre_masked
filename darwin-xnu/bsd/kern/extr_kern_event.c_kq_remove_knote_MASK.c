
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef size_t u_int ;
struct proc {struct filedesc* p_fd; } ;
struct kqueue {int kq_state; } ;
struct knote_lock_ctx {int dummy; } ;
struct knote {size_t kn_id; } ;
struct klist {int dummy; } ;
struct filedesc {int fd_knhashmask; struct klist* fd_knhash; struct klist* fd_knlist; scalar_t__ fd_knlistsize; } ;
struct TYPE_2__ {int f_isfd; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct klist*,struct knote*,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (struct knote*) ;
 int FUNC_6 (struct kqueue*,struct knote*,struct knote_lock_ctx*,int ) ;
 int FUNC_7 (struct kqueue*) ;
 int FUNC_8 (struct proc*,struct kqueue*) ;
 int FUNC_9 (struct kqueue*) ;
 int FUNC_10 (struct proc*) ;
 int FUNC_11 (struct proc*) ;

__attribute__((used)) static void
FUNC_12(struct kqueue *VAR_4, struct knote *VAR_5, struct proc *VAR_6,
  struct knote_lock_ctx *VAR_7)
{
 struct filedesc *VAR_8 = VAR_6->p_fd;
 struct klist *VAR_9 = ((void*)0);
 uint16_t VAR_10;
 bool VAR_11;

 VAR_11 = FUNC_5(VAR_5)->f_isfd;

 if (VAR_11)
  FUNC_10(VAR_6);
 else
  FUNC_3(VAR_6);

 if (VAR_11) {
  FUNC_2 ((u_int)VAR_8->fd_knlistsize > VAR_5->kn_id);
  VAR_9 = &VAR_8->fd_knlist[VAR_5->kn_id];
 } else {
  VAR_9 = &VAR_8->fd_knhash[FUNC_0(VAR_5->kn_id, VAR_8->fd_knhashmask)];
 }
 FUNC_1(VAR_9, VAR_5, VAR_3, VAR_2);

 FUNC_7(VAR_4);
 VAR_10 = VAR_4->kq_state;
 if (VAR_7) {
  FUNC_6(VAR_4, VAR_5, VAR_7, VAR_0);
 } else {
  FUNC_9(VAR_4);
 }
 if (VAR_11)
  FUNC_11(VAR_6);
 else
  FUNC_4(VAR_6);

 if (VAR_10 & VAR_1)
  FUNC_8(VAR_6, VAR_4);
}
