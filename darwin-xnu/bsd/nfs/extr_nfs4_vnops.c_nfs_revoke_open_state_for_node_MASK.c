
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct nfsmount {int nm_lock; int nm_state; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_8__ {int n_flag; } ;


 int VAR_0 ;
 struct nfsmount* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfsmount*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;

void
FUNC_8(nfsnode_t VAR_2)
{
 struct nfsmount *VAR_3;


 FUNC_5(VAR_2);
 if (VAR_2->n_flag & VAR_1)
 {
  FUNC_1(VAR_2, "nfs_revoke_open_state_for_node(): already revoked");
  FUNC_6(VAR_2);
  return;
 }
 VAR_2->n_flag |= VAR_1;
 FUNC_6(VAR_2);

 FUNC_7(VAR_2, 0);
 FUNC_1(VAR_2, "nfs: state lost for %p 0x%x", VAR_2, VAR_2->n_flag);


 if ((VAR_3 = FUNC_0(VAR_2))) {
  FUNC_2(&VAR_3->nm_lock);
  VAR_3->nm_state |= VAR_0;
  FUNC_4(VAR_3);
  FUNC_3(&VAR_3->nm_lock);
 }
}
