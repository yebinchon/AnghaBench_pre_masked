
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef scalar_t__ uint32_t ;
typedef int u_int64_t ;
struct nfsreq {int r_secinfo; } ;
struct nfsmount {int nm_vers; int nm_state; int nm_lock; int nm_auth; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_vattr {int dummy; } ;
struct nfs_sec {int * flavors; scalar_t__ count; } ;
typedef int nfsnode_t ;
struct TYPE_4__ {int fh_len; int fh_data; } ;
typedef TYPE_1__ fhandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nfsmount* FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int,struct nfs_vattr*,TYPE_1__*) ;
 int FUNC_4 (struct nfsm_chain*,int *,struct nfs_vattr*,int *,int *,int *) ;
 int FUNC_5 (struct nfsmount*,int *,int ,int *,scalar_t__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct nfsreq*,struct nfsm_chain*,int *,int*) ;
 int FUNC_9 (struct nfsm_chain*) ;
 int FUNC_10 (int,struct nfsm_chain*,int) ;
 int FUNC_11 (int,struct nfsm_chain*,int,int ) ;
 int FUNC_12 (int,struct nfsm_chain*,int ,int,int *) ;
 int FUNC_13 (struct nfsm_chain*) ;
 int FUNC_14 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_15 (int,struct nfsm_chain*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;

int
FUNC_18(
 nfsnode_t VAR_13,
 char *VAR_14,
 int VAR_15,
 vfs_context_t VAR_16,
 struct nfsreq *VAR_17,
 u_int64_t *VAR_18,
 fhandle_t *VAR_19,
 struct nfs_vattr *VAR_20)
{
 int VAR_21 = 0, VAR_22 = VAR_1, VAR_23, VAR_24, VAR_25, VAR_26 = 0;
 uint32_t VAR_27 = VAR_9;
 u_int64_t VAR_28;
 struct nfsmount *VAR_29;
 struct nfsm_chain VAR_30;

 VAR_29 = FUNC_0(VAR_13);
 if (VAR_29 == ((void*)0))
  return (VAR_2);
 VAR_24 = VAR_29->nm_vers;
 if ((VAR_14[0] == '.') && (VAR_14[1] == '.') && (VAR_15 == 2))
  VAR_26 = 1;

 FUNC_13(&VAR_30);

 VAR_21 = FUNC_8(VAR_17, &VAR_30, &VAR_28, &VAR_23);

 if ((VAR_22 = FUNC_6(VAR_13)))
  VAR_21 = VAR_22;
 FUNC_15(VAR_21, &VAR_30);
 FUNC_10(VAR_21, &VAR_30, VAR_25);
 FUNC_14(VAR_21, &VAR_30, VAR_11);
 FUNC_14(VAR_21, &VAR_30, VAR_7);
 if (VAR_18)
  *VAR_18 = VAR_28;
 FUNC_12(VAR_21, &VAR_30, VAR_13, VAR_24, &VAR_28);

 FUNC_14(VAR_21, &VAR_30, (VAR_26 ? VAR_10 : VAR_9));
 FUNC_16(VAR_21 || !VAR_19 || !VAR_20);
 FUNC_14(VAR_21, &VAR_30, VAR_8);
 FUNC_10(VAR_21, &VAR_30, VAR_19->fh_len);
 if (VAR_21 == 0 && VAR_19->fh_len > sizeof(VAR_19->fh_data))
  VAR_21 = VAR_0;
 FUNC_16(VAR_21);
 FUNC_11(VAR_21, &VAR_30, VAR_19->fh_len, VAR_19->fh_data);
 FUNC_14(VAR_21, &VAR_30, VAR_7);
 if ((VAR_21 == VAR_4) || (VAR_21 == VAR_3)) {

  FUNC_3(VAR_13, VAR_14, VAR_15, VAR_20, VAR_19);
  VAR_21 = 0;
 } else {
  FUNC_16(VAR_21);
  VAR_21 = FUNC_4(&VAR_30, ((void*)0), VAR_20, ((void*)0), ((void*)0), ((void*)0));
 }
nfsmout:
 if (!VAR_22)
  FUNC_7(VAR_13);
 FUNC_9(&VAR_30);
 if (!VAR_21 && (VAR_27 == VAR_9) && (VAR_29->nm_state & VAR_6)) {


  struct nfs_sec VAR_31;

  VAR_31.count = VAR_12;
  VAR_21 = FUNC_5(VAR_29, &VAR_17->r_secinfo, FUNC_17(VAR_16), VAR_31.flavors, &VAR_31.count);

  if (VAR_21 == VAR_5)
   VAR_21 = 0;
  if (!VAR_21) {

   FUNC_1(&VAR_29->nm_lock);
   if (VAR_31.count)
    VAR_29->nm_auth = VAR_31.flavors[0];
   VAR_29->nm_state &= ~VAR_6;
   FUNC_2(&VAR_29->nm_lock);
  }
 }
 return (VAR_21);
}
