
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vnode* vnode_t ;
struct vnode {int dummy; } ;
struct kevent_internal_s {int dummy; } ;
struct knote {int kn_flags; scalar_t__ kn_fflags; scalar_t__ kn_data; struct kevent_internal_s kn_kevent; int kn_hookid; scalar_t__ kn_hook; } ;
struct filt_process_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct knote*,struct vnode*,int) ;
 scalar_t__ FUNC_1 (struct vnode*,int ,int) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;

__attribute__((used)) static int
FUNC_5(struct knote *VAR_4, struct filt_process_s *VAR_5, struct kevent_internal_s *VAR_6)
{
#pragma unused(data)
 vnode_t VAR_7 = (struct vnode *)VAR_4->kn_hook;
 int VAR_8;
 int VAR_9 = 0;

 FUNC_2(VAR_7);
 if (FUNC_1(VAR_7, VAR_4->kn_hookid, VAR_2 | VAR_3) != 0) {

  VAR_9 = VAR_1;
 }
 VAR_8 = FUNC_0(VAR_4, VAR_7, VAR_9);
 if (VAR_8) {
  *VAR_6 = VAR_4->kn_kevent;
  if (VAR_4->kn_flags & VAR_0) {
   VAR_4->kn_data = 0;
   VAR_4->kn_fflags = 0;
  }
 }


 if (VAR_9 == 0)
  FUNC_3(VAR_7);
 FUNC_4(VAR_7);

 return VAR_8;
}
