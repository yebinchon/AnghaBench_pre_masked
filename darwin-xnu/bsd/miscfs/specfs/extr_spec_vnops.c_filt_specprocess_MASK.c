
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
typedef int vfs_context_t ;
typedef int uthread_t ;
struct kevent_internal_s {int dummy; } ;
struct knote {int kn_flags; int kn_sfflags; int kn_data; int kn_sdata; scalar_t__ kn_fflags; struct kevent_internal_s kn_kevent; int kn_hookid; TYPE_2__* kn_fp; } ;
struct filt_process_s {int dummy; } ;
struct TYPE_4__ {TYPE_1__* f_fglob; } ;
struct TYPE_3__ {scalar_t__ fg_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct knote*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct knote*) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct knote *VAR_4, struct filt_process_s *VAR_5, struct kevent_internal_s *VAR_6)
{
#pragma unused(data)
 vnode_t VAR_7;
 uthread_t VAR_8;
 vfs_context_t VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_8 = FUNC_2(FUNC_0());
 VAR_9 = FUNC_4();
 VAR_7 = (vnode_t)VAR_4->kn_fp->f_fglob->fg_data;

 VAR_12 = FUNC_5(VAR_7, VAR_4->kn_hookid);
 if (VAR_12 != 0) {
  VAR_4->kn_flags |= (VAR_1 | VAR_2);
  *VAR_6 = VAR_4->kn_kevent;
  return 1;
 }

 VAR_11 = FUNC_3(VAR_4);
 FUNC_1(VAR_4, VAR_11);

 FUNC_6(VAR_7);

 VAR_10 = ((VAR_4->kn_sfflags & VAR_3) != 0) ?
  (VAR_4->kn_data >= VAR_4->kn_sdata) : VAR_4->kn_data;

 if (VAR_10) {
  *VAR_6 = VAR_4->kn_kevent;
  if (VAR_4->kn_flags & VAR_0) {
   VAR_4->kn_fflags = 0;
   VAR_4->kn_data = 0;
  }
 }

 return VAR_10;
}
