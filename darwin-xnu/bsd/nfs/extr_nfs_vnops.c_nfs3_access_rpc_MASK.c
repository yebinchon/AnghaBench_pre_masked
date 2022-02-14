
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uint32_t ;
typedef int uid_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct timeval {int tv_sec; } ;
struct nfsmount {int nm_auth; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_9__ {int* n_access; int n_flag; int * n_accessstamp; int * n_accessuid; int n_auth; int n_fhsize; int n_fhp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfsmount* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct timeval*) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct nfsmount*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int *,struct nfsm_chain*,int ,int ,int ,int *,int,struct nfsm_chain*,int *,int*) ;
 int FUNC_11 (int,struct nfsm_chain*,int) ;
 int FUNC_12 (int,struct nfsm_chain*,int ,int ,int ) ;
 int FUNC_13 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_14 (int,struct nfsm_chain*) ;
 int FUNC_15 (struct nfsm_chain*) ;
 int FUNC_16 (int,struct nfsm_chain*,int) ;
 int FUNC_17 (struct nfsm_chain*) ;
 int FUNC_18 (int,struct nfsm_chain*,TYPE_1__*,int *) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;

int
FUNC_22(nfsnode_t VAR_10, u_int32_t *VAR_11, int VAR_12, vfs_context_t VAR_13)
{
 int VAR_14 = 0, VAR_15 = VAR_0, VAR_16, VAR_17;
 uint32_t VAR_18 = 0;
 u_int64_t VAR_19;
 struct nfsm_chain VAR_20, VAR_21;
 struct nfsmount *VAR_22;
 struct timeval VAR_23;
 uid_t VAR_24;

 FUNC_17(&VAR_20);
 FUNC_17(&VAR_21);

 FUNC_13(VAR_14, &VAR_20, FUNC_1(VAR_7) + VAR_3);
 FUNC_12(VAR_14, &VAR_20, VAR_7, VAR_10->n_fhp, VAR_10->n_fhsize);
 FUNC_11(VAR_14, &VAR_20, *VAR_11);
 FUNC_14(VAR_14, &VAR_20);
 FUNC_19(VAR_14);
 VAR_14 = FUNC_10(VAR_10, ((void*)0), &VAR_20, VAR_2,
  FUNC_20(VAR_13), FUNC_21(VAR_13),
  ((void*)0), VAR_12, &VAR_21, &VAR_19, &VAR_16);
 if ((VAR_15 = FUNC_8(VAR_10)))
  VAR_14 = VAR_15;
 FUNC_18(VAR_14, &VAR_21, VAR_10, &VAR_19);
 if (!VAR_14)
  VAR_14 = VAR_16;
 FUNC_16(VAR_14, &VAR_21, VAR_18);
 FUNC_19(VAR_14);


 VAR_22 = FUNC_0(VAR_10);
 if (FUNC_6(VAR_22)) {
  VAR_14 = VAR_1;
 }
 FUNC_19(VAR_14);

 if (FUNC_2(VAR_10->n_auth) || FUNC_2(VAR_22->nm_auth)) {
  VAR_24 = FUNC_5(FUNC_21(VAR_13));
 } else {
  VAR_24 = FUNC_3(FUNC_21(VAR_13));
 }
 VAR_17 = FUNC_7(VAR_10, VAR_24, 1);
 VAR_10->n_accessuid[VAR_17] = VAR_24;
 FUNC_4(&VAR_23);
 VAR_10->n_accessstamp[VAR_17] = VAR_23.tv_sec;
 VAR_10->n_access[VAR_17] = VAR_18;
 if ((*VAR_11 & VAR_4) &&
     !(VAR_10->n_access[VAR_17] & VAR_4))
  VAR_10->n_access[VAR_17] |= VAR_4;

 if (VAR_9 && (VAR_10->n_flag & VAR_8))
  VAR_10->n_access[VAR_17] |= (VAR_6|VAR_5|VAR_4);

 *VAR_11 = VAR_10->n_access[VAR_17];
nfsmout:
 if (!VAR_15)
  FUNC_9(VAR_10);
 FUNC_15(&VAR_20);
 FUNC_15(&VAR_21);
 return (VAR_14);
}
