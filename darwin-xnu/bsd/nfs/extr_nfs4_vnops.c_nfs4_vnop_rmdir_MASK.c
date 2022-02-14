
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
struct vnop_rmdir_args {struct componentname* a_cnp; int a_dvp; int a_vp; int a_context; } ;
struct TYPE_18__ {int nfsa_flags; } ;
struct nfsmount {TYPE_1__ nm_fsattr; } ;
struct nfs_dulookup {int dummy; } ;
struct componentname {int cn_namelen; int cn_nameptr; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_19__ {int n_hflag; int n_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 struct nfsmount* FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_7 (struct nfs_dulookup*,TYPE_2__*,int ) ;
 int FUNC_8 (struct nfs_dulookup*,TYPE_2__*,int ,int ,int ) ;
 int FUNC_9 (struct nfs_dulookup*,TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,int *,int ,int ) ;
 scalar_t__ FUNC_11 (struct nfsmount*) ;
 int FUNC_12 (TYPE_2__*,TYPE_2__*,struct componentname*,int ) ;
 int FUNC_13 (TYPE_2__*,TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_14 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;

int
FUNC_18(
 struct vnop_rmdir_args *VAR_9)






{
 vfs_context_t VAR_10 = VAR_9->a_context;
 vnode_t VAR_11 = VAR_9->a_vp;
 vnode_t VAR_12 = VAR_9->a_dvp;
 struct componentname *VAR_13 = VAR_9->a_cnp;
 struct nfsmount *VAR_14;
 int VAR_15 = 0, VAR_16;
 nfsnode_t VAR_17 = FUNC_3(VAR_11);
 nfsnode_t VAR_18 = FUNC_3(VAR_12);
 struct nfs_dulookup VAR_19;

 if (FUNC_17(VAR_11) != VAR_6)
  return (VAR_0);

 VAR_14 = FUNC_2(VAR_18);
 if (FUNC_11(VAR_14))
  return (VAR_2);
 VAR_16 = (VAR_14->nm_fsattr.nfsa_flags & VAR_3);

 if ((VAR_15 = FUNC_14(VAR_18, VAR_17, FUNC_15(VAR_10))))
  return (VAR_15);

 if (!VAR_16) {
  FUNC_8(&VAR_19, VAR_18, VAR_13->cn_nameptr, VAR_13->cn_namelen, VAR_10);
  FUNC_9(&VAR_19, VAR_18, VAR_10);
 }

 VAR_15 = FUNC_6(VAR_18, VAR_13->cn_nameptr, VAR_13->cn_namelen,
   FUNC_15(VAR_10), FUNC_16(VAR_10));

 FUNC_12(VAR_18, VAR_17, VAR_13, VAR_10);

 FUNC_10(VAR_18, ((void*)0), VAR_10, VAR_4);
 if (!VAR_16)
  FUNC_7(&VAR_19, VAR_18, VAR_10);
 FUNC_13(VAR_18, VAR_17);




 if (VAR_15 == VAR_1)
  VAR_15 = 0;
 if (!VAR_15) {





  FUNC_4(VAR_8);
  if (VAR_17->n_hflag & VAR_5) {
   FUNC_1(VAR_17, VAR_7);
   VAR_17->n_hflag &= ~VAR_5;
   FUNC_0(266, 0, VAR_17, VAR_17->n_flag, 0xb1eb1e);
  }
  FUNC_5(VAR_8);
 }
 return (VAR_15);
}
