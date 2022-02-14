
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uint32_t ;
typedef int u_int64_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_11__ {int nva_flags; } ;
struct TYPE_12__ {int n_size; int n_fhsize; int n_fhp; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,int *,int ) ;
 struct nfsmount* FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct nfsmount*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,struct nfsreq_secinfo_args*,struct nfsm_chain*,int *,int*) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (int,struct nfsm_chain*,int ) ;
 int FUNC_8 (int,struct nfsm_chain*,int ,struct nfsmount*,TYPE_2__*) ;
 int FUNC_9 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_10 (int,struct nfsm_chain*,int ,int ,int ) ;
 int FUNC_11 (int,struct nfsm_chain*,int) ;
 int FUNC_12 (int,struct nfsm_chain*) ;
 int FUNC_13 (struct nfsm_chain*) ;
 int FUNC_14 (int,struct nfsm_chain*,int) ;
 int FUNC_15 (int,struct nfsm_chain*,int,char*) ;
 int FUNC_16 (int,struct nfsm_chain*,TYPE_2__*,int ,int *) ;
 int FUNC_17 (struct nfsm_chain*) ;
 int FUNC_18 (int,struct nfsm_chain*,int ) ;
 int FUNC_19 (int,struct nfsm_chain*) ;
 int FUNC_20 (int) ;

int
FUNC_21(nfsnode_t VAR_12, char *VAR_13, uint32_t *VAR_14, vfs_context_t VAR_15)
{
 struct nfsmount *VAR_16;
 int VAR_17 = 0, VAR_18 = VAR_1, VAR_19, VAR_20;
 uint32_t VAR_21 = 0;
 u_int64_t VAR_22;
 struct nfsm_chain VAR_23, VAR_24;
 struct nfsreq_secinfo_args VAR_25;

 VAR_16 = FUNC_1(VAR_12);
 if (FUNC_2(VAR_16))
  return (VAR_2);
 if (VAR_12->n_vattr.nva_flags & VAR_6)
  return (VAR_0);
 FUNC_0(&VAR_25, VAR_12, ((void*)0), 0, ((void*)0), 0);
 FUNC_17(&VAR_23);
 FUNC_17(&VAR_24);


 VAR_20 = 3;
 FUNC_11(VAR_17, &VAR_23, 16 * VAR_5);
 FUNC_9(VAR_17, &VAR_23, "readlink", VAR_16->nm_minor_vers, VAR_20);
 VAR_20--;
 FUNC_7(VAR_17, &VAR_23, VAR_8);
 FUNC_10(VAR_17, &VAR_23, VAR_10, VAR_12->n_fhp, VAR_12->n_fhsize);
 VAR_20--;
 FUNC_7(VAR_17, &VAR_23, VAR_7);
 FUNC_8(VAR_17, &VAR_23, VAR_11, VAR_16, VAR_12);
 VAR_20--;
 FUNC_7(VAR_17, &VAR_23, VAR_9);
 FUNC_12(VAR_17, &VAR_23);
 FUNC_6(VAR_17, (VAR_20 == 0), VAR_3);
 FUNC_20(VAR_17);
 VAR_17 = FUNC_5(VAR_12, ((void*)0), &VAR_23, VAR_4, VAR_15, &VAR_25, &VAR_24, &VAR_22, &VAR_19);

 if ((VAR_18 = FUNC_3(VAR_12)))
  VAR_17 = VAR_18;
 FUNC_19(VAR_17, &VAR_24);
 FUNC_14(VAR_17, &VAR_24, VAR_20);
 FUNC_18(VAR_17, &VAR_24, VAR_8);
 FUNC_18(VAR_17, &VAR_24, VAR_7);
 FUNC_16(VAR_17, &VAR_24, VAR_12, VAR_10, &VAR_22);
 FUNC_18(VAR_17, &VAR_24, VAR_9);
 FUNC_14(VAR_17, &VAR_24, VAR_21);
 FUNC_20(VAR_17);
 if (VAR_21 >= *VAR_14) {
  if (VAR_12->n_size && (VAR_12->n_size < *VAR_14))
   VAR_21 = VAR_12->n_size;
  else
   VAR_21 = *VAR_14 - 1;
 }
 FUNC_15(VAR_17, &VAR_24, VAR_21, VAR_13);
 if (!VAR_17)
  *VAR_14 = VAR_21;
nfsmout:
 if (!VAR_18)
  FUNC_4(VAR_12);
 FUNC_13(&VAR_23);
 FUNC_13(&VAR_24);
 return (VAR_17);
}
