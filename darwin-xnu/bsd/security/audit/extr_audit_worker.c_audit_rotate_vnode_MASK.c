
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
typedef int * kauth_cred_t ;
struct TYPE_4__ {int * vc_ucred; } ;
struct TYPE_3__ {scalar_t__ aq_hiwater; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int *,int ) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 struct vnode* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_14 ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct vnode*,int ,int ) ;
 scalar_t__ FUNC_12 (struct vnode*) ;
 int FUNC_13 (struct vnode*) ;

void
FUNC_14(kauth_cred_t VAR_15, struct vnode *VAR_16)
{
 kauth_cred_t VAR_17;
 struct vnode *VAR_18;

 FUNC_2((VAR_15 != ((void*)0) && VAR_16 != ((void*)0)) || (VAR_15 == ((void*)0) && VAR_16 == ((void*)0)),
     ("audit_rotate_vnode: cred %p vp %p", VAR_15, VAR_16));


 FUNC_7(&VAR_6);
 if (VAR_4 && (((void*)0) == VAR_16)) {






  VAR_4 = 0;







  VAR_8 = 1;
  while (VAR_9 >= VAR_10.aq_hiwater)
   FUNC_5(&VAR_12, &VAR_6);
  FUNC_3(&VAR_7, &VAR_3, VAR_14);
  VAR_9++;
  FUNC_4(&VAR_13);
 }


 while (VAR_8)
  FUNC_5(&VAR_2, &VAR_6);
 FUNC_8(&VAR_6);






 FUNC_0();
 VAR_17 = VAR_1.vc_ucred;
 VAR_18 = VAR_11;
 VAR_1.vc_ucred = VAR_15;
 VAR_11 = VAR_16;
 VAR_5 = 0;
 VAR_4 = (VAR_11 != ((void*)0));
 FUNC_1();




 if (VAR_18 != ((void*)0)) {
  if (FUNC_12(VAR_18) == 0) {
   FUNC_11(VAR_18, VAR_0,
       FUNC_10());
   FUNC_13(VAR_18);
  } else
   FUNC_9("audit_rotate_vnode: Couldn't close "
       "audit file.\n");
  FUNC_6(&VAR_17);
 }
}
