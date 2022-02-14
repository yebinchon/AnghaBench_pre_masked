
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ u_int64_t ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_vers; int nm_state; scalar_t__ nm_verf; int nm_lock; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int mount_t ;
struct TYPE_9__ {int nva_flags; } ;
struct TYPE_10__ {int n_lastio; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 struct nfsmount* FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_5 (struct nfsmount*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct nfsreq*) ;
 int FUNC_9 (struct nfsreq*,struct nfsm_chain*,scalar_t__*,int*) ;
 int FUNC_10 (struct nfsm_chain*) ;
 int FUNC_11 (int,struct nfsm_chain*,int) ;
 int FUNC_12 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_13 (int,struct nfsm_chain*,TYPE_2__*,int,scalar_t__*) ;
 int FUNC_14 (struct nfsm_chain*) ;
 int FUNC_15 (int,struct nfsm_chain*,int ) ;
 int FUNC_16 (int,struct nfsm_chain*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ) ;

int
FUNC_19(
 nfsnode_t VAR_12,
 struct nfsreq *VAR_13,
 int *VAR_14,
 size_t *VAR_15,
 uint64_t *VAR_16)
{
 struct nfsmount *VAR_17;
 int VAR_18 = 0, VAR_19 = VAR_1, VAR_20, VAR_21, VAR_22;
 int VAR_23 = VAR_10;
 size_t VAR_24 = 0;
 u_int64_t VAR_25, VAR_26;
 mount_t VAR_27;
 struct nfsm_chain VAR_28;

 VAR_17 = FUNC_1(VAR_12);
 if (FUNC_5(VAR_17)) {
  FUNC_8(VAR_13);
  return (VAR_2);
 }
 VAR_20 = VAR_17->nm_vers;

 FUNC_14(&VAR_28);

 VAR_18 = FUNC_9(VAR_13, &VAR_28, &VAR_25, &VAR_22);
 if (VAR_18 == VAR_0)
  return (VAR_18);
 VAR_17 = FUNC_1(VAR_12);
 if (FUNC_5(VAR_17))
  VAR_18 = VAR_2;
 if (!VAR_18 && (VAR_19 = FUNC_6(VAR_12)))
  VAR_18 = VAR_19;
 FUNC_16(VAR_18, &VAR_28);
 FUNC_11(VAR_18, &VAR_28, VAR_21);
 FUNC_15(VAR_18, &VAR_28, VAR_8);
 FUNC_15(VAR_18, &VAR_28, VAR_9);
 FUNC_11(VAR_18, &VAR_28, VAR_24);
 FUNC_17(VAR_18);
 *VAR_15 = VAR_24;
 if (VAR_24 <= 0)
  VAR_18 = VAR_4;
 FUNC_11(VAR_18, &VAR_28, VAR_23);
 FUNC_12(VAR_18, &VAR_28, VAR_26);
 FUNC_17(VAR_18);
 if (VAR_16)
  *VAR_16 = VAR_26;
 FUNC_2(&VAR_17->nm_lock);
 if (!(VAR_17->nm_state & VAR_5)) {
  VAR_17->nm_verf = VAR_26;
  VAR_17->nm_state |= VAR_5;
 } else if (VAR_17->nm_verf != VAR_26) {
  VAR_17->nm_verf = VAR_26;
 }
 FUNC_3(&VAR_17->nm_lock);
 FUNC_15(VAR_18, &VAR_28, VAR_7);
 FUNC_13(VAR_18, &VAR_28, VAR_12, VAR_20, &VAR_25);
nfsmout:
 if (!VAR_19)
  FUNC_7(VAR_12);
 FUNC_10(&VAR_28);
 if ((VAR_23 != VAR_10) && VAR_11 &&
     ((VAR_27 = FUNC_0(VAR_12))) && (FUNC_18(VAR_27) & VAR_3))
  VAR_23 = VAR_10;
 *VAR_14 = VAR_23;
 if (VAR_12->n_vattr.nva_flags & VAR_6)
  FUNC_4(&VAR_12->n_lastio);
 return (VAR_18);
}
