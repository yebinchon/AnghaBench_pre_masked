
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_mountp; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_fs_locations {int dummy; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_4__ {int n_fhsize; int * n_fhp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,int *,int *,int,char const*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct nfsm_chain*,int *,int *,int *,int *,struct nfs_fs_locations*) ;
 int FUNC_4 (TYPE_1__*,int ,struct nfsm_chain*,int ,int ,int ,struct nfsreq_secinfo_args*,int ,int *,struct nfsreq**) ;
 int FUNC_5 (struct nfsreq*,struct nfsm_chain*,int *,int*) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (int,struct nfsm_chain*,int ) ;
 int FUNC_8 (int,struct nfsm_chain*,int *,int) ;
 int FUNC_9 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_10 (int,struct nfsm_chain*,int ,int *,int) ;
 int FUNC_11 (int,struct nfsm_chain*,char const*,int ,struct nfsmount*) ;
 int FUNC_12 (int,struct nfsm_chain*,int) ;
 int FUNC_13 (int,struct nfsm_chain*) ;
 int FUNC_14 (struct nfsm_chain*) ;
 int FUNC_15 (int,struct nfsm_chain*,int) ;
 int FUNC_16 (struct nfsm_chain*) ;
 int FUNC_17 (int,struct nfsm_chain*,int ) ;
 int FUNC_18 (int,struct nfsm_chain*) ;
 int FUNC_19 (int) ;
 int FUNC_20 (char const*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;

int
FUNC_23(
 struct nfsmount *VAR_10,
 nfsnode_t VAR_11,
 u_char *VAR_12,
 int VAR_13,
 const char *VAR_14,
 vfs_context_t VAR_15,
 struct nfs_fs_locations *VAR_16)
{
 int VAR_17 = 0, VAR_18, VAR_19;
 uint32_t VAR_20[VAR_4];
 struct nfsreq VAR_21, *VAR_22 = &VAR_21;
 struct nfsreq_secinfo_args VAR_23;
 struct nfsm_chain VAR_24, VAR_25;
 uint64_t VAR_26;

 if (!VAR_12 && VAR_11) {
  VAR_12 = VAR_11->n_fhp;
  VAR_13 = VAR_11->n_fhsize;
 }
 if (!VAR_12)
  return (VAR_0);

 FUNC_16(&VAR_24);
 FUNC_16(&VAR_25);

 FUNC_0(&VAR_23, ((void*)0), VAR_12, VAR_13, VAR_14, 0);
 VAR_18 = 3;
 FUNC_12(VAR_17, &VAR_24, 18 * VAR_3);
 FUNC_9(VAR_17, &VAR_24, "fs_locations", VAR_10->nm_minor_vers, VAR_18);
 VAR_18--;
 FUNC_7(VAR_17, &VAR_24, VAR_8);
 FUNC_10(VAR_17, &VAR_24, VAR_9, VAR_12, VAR_13);
 VAR_18--;
 FUNC_7(VAR_17, &VAR_24, VAR_7);
 FUNC_11(VAR_17, &VAR_24, VAR_14, FUNC_20(VAR_14), VAR_10);
 VAR_18--;
 FUNC_7(VAR_17, &VAR_24, VAR_6);
 FUNC_2(VAR_20);
 FUNC_1(VAR_20, VAR_5);
 FUNC_8(VAR_17, &VAR_24, VAR_20, VAR_4);
 FUNC_13(VAR_17, &VAR_24);
 FUNC_6(VAR_17, (VAR_18 == 0), VAR_1);
 FUNC_19(VAR_17);
 VAR_17 = FUNC_4(VAR_11, VAR_10->nm_mountp, &VAR_24, VAR_2,
   FUNC_21(VAR_15), FUNC_22(VAR_15), &VAR_23, 0, ((void*)0), &VAR_22);
 if (!VAR_17)
  VAR_17 = FUNC_5(VAR_22, &VAR_25, &VAR_26, &VAR_19);
 FUNC_18(VAR_17, &VAR_25);
 FUNC_15(VAR_17, &VAR_25, VAR_18);
 FUNC_17(VAR_17, &VAR_25, VAR_8);
 FUNC_17(VAR_17, &VAR_25, VAR_7);
 FUNC_17(VAR_17, &VAR_25, VAR_6);
 FUNC_19(VAR_17);
 VAR_17 = FUNC_3(&VAR_25, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_16);
nfsmout:
 FUNC_14(&VAR_25);
 FUNC_14(&VAR_24);
 return (VAR_17);
}
