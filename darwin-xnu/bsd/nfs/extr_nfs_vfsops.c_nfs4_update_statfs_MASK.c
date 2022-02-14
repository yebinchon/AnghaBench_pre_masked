
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uint32_t ;
typedef int u_int64_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct TYPE_12__ {int nfsa_bsize; } ;
struct nfsmount {int nm_vers; TYPE_7__ nm_fsattr; int nm_lock; int nm_minor_vers; TYPE_1__* nm_dnp; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_vattr {int dummy; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_11__ {int n_fhsize; int n_fhp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct nfsreq_secinfo_args*,TYPE_1__*,int *,int ,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct nfs_vattr*) ;
 int FUNC_6 (struct nfs_vattr*) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct nfsm_chain*,TYPE_7__*,struct nfs_vattr*,int *,int *,int *) ;
 int VAR_9 ;
 int FUNC_10 (TYPE_1__*,struct nfs_vattr*,int *,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int *,struct nfsm_chain*,int ,int ,int ,int *,int ,struct nfsm_chain*,int *,int*) ;
 int FUNC_14 (int,int,int) ;
 int FUNC_15 (int,struct nfsm_chain*,int ) ;
 int FUNC_16 (int,struct nfsm_chain*,int *,struct nfsmount*,TYPE_1__*) ;
 int FUNC_17 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_18 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_19 (int,struct nfsm_chain*,int) ;
 int FUNC_20 (int,struct nfsm_chain*) ;
 int FUNC_21 (struct nfsm_chain*) ;
 int FUNC_22 (int,struct nfsm_chain*,int) ;
 int FUNC_23 (struct nfsm_chain*) ;
 int FUNC_24 (int,struct nfsm_chain*,int ) ;
 int FUNC_25 (int,struct nfsm_chain*) ;
 int FUNC_26 (int) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;

int
FUNC_31(struct nfsmount *VAR_10, vfs_context_t VAR_11)
{
 nfsnode_t VAR_12;
 int VAR_13 = 0, VAR_14, VAR_15, VAR_16, VAR_17;
 u_int64_t VAR_18;
 struct nfsm_chain VAR_19, VAR_20;
 uint32_t VAR_21[VAR_4];
 struct nfs_vattr VAR_22;
 struct nfsreq_secinfo_args VAR_23;

 VAR_16 = VAR_10->nm_vers;
 VAR_12 = VAR_10->nm_dnp;
 if (!VAR_12)
  return (VAR_0);
 if ((VAR_13 = FUNC_29(FUNC_3(VAR_12))))
  return (VAR_13);

 FUNC_1(&VAR_23, VAR_12, ((void*)0), 0, ((void*)0), 0);
 FUNC_6(&VAR_22);
 FUNC_23(&VAR_19);
 FUNC_23(&VAR_20);


 VAR_17 = 2;
 FUNC_19(VAR_13, &VAR_19, 15 * VAR_3);
 FUNC_17(VAR_13, &VAR_19, "statfs", VAR_10->nm_minor_vers, VAR_17);
 VAR_17--;
 FUNC_15(VAR_13, &VAR_19, VAR_7);
 FUNC_18(VAR_13, &VAR_19, VAR_16, VAR_12->n_fhp, VAR_12->n_fhsize);
 VAR_17--;
 FUNC_15(VAR_13, &VAR_19, VAR_6);
 FUNC_4(VAR_9, VAR_21);
 FUNC_0(VAR_21);
 FUNC_16(VAR_13, &VAR_19, VAR_21, VAR_10, VAR_12);
 FUNC_20(VAR_13, &VAR_19);
 FUNC_14(VAR_13, (VAR_17 == 0), VAR_1);
 FUNC_26(VAR_13);
 VAR_13 = FUNC_13(VAR_12, ((void*)0), &VAR_19, VAR_2,
  FUNC_27(VAR_11), FUNC_28(VAR_11),
  ((void*)0), VAR_8, &VAR_20, &VAR_18, &VAR_15);
 FUNC_25(VAR_13, &VAR_20);
 FUNC_22(VAR_13, &VAR_20, VAR_17);
 FUNC_24(VAR_13, &VAR_20, VAR_7);
 FUNC_24(VAR_13, &VAR_20, VAR_6);
 FUNC_14(VAR_13, FUNC_2(VAR_12), VAR_0);
 FUNC_26(VAR_13);
 FUNC_7(&VAR_10->nm_lock);
 VAR_13 = FUNC_9(&VAR_20, &VAR_10->nm_fsattr, &VAR_22, ((void*)0), ((void*)0), ((void*)0));
 FUNC_8(&VAR_10->nm_lock);
 FUNC_26(VAR_13);
 if ((VAR_14 = FUNC_11(VAR_12)))
  VAR_13 = VAR_14;
 if (!VAR_13)
  FUNC_10(VAR_12, &VAR_22, &VAR_18, 0);
 if (!VAR_14)
  FUNC_12(VAR_12);
 FUNC_14(VAR_13, FUNC_2(VAR_12), VAR_0);
 FUNC_26(VAR_13);
 VAR_10->nm_fsattr.nfsa_bsize = VAR_5;
nfsmout:
 FUNC_5(&VAR_22);
 FUNC_21(&VAR_19);
 FUNC_21(&VAR_20);
 FUNC_30(FUNC_3(VAR_12));
 return (VAR_13);
}
