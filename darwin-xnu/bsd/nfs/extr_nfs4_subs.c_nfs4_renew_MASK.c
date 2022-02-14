
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct nfsmount {int nm_mountp; int nm_clientid; int nm_minor_vers; int nm_mcred; } ;
struct nfsm_chain {int dummy; } ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,struct nfsm_chain*,int ,int ,int ,int *,int,struct nfsm_chain*,int *,int*) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int,struct nfsm_chain*,int ) ;
 int FUNC_7 (int,struct nfsm_chain*,int ) ;
 int FUNC_8 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_9 (int,struct nfsm_chain*,int) ;
 int FUNC_10 (int,struct nfsm_chain*) ;
 int FUNC_11 (struct nfsm_chain*) ;
 int FUNC_12 (int,struct nfsm_chain*,int) ;
 int FUNC_13 (struct nfsm_chain*) ;
 int FUNC_14 (int,struct nfsm_chain*,int ) ;
 int FUNC_15 (int,struct nfsm_chain*) ;
 int FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;

int
FUNC_19(struct nfsmount *VAR_4, int VAR_5)
{
 int VAR_6 = 0, VAR_7, VAR_8;
 u_int64_t VAR_9;
 struct nfsm_chain VAR_10, VAR_11;
 kauth_cred_t VAR_12;

 VAR_12 = FUNC_0(VAR_4->nm_mcred) ? VAR_4->nm_mcred : FUNC_18(FUNC_17());
 FUNC_2(VAR_12);

 FUNC_13(&VAR_10);
 FUNC_13(&VAR_11);


 VAR_8 = 1;
 FUNC_9(VAR_6, &VAR_10, 8 * VAR_2);
 FUNC_8(VAR_6, &VAR_10, "renew", VAR_4->nm_minor_vers, VAR_8);
 VAR_8--;
 FUNC_6(VAR_6, &VAR_10, VAR_3);
 FUNC_7(VAR_6, &VAR_10, VAR_4->nm_clientid);
 FUNC_10(VAR_6, &VAR_10);
 FUNC_5(VAR_6, (VAR_8 == 0), VAR_0);
 FUNC_16(VAR_6);
 VAR_6 = FUNC_4(((void*)0), VAR_4->nm_mountp, &VAR_10, VAR_1,
   FUNC_1(), VAR_12, ((void*)0), VAR_5, &VAR_11, &VAR_9, &VAR_7);
 FUNC_15(VAR_6, &VAR_11);
 FUNC_12(VAR_6, &VAR_11, VAR_8);
 FUNC_14(VAR_6, &VAR_11, VAR_3);
nfsmout:
 FUNC_11(&VAR_10);
 FUNC_11(&VAR_11);
 FUNC_3(&VAR_12);
 return (VAR_6);
}
