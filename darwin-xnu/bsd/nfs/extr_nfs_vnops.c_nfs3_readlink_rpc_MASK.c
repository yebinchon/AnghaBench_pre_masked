
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
typedef TYPE_1__* nfsnode_t ;
struct TYPE_8__ {scalar_t__ n_size; int n_fhsize; int n_fhp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfsmount* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct nfsmount*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *,struct nfsm_chain*,int ,int ,int *,struct nfsm_chain*,int *,int*) ;
 int FUNC_6 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_7 (int,struct nfsm_chain*,int ) ;
 int FUNC_8 (int,struct nfsm_chain*) ;
 int FUNC_9 (struct nfsm_chain*) ;
 int FUNC_10 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_11 (int,struct nfsm_chain*,scalar_t__,char*) ;
 int FUNC_12 (struct nfsm_chain*) ;
 int FUNC_13 (int,struct nfsm_chain*,TYPE_1__*,int *) ;
 int FUNC_14 (int) ;

int
FUNC_15(nfsnode_t VAR_6, char *VAR_7, uint32_t *VAR_8, vfs_context_t VAR_9)
{
 struct nfsmount *VAR_10;
 int VAR_11 = 0, VAR_12 = VAR_1, VAR_13, VAR_14;
 uint32_t VAR_15;
 u_int64_t VAR_16;
 struct nfsm_chain VAR_17, VAR_18;

 VAR_10 = FUNC_0(VAR_6);
 if (FUNC_2(VAR_10))
  return (VAR_2);
 VAR_13 = VAR_10->nm_vers;
 FUNC_12(&VAR_17);
 FUNC_12(&VAR_18);

 FUNC_7(VAR_11, &VAR_17, FUNC_1(VAR_13));
 FUNC_6(VAR_11, &VAR_17, VAR_13, VAR_6->n_fhp, VAR_6->n_fhsize);
 FUNC_8(VAR_11, &VAR_17);
 FUNC_14(VAR_11);
 VAR_11 = FUNC_5(VAR_6, ((void*)0), &VAR_17, VAR_3, VAR_9, ((void*)0), &VAR_18, &VAR_16, &VAR_14);
 if ((VAR_12 = FUNC_3(VAR_6)))
  VAR_11 = VAR_12;
 if (VAR_13 == VAR_5)
  FUNC_13(VAR_11, &VAR_18, VAR_6, &VAR_16);
 if (!VAR_11)
  VAR_11 = VAR_14;
 FUNC_10(VAR_11, &VAR_18, VAR_15);
 FUNC_14(VAR_11);
 if ((VAR_13 == VAR_4) && (VAR_15 > *VAR_8)) {
  VAR_11 = VAR_0;
  goto nfsmout;
 }
 if (VAR_15 >= *VAR_8) {
  if (VAR_6->n_size && (VAR_6->n_size < *VAR_8))
   VAR_15 = VAR_6->n_size;
  else
   VAR_15 = *VAR_8 - 1;
 }
 FUNC_11(VAR_11, &VAR_18, VAR_15, VAR_7);
 if (!VAR_11)
  *VAR_8 = VAR_15;
nfsmout:
 if (!VAR_12)
  FUNC_4(VAR_6);
 FUNC_9(&VAR_17);
 FUNC_9(&VAR_18);
 return (VAR_11);
}
