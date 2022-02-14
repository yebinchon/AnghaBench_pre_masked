
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int thread_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {scalar_t__ sa_family; int sa_len; } ;
struct nfsmount {scalar_t__ nm_mountport; } ;
struct nfsm_chain {int * nmc_mhead; } ;
struct nfs_sec {int count; int * flavors; } ;
typedef int ss ;
typedef int mbuf_t ;
typedef int kauth_cred_t ;
typedef int fhandle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct nfsmount*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct sockaddr*,struct sockaddr*,int ) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct nfsmount*,int ,struct sockaddr*,int *,int,int ,int ,int,int,struct nfsm_chain*) ;
 int FUNC_6 (struct nfsmount*,int ,struct sockaddr*,int *,int ,int,int,int) ;
 int FUNC_7 (int,struct nfsm_chain*,char*,int,struct nfsmount*) ;
 int FUNC_8 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_9 (int,struct nfsm_chain*) ;
 int FUNC_10 (struct nfsm_chain*) ;
 int FUNC_11 (int,struct nfsm_chain*,int) ;
 int FUNC_12 (int,struct nfsm_chain*,int,int *) ;
 int FUNC_13 (struct nfsm_chain*,int *,int *) ;
 int FUNC_14 (struct nfsm_chain*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct nfsmount*,int,int ,int,int ,int ,int ,int *,int *,int *,int *) ;
 int FUNC_17 (int) ;
 int FUNC_18 (void*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;

int
FUNC_22(struct nfsmount *VAR_15, struct sockaddr *VAR_16, int VAR_17, int VAR_18, char *VAR_19, vfs_context_t VAR_20, int VAR_21, fhandle_t *VAR_22, struct nfs_sec *VAR_23)
{
 int VAR_24 = 0, VAR_25, VAR_26;
 thread_t VAR_27 = FUNC_20(VAR_20);
 kauth_cred_t VAR_28 = FUNC_21(VAR_20);
 uint64_t VAR_29 = 0;
 struct nfsm_chain VAR_30, VAR_31;
 mbuf_t VAR_32;
 uint32_t VAR_33, VAR_34, VAR_35;
 struct sockaddr_storage VAR_36;
 struct sockaddr *VAR_37 = (struct sockaddr*)&VAR_36;

 FUNC_14(&VAR_30);
 FUNC_14(&VAR_31);

 VAR_33 = (VAR_18 == VAR_6) ? VAR_10 : VAR_11;
 VAR_26 = (FUNC_0(VAR_15, VAR_4) || (VAR_17 == VAR_13)) ? VAR_3 : VAR_2;
 VAR_23->count = 0;

 FUNC_2(VAR_16, VAR_37, FUNC_4(sizeof(VAR_36), VAR_16->sa_len));
 if (VAR_37->sa_family == VAR_0) {
  if (VAR_15->nm_mountport)
   ((struct sockaddr_in*)VAR_37)->sin_port = FUNC_3(VAR_15->nm_mountport);
  VAR_34 = FUNC_18(((struct sockaddr_in*)VAR_37)->sin_port);
 } else {
  if (VAR_15->nm_mountport)
   ((struct sockaddr_in6*)VAR_37)->sin6_port = FUNC_3(VAR_15->nm_mountport);
  VAR_34 = FUNC_18(((struct sockaddr_in6*)VAR_37)->sin6_port);
 }

 while (!VAR_34) {
  VAR_24 = FUNC_6(VAR_15, VAR_20, VAR_37, ((void*)0), VAR_12, VAR_33, VAR_26, VAR_21);
  FUNC_17(VAR_24);
  if (VAR_37->sa_family == VAR_0)
   VAR_34 = FUNC_18(((struct sockaddr_in*)VAR_37)->sin_port);
  else
   VAR_34 = FUNC_18(((struct sockaddr_in6*)VAR_37)->sin6_port);
  if (!VAR_34) {

   if (VAR_26 == VAR_3) {
    VAR_24 = VAR_1;
    break;
   }
   VAR_26 = VAR_3;
   FUNC_2(VAR_16, VAR_37, FUNC_4(sizeof(VAR_36), VAR_16->sa_len));
  }
 }
 FUNC_17(VAR_24 || !VAR_34);


 VAR_25 = FUNC_19(VAR_19);
 FUNC_8(VAR_24, &VAR_30, VAR_5 + FUNC_15(VAR_25));
 FUNC_7(VAR_24, &VAR_30, VAR_19, VAR_25, VAR_15);
 FUNC_9(VAR_24, &VAR_30);
 FUNC_17(VAR_24);
 VAR_24 = FUNC_16(VAR_15, (VAR_26 == VAR_3) ? VAR_13 : VAR_14,
   VAR_12, VAR_33, VAR_9,
   VAR_8, VAR_28, ((void*)0), VAR_30.nmc_mhead, &VAR_29, &VAR_32);
 FUNC_17(VAR_24);
 VAR_30.nmc_mhead = ((void*)0);
 VAR_24 = FUNC_5(VAR_15, VAR_27, VAR_37, ((void*)0),
   ((VAR_26 == VAR_3) ? VAR_13 : VAR_14),
   VAR_32, FUNC_1(VAR_29), 1, VAR_21, &VAR_31);
 FUNC_17(VAR_24);
 FUNC_11(VAR_24, &VAR_31, VAR_35);
 if (!VAR_24 && VAR_35)
  VAR_24 = VAR_35;
 FUNC_12(VAR_24, &VAR_31, VAR_18, VAR_22);
 if (!VAR_24 && (VAR_18 > VAR_6)) {
  VAR_23->count = VAR_7;
  VAR_24 = FUNC_13(&VAR_31, &VAR_23->flavors[0], &VAR_23->count);
 }
nfsmout:
 FUNC_10(&VAR_30);
 FUNC_10(&VAR_31);
 return (VAR_24);
}
