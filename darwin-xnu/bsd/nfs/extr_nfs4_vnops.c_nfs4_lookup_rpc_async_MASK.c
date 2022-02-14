
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uint32_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_vers; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_8__ {int nva_flags; } ;
struct TYPE_9__ {int n_flag; int n_fhsize; int * n_fhp; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,char*,int) ;
 struct nfsmount* FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 scalar_t__ FUNC_4 (struct nfsmount*) ;
 int FUNC_5 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,int ,struct nfsreq_secinfo_args*,int ,int *,struct nfsreq**) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (int,struct nfsm_chain*,int ) ;
 int FUNC_8 (int,struct nfsm_chain*,int *,struct nfsmount*,TYPE_2__*) ;
 int FUNC_9 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_10 (int,struct nfsm_chain*,int,int *,int ) ;
 int FUNC_11 (int,struct nfsm_chain*,char*,int,struct nfsmount*) ;
 int FUNC_12 (int,struct nfsm_chain*,int) ;
 int FUNC_13 (int,struct nfsm_chain*) ;
 int FUNC_14 (struct nfsm_chain*) ;
 int FUNC_15 (struct nfsm_chain*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

int
FUNC_19(
 nfsnode_t VAR_16,
 char *VAR_17,
 int VAR_18,
 vfs_context_t VAR_19,
 struct nfsreq **VAR_20)
{
 int VAR_21 = 0, VAR_22 = 0, VAR_23, VAR_24;
 struct nfsm_chain VAR_25;
 uint32_t VAR_26[VAR_5];
 struct nfsmount *VAR_27;
 struct nfsreq_secinfo_args VAR_28;

 VAR_27 = FUNC_1(VAR_16);
 if (FUNC_4(VAR_27))
  return (VAR_1);
 VAR_23 = VAR_27->nm_vers;
 if (VAR_16->n_vattr.nva_flags & VAR_7)
  return (VAR_0);

 if ((VAR_17[0] == '.') && (VAR_17[1] == '.') && (VAR_18 == 2)) {
  VAR_22 = 1;
  FUNC_0(&VAR_28, VAR_16, ((void*)0), 0, ((void*)0), 0);
 } else {
  FUNC_0(&VAR_28, VAR_16, VAR_16->n_fhp, VAR_16->n_fhsize, VAR_17, VAR_18);
 }

 FUNC_15(&VAR_25);


 VAR_24 = 5;
 FUNC_12(VAR_21, &VAR_25, 20 * VAR_4 + VAR_18);
 FUNC_9(VAR_21, &VAR_25, "lookup", VAR_27->nm_minor_vers, VAR_24);
 VAR_24--;
 FUNC_7(VAR_21, &VAR_25, VAR_12);
 FUNC_10(VAR_21, &VAR_25, VAR_23, VAR_16->n_fhp, VAR_16->n_fhsize);
 VAR_24--;
 FUNC_7(VAR_21, &VAR_25, VAR_8);
 FUNC_8(VAR_21, &VAR_25, VAR_15, VAR_27, VAR_16);
 VAR_24--;
 if (VAR_22) {
  FUNC_7(VAR_21, &VAR_25, VAR_11);
 } else {
  FUNC_7(VAR_21, &VAR_25, VAR_10);
  FUNC_11(VAR_21, &VAR_25, VAR_17, VAR_18, VAR_27);
 }
 VAR_24--;
 FUNC_7(VAR_21, &VAR_25, VAR_9);
 VAR_24--;
 FUNC_7(VAR_21, &VAR_25, VAR_8);
 FUNC_3(VAR_15, VAR_26);

 if ((VAR_16->n_flag & VAR_13) && !VAR_22)
  FUNC_2(VAR_26, VAR_6);
 if ((VAR_16->n_flag & VAR_14) && VAR_22)
  FUNC_2(VAR_26, VAR_6);
 if (((VAR_18 == 4) && (VAR_17[0] == '.') && (VAR_17[1] == 'z') && (VAR_17[2] == 'f') && (VAR_17[3] == 's')))
  FUNC_2(VAR_26, VAR_6);
 FUNC_8(VAR_21, &VAR_25, VAR_26, VAR_27, ((void*)0));
 FUNC_13(VAR_21, &VAR_25);
 FUNC_6(VAR_21, (VAR_24 == 0), VAR_2);
 FUNC_16(VAR_21);
 VAR_21 = FUNC_5(VAR_16, ((void*)0), &VAR_25, VAR_3,
   FUNC_17(VAR_19), FUNC_18(VAR_19), &VAR_28, 0, ((void*)0), VAR_20);
nfsmout:
 FUNC_14(&VAR_25);
 return (VAR_21);
}
