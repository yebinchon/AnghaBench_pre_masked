
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int * vnode_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
struct nfsreq_secinfo_args {int rsia_fhsize; char* rsia_name; int rsia_namelen; int * rsia_fh; TYPE_2__* rsia_np; } ;
struct nfsmount {int nm_vers; int nm_mountp; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_sillyrename {char* nsr_name; int nsr_namlen; TYPE_2__* nsr_dnp; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_8__ {int nva_flags; } ;
struct TYPE_9__ {int n_fhsize; int * n_fhp; int * n_parent; TYPE_1__ n_vattr; struct nfs_sillyrename* n_sillyrename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct nfsmount*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,struct nfsm_chain*,int ,int ,int ,int *,int ,struct nfsm_chain*,int *,int*) ;
 int FUNC_8 (int,int,int ) ;
 int FUNC_9 (int,struct nfsm_chain*,int ) ;
 int FUNC_10 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_11 (int,struct nfsm_chain*,int,int *,int) ;
 int FUNC_12 (int,struct nfsm_chain*,char const*,int,struct nfsmount*) ;
 int FUNC_13 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_14 (int,struct nfsm_chain*) ;
 int FUNC_15 (struct nfsm_chain*) ;
 int FUNC_16 (int,struct nfsm_chain*,int) ;
 int FUNC_17 (struct nfsm_chain*,int *,int*) ;
 int FUNC_18 (struct nfsm_chain*) ;
 int FUNC_19 (int,struct nfsm_chain*,int ) ;
 int FUNC_20 (int,struct nfsm_chain*) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (char const*) ;
 int FUNC_24 (char const*,int ) ;
 int FUNC_25 (int *) ;
 char* FUNC_26 (int *) ;
 int * FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (char const*) ;
 scalar_t__ FUNC_30 (int *) ;

int
FUNC_31(struct nfsmount *VAR_12, struct nfsreq_secinfo_args *VAR_13, kauth_cred_t VAR_14, uint32_t *VAR_15, int *VAR_16)
{
 int VAR_17 = 0, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 vnode_t VAR_23 = VAR_10;
 nfsnode_t VAR_24, VAR_25;
 u_char *VAR_26;
 const char *VAR_27 = ((void*)0), *VAR_28;
 uint64_t VAR_29;
 struct nfsm_chain VAR_30, VAR_31;

 *VAR_16 = 0;
 if (FUNC_4(VAR_12))
  return (VAR_1);
 VAR_19 = VAR_12->nm_vers;
 VAR_24 = VAR_13->rsia_np;

 FUNC_18(&VAR_30);
 FUNC_18(&VAR_31);

 VAR_26 = VAR_13->rsia_fh;
 VAR_22 = VAR_26 ? VAR_13->rsia_fhsize : 0;
 VAR_28 = VAR_13->rsia_name;
 VAR_21 = VAR_28 ? VAR_13->rsia_namelen : 0;
 if (VAR_28 && !VAR_21)
  VAR_21 = FUNC_23(VAR_28);
 if (!VAR_26 && VAR_28) {
  if (!VAR_24)
   goto gotargs;
  VAR_26 = VAR_24->n_fhp;
  VAR_22 = VAR_24->n_fhsize;
 }
 if (VAR_26 && VAR_28)
  goto gotargs;

 if (!VAR_24)
  return (VAR_0);
 FUNC_5(VAR_24);
 if ((FUNC_30(FUNC_0(VAR_24)) != VAR_11) && VAR_24->n_sillyrename) {




  struct nfs_sillyrename *VAR_32 = VAR_24->n_sillyrename;
  VAR_25 = VAR_32->nsr_dnp;
  VAR_23 = FUNC_0(VAR_25);
  if ((VAR_17 = FUNC_25(VAR_23))) {
   FUNC_6(VAR_24);
   goto nfsmout;
  }
  VAR_26 = VAR_25->n_fhp;
  VAR_22 = VAR_25->n_fhsize;
  VAR_28 = VAR_32->nsr_name;
  VAR_21 = VAR_32->nsr_namlen;
 } else {






  if ((VAR_24->n_vattr.nva_flags & VAR_6) &&
      (((VAR_23 = VAR_24->n_parent)) && (VAR_17 = FUNC_25(VAR_23))))
   VAR_23 = ((void*)0);
  if (!VAR_23)
   VAR_23 = FUNC_27(FUNC_0(VAR_24));
  VAR_27 = FUNC_26(FUNC_0(VAR_24));
  if (!VAR_23 || !VAR_27) {
   if (!VAR_17)
    VAR_17 = VAR_0;
   FUNC_6(VAR_24);
   goto nfsmout;
  }
  VAR_25 = FUNC_2(VAR_23);
  VAR_26 = VAR_25->n_fhp;
  VAR_22 = VAR_25->n_fhsize;
  VAR_28 = VAR_27;
  VAR_21 = FUNC_24(VAR_27, VAR_3);
 }
 FUNC_6(VAR_24);

gotargs:

 VAR_20 = 2;
 FUNC_13(VAR_17, &VAR_30,
  4 * VAR_5 + FUNC_1(VAR_19) + FUNC_21(VAR_21));
 FUNC_10(VAR_17, &VAR_30, "secinfo", VAR_12->nm_minor_vers, VAR_20);
 VAR_20--;
 if (VAR_26) {
  FUNC_9(VAR_17, &VAR_30, VAR_7);
  FUNC_11(VAR_17, &VAR_30, VAR_19, VAR_26, VAR_22);
 } else {
  FUNC_9(VAR_17, &VAR_30, VAR_8);
 }
 VAR_20--;
 FUNC_9(VAR_17, &VAR_30, VAR_9);
 FUNC_12(VAR_17, &VAR_30, VAR_28, VAR_21, VAR_12);
 FUNC_14(VAR_17, &VAR_30);
 FUNC_8(VAR_17, (VAR_20 == 0), VAR_2);
 FUNC_22(VAR_17);
 VAR_17 = FUNC_7(VAR_24, VAR_12->nm_mountp, &VAR_30, VAR_4,
   FUNC_3(), VAR_14, ((void*)0), 0, &VAR_31, &VAR_29, &VAR_18);
 FUNC_20(VAR_17, &VAR_31);
 FUNC_16(VAR_17, &VAR_31, VAR_20);
 FUNC_19(VAR_17, &VAR_31, VAR_26 ? VAR_7 : VAR_8);
 FUNC_19(VAR_17, &VAR_31, VAR_9);
 FUNC_22(VAR_17);
 VAR_17 = FUNC_17(&VAR_31, VAR_15, VAR_16);
nfsmout:
 FUNC_15(&VAR_30);
 FUNC_15(&VAR_31);
 if (VAR_27)
  FUNC_29(VAR_27);
 if (VAR_23 != VAR_10)
  FUNC_28(VAR_23);
 return (VAR_17);
}
