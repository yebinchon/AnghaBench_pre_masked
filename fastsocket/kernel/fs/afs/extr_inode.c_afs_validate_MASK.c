
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_2__ {int vnode; int vid; } ;
struct afs_vnode {scalar_t__ cb_expires; int validate_lock; int flags; scalar_t__ cb_promised; TYPE_1__ fid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct afs_vnode*,int *,struct key*) ;
 int FUNC_4 (struct afs_vnode*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct key*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;

int FUNC_13(struct afs_vnode *VAR_5, struct key *VAR_6)
{
 int VAR_7;

 FUNC_1("{v={%x:%u} fl=%lx},%x",
        VAR_5->fid.vid, VAR_5->fid.vnode, VAR_5->flags,
        FUNC_7(VAR_6));

 if (VAR_5->cb_promised &&
     !FUNC_12(VAR_0, &VAR_5->flags) &&
     !FUNC_12(VAR_2, &VAR_5->flags) &&
     !FUNC_12(VAR_3, &VAR_5->flags)) {
  if (VAR_5->cb_expires < FUNC_6() + 10) {
   FUNC_0("callback expired");
   FUNC_10(VAR_0, &VAR_5->flags);
  } else {
   goto valid;
  }
 }

 if (FUNC_12(VAR_1, &VAR_5->flags))
  goto valid;

 FUNC_8(&VAR_5->validate_lock);





 if (!VAR_5->cb_promised ||
     FUNC_12(VAR_0, &VAR_5->flags)) {
  FUNC_0("not promised");
  VAR_7 = FUNC_3(VAR_5, ((void*)0), VAR_6);
  if (VAR_7 < 0)
   goto error_unlock;
  FUNC_0("new promise [fl=%lx]", VAR_5->flags);
 }

 if (FUNC_12(VAR_1, &VAR_5->flags)) {
  FUNC_0("file already deleted");
  VAR_7 = -VAR_4;
  goto error_unlock;
 }



 if (FUNC_11(VAR_3, &VAR_5->flags))
  FUNC_4(VAR_5);

 FUNC_5(VAR_2, &VAR_5->flags);
 FUNC_9(&VAR_5->validate_lock);
valid:
 FUNC_2(" = 0");
 return 0;

error_unlock:
 FUNC_9(&VAR_5->validate_lock);
 FUNC_2(" = %d", VAR_7);
 return VAR_7;
}
