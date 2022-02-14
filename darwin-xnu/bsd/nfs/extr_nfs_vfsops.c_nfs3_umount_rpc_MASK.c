
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int thread_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct nfsmount {scalar_t__ nm_vers; scalar_t__ nm_sotype; scalar_t__ nm_mountport; int nm_mountp; TYPE_2__* nm_saddr; } ;
struct nfsm_chain {int * nmc_mhead; } ;
typedef int ss ;
typedef int mbuf_t ;
typedef int kauth_cred_t ;
struct TYPE_4__ {int sa_len; } ;
struct TYPE_3__ {char* f_mntfromname; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct nfsmount*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (TYPE_2__*,struct sockaddr*,int ) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct nfsmount*,int ,struct sockaddr*,int *,scalar_t__,int ,int ,int,int,struct nfsm_chain*) ;
 int FUNC_6 (struct nfsmount*,int ,struct sockaddr*,int *,int ,scalar_t__,int,int) ;
 int FUNC_7 (int,struct nfsm_chain*,char*,int,struct nfsmount*) ;
 int FUNC_8 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_9 (int,struct nfsm_chain*) ;
 int FUNC_10 (struct nfsm_chain*) ;
 int FUNC_11 (struct nfsm_chain*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct nfsmount*,scalar_t__,int ,scalar_t__,int ,int ,int ,int *,int *,int *,int *) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (void*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 TYPE_1__* FUNC_19 (int ) ;

void
FUNC_20(struct nfsmount *VAR_13, vfs_context_t VAR_14, int VAR_15)
{
 int VAR_16 = 0, VAR_17, VAR_18;
 thread_t VAR_19 = FUNC_17(VAR_14);
 kauth_cred_t VAR_20 = FUNC_18(VAR_14);
 char *VAR_21;
 uint64_t VAR_22 = 0;
 struct nfsm_chain VAR_23, VAR_24;
 mbuf_t VAR_25;
 uint32_t VAR_26, VAR_27;
 struct sockaddr_storage VAR_28;
 struct sockaddr *VAR_29 = (struct sockaddr*)&VAR_28;

 if (!VAR_13->nm_saddr)
  return;

 FUNC_11(&VAR_23);
 FUNC_11(&VAR_24);

 VAR_26 = (VAR_13->nm_vers == VAR_5) ? VAR_8 : VAR_9;
 VAR_18 = (FUNC_0(VAR_13, VAR_3) || (VAR_13->nm_sotype == VAR_11)) ? VAR_2 : VAR_1;
 VAR_27 = VAR_13->nm_mountport;

 FUNC_2(VAR_13->nm_saddr, VAR_29, FUNC_4(sizeof(VAR_28), VAR_13->nm_saddr->sa_len));
 if (VAR_29->sa_family == VAR_0)
  ((struct sockaddr_in*)VAR_29)->sin_port = FUNC_3(VAR_27);
 else
  ((struct sockaddr_in6*)VAR_29)->sin6_port = FUNC_3(VAR_27);

 while (!VAR_27) {
  VAR_16 = FUNC_6(VAR_13, VAR_14, VAR_29, ((void*)0), VAR_10, VAR_26, VAR_18, VAR_15);
    FUNC_14(VAR_16);
  if (VAR_29->sa_family == VAR_0)
   VAR_27 = FUNC_15(((struct sockaddr_in*)VAR_29)->sin_port);
  else
   VAR_27 = FUNC_15(((struct sockaddr_in6*)VAR_29)->sin6_port);

  if (!VAR_27) {
   if (VAR_26 > VAR_8) {
    VAR_26 = VAR_8;
   } else if (VAR_18 == VAR_1) {
    VAR_18 = VAR_2;
    VAR_26 = (VAR_13->nm_vers == VAR_5) ? VAR_8 : VAR_9;
   } else {
    break;
   }
   FUNC_2(VAR_13->nm_saddr, VAR_29, FUNC_4(sizeof(VAR_28), VAR_13->nm_saddr->sa_len));
  }
 }
 FUNC_14(!VAR_27);


 VAR_21 = &FUNC_19(VAR_13->nm_mountp)->f_mntfromname[0];
 while (*VAR_21 && (*VAR_21 != '/'))
  VAR_21++;
 VAR_17 = FUNC_16(VAR_21);
 FUNC_8(VAR_16, &VAR_23, VAR_4 + FUNC_12(VAR_17));
 FUNC_7(VAR_16, &VAR_23, VAR_21, VAR_17, VAR_13);
 FUNC_9(VAR_16, &VAR_23);
 FUNC_14(VAR_16);
 VAR_16 = FUNC_13(VAR_13, (VAR_18 == VAR_2) ? VAR_11 : VAR_12,
   VAR_10, VAR_8, VAR_7,
   VAR_6, VAR_20, ((void*)0), VAR_23.nmc_mhead, &VAR_22, &VAR_25);
 FUNC_14(VAR_16);
 VAR_23.nmc_mhead = ((void*)0);
 VAR_16 = FUNC_5(VAR_13, VAR_19, VAR_29, ((void*)0),
  ((VAR_18 == VAR_2) ? VAR_11 : VAR_12),
  VAR_25, FUNC_1(VAR_22), 1, VAR_15, &VAR_24);
nfsmout:
 FUNC_10(&VAR_23);
 FUNC_10(&VAR_24);
}
