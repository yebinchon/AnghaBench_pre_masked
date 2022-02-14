
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uio_t ;
typedef int uint64_t ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef int nfsnode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t,size_t) ;
 struct nfsmount* FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct nfsmount*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nfsreq*) ;
 int FUNC_6 (struct nfsreq*,struct nfsm_chain*,int *,int*) ;
 int FUNC_7 (int,struct nfsm_chain*,int ) ;
 int FUNC_8 (struct nfsm_chain*) ;
 int FUNC_9 (int,struct nfsm_chain*,size_t) ;
 int FUNC_10 (struct nfsm_chain*,size_t,int ) ;
 int FUNC_11 (int,struct nfsm_chain*,int ,int,int *) ;
 int FUNC_12 (struct nfsm_chain*) ;
 int FUNC_13 (int,struct nfsm_chain*,int ,int *) ;
 int FUNC_14 (int) ;

int
FUNC_15(
 nfsnode_t VAR_6,
 struct nfsreq *VAR_7,
 uio_t VAR_8,
 size_t *VAR_9,
 int *VAR_10)
{
 int VAR_11 = 0, VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 size_t VAR_16 = 0;
 uint64_t VAR_17;
 struct nfsmount *VAR_18;
 struct nfsm_chain VAR_19;

 VAR_18 = FUNC_1(VAR_6);
 if (FUNC_2(VAR_18)) {
  FUNC_5(VAR_7);
  return (VAR_2);
 }
 VAR_13 = VAR_18->nm_vers;

 FUNC_12(&VAR_19);

 VAR_11 = FUNC_6(VAR_7, &VAR_19, &VAR_17, &VAR_14);
 if (VAR_11 == VAR_1)
  return (VAR_11);

 if ((VAR_12 = FUNC_3(VAR_6)))
  VAR_11 = VAR_12;
 if (VAR_13 == VAR_5)
  FUNC_13(VAR_11, &VAR_19, VAR_6, &VAR_17);
 if (!VAR_11)
  VAR_11 = VAR_14;
 if (VAR_13 == VAR_5) {
  FUNC_7(VAR_11, &VAR_19, VAR_3);
  FUNC_9(VAR_11, &VAR_19, VAR_15);
 } else {
  FUNC_11(VAR_11, &VAR_19, VAR_6, VAR_13, &VAR_17);
 }
 if (!VAR_12)
  FUNC_4(VAR_6);
 FUNC_9(VAR_11, &VAR_19, VAR_16);
 if ((VAR_13 == VAR_4) && (VAR_16 > *VAR_9))
  VAR_11 = VAR_0;
 FUNC_14(VAR_11);
 VAR_11 = FUNC_10(&VAR_19, FUNC_0(VAR_16, *VAR_9), VAR_8);
 if (VAR_10) {
  if (VAR_13 == VAR_5) {
   if (!VAR_15 && !VAR_16)
    VAR_15 = 1;
  } else if (VAR_16 < *VAR_9) {
   VAR_15 = 1;
  }
  *VAR_10 = VAR_15;
 }
 *VAR_9 = FUNC_0(VAR_16, *VAR_9);
nfsmout:
 FUNC_8(&VAR_19);
 return (VAR_11);
}
