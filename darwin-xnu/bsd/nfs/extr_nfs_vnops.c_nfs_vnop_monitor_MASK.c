
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vnop_monitor_args {int a_vp; } ;
struct timespec {int member_0; int member_1; } ;
struct nfsmount {int nm_lock; int nm_monlist; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_6__ {scalar_t__ le_next; } ;
struct TYPE_7__ {int n_mflag; TYPE_1__ n_monlink; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_2 (int ) ;
 struct nfsmount* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int*,int *,scalar_t__,char*,struct timespec*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct nfsmount*) ;
 int FUNC_8 (struct nfsmount*) ;
 scalar_t__ FUNC_9 (int ) ;

int
FUNC_10(
 struct vnop_monitor_args *VAR_6)







{
 nfsnode_t VAR_7 = FUNC_2(VAR_6->a_vp);
 struct nfsmount *VAR_8 = FUNC_3(VAR_6->a_vp);
 int VAR_9 = 0;

 if (FUNC_7(VAR_8))
  return (VAR_0);


 FUNC_4(&VAR_8->nm_lock);
 if (FUNC_9(VAR_6->a_vp)) {

  if (VAR_7->n_monlink.le_next == VAR_1) {
   FUNC_0(&VAR_8->nm_monlist, VAR_7, VAR_5);
   FUNC_8(VAR_8);
  }
 } else {


  while (VAR_7->n_mflag & VAR_2) {
   struct timespec VAR_10 = { 1, 0 };
   VAR_7->n_mflag |= VAR_3;
   FUNC_6(&VAR_7->n_mflag, &VAR_8->nm_lock, VAR_4-1, "nfswaitmonscan", &VAR_10);
  }
  if (VAR_7->n_monlink.le_next != VAR_1) {
   FUNC_1(VAR_7, VAR_5);
   VAR_7->n_monlink.le_next = VAR_1;
  }
 }
 FUNC_5(&VAR_8->nm_lock);

 return (VAR_9);
}
