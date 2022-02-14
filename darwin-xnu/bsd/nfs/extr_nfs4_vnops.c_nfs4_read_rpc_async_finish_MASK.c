
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uio_t ;
typedef int u_int64_t ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_8__ {int nva_flags; } ;
struct TYPE_9__ {int n_lastio; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,size_t) ;
 struct nfsmount* FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct nfsmount*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct nfsreq*) ;
 int FUNC_7 (struct nfsreq*,struct nfsm_chain*,int *,int*) ;
 int FUNC_8 (struct nfsm_chain*) ;
 int FUNC_9 (int,struct nfsm_chain*,size_t) ;
 int FUNC_10 (struct nfsm_chain*,size_t,int ) ;
 int FUNC_11 (int,struct nfsm_chain*,TYPE_2__*,int,int *) ;
 int FUNC_12 (struct nfsm_chain*) ;
 int FUNC_13 (int,struct nfsm_chain*,int ) ;
 int FUNC_14 (int,struct nfsm_chain*) ;

int
FUNC_15(
 nfsnode_t VAR_6,
 struct nfsreq *VAR_7,
 uio_t VAR_8,
 size_t *VAR_9,
 int *VAR_10)
{
 struct nfsmount *VAR_11;
 int VAR_12 = 0, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17 = 0;
 size_t VAR_18 = 0;
 u_int64_t VAR_19;
 struct nfsm_chain VAR_20;

 VAR_11 = FUNC_1(VAR_6);
 if (FUNC_3(VAR_11)) {
  FUNC_6(VAR_7);
  return (VAR_1);
 }
 VAR_14 = VAR_11->nm_vers;

 FUNC_12(&VAR_20);

 VAR_12 = FUNC_7(VAR_7, &VAR_20, &VAR_19, &VAR_16);
 if (VAR_12 == VAR_0)
  return (VAR_12);

 if ((VAR_13 = FUNC_4(VAR_6)))
  VAR_12 = VAR_13;
 FUNC_14(VAR_12, &VAR_20);
 FUNC_9(VAR_12, &VAR_20, VAR_15);
 FUNC_13(VAR_12, &VAR_20, VAR_4);
 FUNC_13(VAR_12, &VAR_20, VAR_5);
 FUNC_9(VAR_12, &VAR_20, VAR_17);
 FUNC_9(VAR_12, &VAR_20, VAR_18);
 if (!VAR_12) {
  *VAR_9 = FUNC_0(VAR_18, *VAR_9);
  VAR_12 = FUNC_10(&VAR_20, *VAR_9, VAR_8);
 }
 FUNC_13(VAR_12, &VAR_20, VAR_3);
 FUNC_11(VAR_12, &VAR_20, VAR_6, VAR_14, &VAR_19);
 if (!VAR_13)
  FUNC_5(VAR_6);
 if (VAR_10) {
  if (!VAR_17 && !VAR_18)
   VAR_17 = 1;
  *VAR_10 = VAR_17;
 }
 FUNC_8(&VAR_20);
 if (VAR_6->n_vattr.nva_flags & VAR_2)
  FUNC_2(&VAR_6->n_lastio);
 return (VAR_12);
}
