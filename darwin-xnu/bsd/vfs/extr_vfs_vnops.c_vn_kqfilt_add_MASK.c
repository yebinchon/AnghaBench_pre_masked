
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vfs_context_t ;
struct vnode {int v_knotes; TYPE_1__* v_fifoinfo; } ;
struct knote {int kn_filter; int kn_flags; int kn_data; int kn_filtid; int kn_hookid; void* kn_hook; } ;
struct kevent_internal_s {int dummy; } ;
struct fileproc {TYPE_2__* f_fglob; } ;
struct TYPE_4__ {int fg_cred; scalar_t__ fg_data; } ;
struct TYPE_3__ {int fi_readsock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int *,struct knote*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct vnode*,int ,int ,void*,int ) ;
 int FUNC_2 (struct knote*,struct vnode*,int ) ;
 int FUNC_3 (int ,int ,struct knote*,struct vnode*) ;
 int FUNC_4 (struct vnode*,struct knote*,struct kevent_internal_s*) ;
 int FUNC_5 (struct vnode*,int ,int ) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*) ;

__attribute__((used)) static int
FUNC_13(struct fileproc *VAR_6, struct knote *VAR_7,
  struct kevent_internal_s *VAR_8, vfs_context_t VAR_9)
{
 struct vnode *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;

 VAR_10 = (struct vnode *)VAR_6->f_fglob->fg_data;




 if ((VAR_11 = FUNC_5(VAR_10, 0, VAR_5)) == 0) {
  switch (VAR_7->kn_filter) {
   case 130:
   case 128:
    if (FUNC_7(VAR_10)) {

     if (!(VAR_10->v_fifoinfo && VAR_10->v_fifoinfo->fi_readsock)) {
      VAR_11 = VAR_1;
     }

    } else if (!FUNC_8(VAR_10)) {
     if (FUNC_6(VAR_10)) {
      VAR_12 = FUNC_4(VAR_10, VAR_7, VAR_8);
      if ((VAR_7->kn_flags & VAR_3) == 0) {

       FUNC_10(VAR_10);
       return VAR_12;
      }
     }
     VAR_11 = VAR_0;
    }
    break;
   case 129:
    break;
   default:
    VAR_11 = VAR_0;
  }

  if (VAR_11 == 0) {
   VAR_7->kn_hook = (void*)VAR_10;
   VAR_7->kn_hookid = FUNC_12(VAR_10);
   VAR_7->kn_filtid = VAR_2;

   FUNC_9(VAR_10);
   FUNC_0(&VAR_10->v_knotes, VAR_7);
   VAR_12 = FUNC_2(VAR_7, VAR_10, 0);
   FUNC_11(VAR_10);





   FUNC_1(VAR_10, 0, VAR_4, (void*) VAR_7, VAR_9);
  }

  FUNC_10(VAR_10);
 }

 out:
 if (VAR_11) {
  VAR_7->kn_flags = VAR_3;
  VAR_7->kn_data = VAR_11;
 }

 return VAR_12;
}
