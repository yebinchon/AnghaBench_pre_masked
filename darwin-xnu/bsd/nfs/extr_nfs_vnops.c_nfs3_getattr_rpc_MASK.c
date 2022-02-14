
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
typedef int u_int64_t ;
typedef int u_char ;
struct nfsmount {int nm_vers; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_vattr {int dummy; } ;
typedef int nfsnode_t ;
typedef scalar_t__ mount_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfsmount* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nfsmount* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct nfsmount*) ;
 int FUNC_4 (struct nfsm_chain*,int,struct nfs_vattr*) ;
 int FUNC_5 (int ,scalar_t__,struct nfsm_chain*,int ,int ,int ,int *,int,struct nfsm_chain*,int *,int*) ;
 int FUNC_6 (int,struct nfsm_chain*,size_t) ;
 int FUNC_7 (int,struct nfsm_chain*,int *,size_t) ;
 int FUNC_8 (int,struct nfsm_chain*,int ) ;
 int FUNC_9 (int,struct nfsm_chain*) ;
 int FUNC_10 (struct nfsm_chain*) ;
 int FUNC_11 (struct nfsm_chain*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

int
FUNC_15(
 nfsnode_t VAR_7,
 mount_t VAR_8,
 u_char *VAR_9,
 size_t VAR_10,
 int VAR_11,
 vfs_context_t VAR_12,
 struct nfs_vattr *VAR_13,
 u_int64_t *VAR_14)
{
 struct nfsmount *VAR_15 = VAR_8 ? FUNC_2(VAR_8) : FUNC_0(VAR_7);
 int VAR_16 = 0, VAR_17, VAR_18, VAR_19 = 0;
 struct nfsm_chain VAR_20, VAR_21;

 if (FUNC_3(VAR_15))
  return (VAR_0);
 VAR_18 = VAR_15->nm_vers;

 if (VAR_11 & VAR_3)
  VAR_19 = VAR_5;

 if (VAR_11 & VAR_4)
  VAR_19 |= VAR_6;

 FUNC_11(&VAR_20);
 FUNC_11(&VAR_21);

 FUNC_8(VAR_16, &VAR_20, FUNC_1(VAR_18));
 if (VAR_18 != VAR_2)
  FUNC_6(VAR_16, &VAR_20, VAR_10);
 FUNC_7(VAR_16, &VAR_20, VAR_9, VAR_10);
 FUNC_9(VAR_16, &VAR_20);
 FUNC_12(VAR_16);
 VAR_16 = FUNC_5(VAR_7, VAR_8, &VAR_20, VAR_1,
   FUNC_13(VAR_12), FUNC_14(VAR_12),
   ((void*)0), VAR_19, &VAR_21, VAR_14, &VAR_17);
 if (!VAR_16)
  VAR_16 = VAR_17;
 FUNC_12(VAR_16);
 VAR_16 = FUNC_4(&VAR_21, VAR_18, VAR_13);
nfsmout:
 FUNC_10(&VAR_20);
 FUNC_10(&VAR_21);
 return (VAR_16);
}
