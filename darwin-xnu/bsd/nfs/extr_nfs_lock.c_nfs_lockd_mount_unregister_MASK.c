
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tqe_next; } ;
struct nfsmount {TYPE_1__ nm_ldlink; } ;
typedef scalar_t__ mach_port_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,struct nfsmount*,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (char*,scalar_t__,...) ;

void
FUNC_9(struct nfsmount *VAR_9)
{
 int VAR_10;
 mach_port_t VAR_11 = VAR_1;
 kern_return_t VAR_12;

 FUNC_5(VAR_4);
 if (VAR_9->nm_ldlink.tqe_next == VAR_3) {
  FUNC_6(VAR_4);
  return;
 }

 FUNC_1(&VAR_5, VAR_9, VAR_8);
 VAR_9->nm_ldlink.tqe_next = VAR_3;

 VAR_6--;


 VAR_10 = ((VAR_6 == 0) && VAR_7);
 if (VAR_10)
  VAR_7 = 0;

 FUNC_6(VAR_4);

 if (!VAR_10)
  return;




 VAR_12 = FUNC_2(FUNC_3(), &VAR_11);
 if ((VAR_12 != VAR_2) || !FUNC_0(VAR_11)) {
  FUNC_8("nfs_lockd_mount_change: shutdown couldn't get port, kr %d, port %s\n",
   VAR_12, (VAR_11 == VAR_1) ? "NULL" :
   (VAR_11 == VAR_0) ? "DEAD" : "VALID");
  return;
 }

 VAR_12 = FUNC_7(VAR_11);
 if (VAR_12 != VAR_2)
  FUNC_8("nfs_lockd_mount_change: shutdown %d\n", VAR_12);

 FUNC_4(VAR_11);
}
