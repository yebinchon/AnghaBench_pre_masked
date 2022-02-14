
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef scalar_t__ uint32_t ;
typedef int u_int64_t ;
struct nfsmount {int nm_vers; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_fsattr {int nfsa_flags; int nfsa_bitmap; scalar_t__ nfsa_maxname; scalar_t__ nfsa_maxlink; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_8__ {int n_fhsize; int n_fhp; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfsmount* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (struct nfsmount*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,struct nfsm_chain*,int ,int ,int *,struct nfsm_chain*,int *,int*) ;
 int FUNC_7 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_8 (int,struct nfsm_chain*,int ) ;
 int FUNC_9 (int,struct nfsm_chain*) ;
 int FUNC_10 (struct nfsm_chain*) ;
 int FUNC_11 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_12 (struct nfsm_chain*) ;
 int FUNC_13 (int,struct nfsm_chain*,TYPE_1__*,int *) ;
 int FUNC_14 (int) ;

int
FUNC_15(
 nfsnode_t VAR_13,
 struct nfs_fsattr *VAR_14,
 vfs_context_t VAR_15)
{
 u_int64_t VAR_16;
 int VAR_17 = 0, VAR_18, VAR_19, VAR_20;
 struct nfsm_chain VAR_21, VAR_22;
 struct nfsmount *VAR_23 = FUNC_0(VAR_13);
 uint32_t VAR_24 = 0;

 if (FUNC_3(VAR_23))
  return (VAR_0);
 VAR_20 = VAR_23->nm_vers;

 FUNC_12(&VAR_21);
 FUNC_12(&VAR_22);


 FUNC_8(VAR_17, &VAR_21, FUNC_1(VAR_12));
 FUNC_7(VAR_17, &VAR_21, VAR_20, VAR_13->n_fhp, VAR_13->n_fhsize);
 FUNC_9(VAR_17, &VAR_21);
 FUNC_14(VAR_17);
 VAR_17 = FUNC_6(VAR_13, ((void*)0), &VAR_21, VAR_1, VAR_15, ((void*)0), &VAR_22, &VAR_16, &VAR_19);
 if ((VAR_18 = FUNC_4(VAR_13)))
  VAR_17 = VAR_18;
 FUNC_13(VAR_17, &VAR_22, VAR_13, &VAR_16);
 if (!VAR_18)
  FUNC_5(VAR_13);
 if (!VAR_17)
  VAR_17 = VAR_19;
 FUNC_11(VAR_17, &VAR_22, VAR_14->nfsa_maxlink);
 FUNC_11(VAR_17, &VAR_22, VAR_14->nfsa_maxname);
 VAR_14->nfsa_flags &= ~(VAR_11|VAR_10|VAR_8|VAR_9);
 FUNC_11(VAR_17, &VAR_22, VAR_24);
 if (VAR_24)
  VAR_14->nfsa_flags |= VAR_11;
 FUNC_11(VAR_17, &VAR_22, VAR_24);
 if (VAR_24)
  VAR_14->nfsa_flags |= VAR_10;
 FUNC_11(VAR_17, &VAR_22, VAR_24);
 if (VAR_24)
  VAR_14->nfsa_flags |= VAR_8;
 FUNC_11(VAR_17, &VAR_22, VAR_24);
 if (VAR_24)
  VAR_14->nfsa_flags |= VAR_9;
 FUNC_2(VAR_14->nfsa_bitmap, VAR_5);
 FUNC_2(VAR_14->nfsa_bitmap, VAR_6);
 FUNC_2(VAR_14->nfsa_bitmap, VAR_7);
 FUNC_2(VAR_14->nfsa_bitmap, VAR_4);
 FUNC_2(VAR_14->nfsa_bitmap, VAR_2);
 FUNC_2(VAR_14->nfsa_bitmap, VAR_3);
nfsmout:
 FUNC_10(&VAR_21);
 FUNC_10(&VAR_22);
 return (VAR_17);
}
