
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vnode* vnode_t ;
struct vnode {int dummy; } ;
struct knote {int kn_sfflags; int kn_hookid; scalar_t__ kn_hook; } ;
struct kevent_internal_s {int fflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct knote*,struct vnode*,int) ;
 scalar_t__ FUNC_1 (struct vnode*,int ,int) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;

__attribute__((used)) static int
FUNC_5(struct knote *VAR_3, struct kevent_internal_s *VAR_4)
{
 vnode_t VAR_5 = (struct vnode *)VAR_3->kn_hook;
 int VAR_6;
 int VAR_7 = 0;

 FUNC_2(VAR_5);
 if (FUNC_1(VAR_5, VAR_3->kn_hookid, VAR_1 | VAR_2) != 0) {

  VAR_7 = VAR_0;
 }


 VAR_3->kn_sfflags = VAR_4->fflags;

 VAR_6 = FUNC_0(VAR_3, VAR_5, VAR_7);

 if (VAR_7 == 0)
  FUNC_3(VAR_5);
 FUNC_4(VAR_5);

 return VAR_6;
}
