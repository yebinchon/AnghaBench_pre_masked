
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int u_int64_t ;
typedef scalar_t__ time_t ;
typedef int thread_t ;
struct nfsmount {int dummy; } ;
struct nfsbuflists {int dummy; } ;
struct nfsbuf {int nb_lblkno; } ;
struct nfs_vattr {int dummy; } ;
struct componentname {int cn_namelen; char* cn_nameptr; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_16__ {int fh_len; int fh_data; } ;
typedef TYPE_2__ fhandle_t ;
typedef int daddr64_t ;
struct TYPE_15__ {scalar_t__ n_attrstamp; int n_xid; int n_auth; int n_lastdbl; int n_cleanblkhd; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfsbuf* FUNC_0 (struct nfsbuflists*) ;
 int FUNC_1 (struct nfsbuf*,struct nfsbuf*,int ) ;
 int FUNC_2 (int *,struct nfsbuf*,int ) ;
 int FUNC_3 (struct nfsbuf*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*) ;
 struct nfsmount* FUNC_5 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (struct nfsbuf*,int ,int ,int ) ;
 int FUNC_9 (struct nfsbuf*) ;
 int FUNC_10 (TYPE_1__*,int ,int ,int ,int,struct nfsbuf**) ;
 int FUNC_11 (TYPE_1__*,struct nfsbuflists*,int ) ;
 int FUNC_12 (TYPE_1__*,struct nfsbuflists*,int ) ;
 int VAR_12 ;
 int FUNC_13 (struct nfsbuf*) ;
 int FUNC_14 (struct nfsbuf*) ;
 int FUNC_15 (struct nfsbuf*,int ) ;
 int FUNC_16 (struct nfsbuf*,struct componentname*,TYPE_2__*,struct nfs_vattr*,int *,scalar_t__*,int *,int ) ;
 int FUNC_17 (TYPE_1__*,struct nfs_vattr*,int ,int ) ;
 scalar_t__ FUNC_18 (struct nfsmount*) ;
 int FUNC_19 (int ,TYPE_1__*,struct componentname*,int ,int ,struct nfs_vattr*,int *,int ,int ,TYPE_1__**) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int ) ;

int
FUNC_22(nfsnode_t VAR_13, nfsnode_t *VAR_14, struct componentname *VAR_15, vfs_context_t VAR_16, int VAR_17)
{
 nfsnode_t VAR_18;
 struct nfsmount *VAR_19;
 int VAR_20 = 0, VAR_21, VAR_22 = 0, VAR_23 = 0;
 u_int64_t VAR_24;
 struct nfs_vattr VAR_25;
 fhandle_t VAR_26;
 time_t VAR_27 = 0;
 thread_t VAR_28 = FUNC_21(VAR_16);
 struct nfsbuf *VAR_29, *VAR_30, *VAR_31;
 struct nfsbuflists VAR_32;
 daddr64_t VAR_33, VAR_34;
 int VAR_35 = (VAR_15->cn_namelen > 2) && (VAR_15->cn_nameptr[0] == '.') && (VAR_15->cn_nameptr[1] == '_');

 VAR_19 = FUNC_5(VAR_13);
 if (FUNC_18(VAR_19))
  return (VAR_0);
 if (!VAR_17)
  *VAR_14 = ((void*)0);


 VAR_33 = VAR_13->n_lastdbl;
 for (VAR_21=0; VAR_21 < 2; VAR_21++) {
  if ((VAR_20 = FUNC_10(VAR_13, VAR_33, VAR_8, VAR_28, VAR_5|VAR_4, &VAR_29)))
   return (VAR_20);
  if (!VAR_29)
   break;
  VAR_23++;
  VAR_20 = FUNC_16(VAR_29, VAR_15, &VAR_26, &VAR_25, &VAR_24, &VAR_27, &VAR_34, VAR_17 ? VAR_6 : 0);
  FUNC_15(VAR_29, 0);
  if (VAR_20 == VAR_1) {
   VAR_20 = 0;
  } else {
   VAR_22 = 1;
   break;
  }
  VAR_33 = VAR_34;
 }

 FUNC_6(VAR_12);
 if (VAR_22) {
  VAR_13->n_lastdbl = VAR_33;
  goto done;
 }
 if (!FUNC_12(VAR_13, &VAR_32, VAR_3)) {
  VAR_30 = VAR_31 = ((void*)0);
  while ((VAR_29 = FUNC_0(&VAR_32))) {
   FUNC_3(VAR_29, VAR_11);
   if (!VAR_30)
    FUNC_2(&VAR_13->n_cleanblkhd, VAR_29, VAR_11);
   else
    FUNC_1(VAR_30, VAR_29, VAR_11);
   VAR_30 = VAR_29;
   if (VAR_20 || VAR_22)
    continue;
   if (!VAR_17 && VAR_35 && (VAR_23 > 100))
    continue;
   FUNC_13(VAR_29);
   VAR_33 = VAR_29->nb_lblkno;
   if (FUNC_8(VAR_29, VAR_2, 0, 0)) {

    FUNC_14(VAR_29);
    continue;
   }
   FUNC_14(VAR_29);
   VAR_23++;
   VAR_20 = FUNC_16(VAR_29, VAR_15, &VAR_26, &VAR_25, &VAR_24, &VAR_27, ((void*)0), VAR_17 ? VAR_6 : 0);
   if (VAR_20 == VAR_1) {
    VAR_20 = 0;
   } else {
    VAR_22 = 1;
    VAR_31 = VAR_29;
   }
   FUNC_9(VAR_29);
  }
  if (VAR_22) {
   FUNC_3(VAR_31, VAR_11);
   FUNC_2(&VAR_13->n_cleanblkhd, VAR_31, VAR_11);
   VAR_13->n_lastdbl = VAR_31->nb_lblkno;
  }
  FUNC_11(VAR_13, &VAR_32, VAR_3);
 }
done:
 FUNC_7(VAR_12);

 if (!VAR_20 && VAR_22 && !VAR_17) {
  VAR_20 = FUNC_19(FUNC_4(VAR_13), VAR_13, VAR_15, VAR_26.fh_data, VAR_26.fh_len,
    &VAR_25, &VAR_24, VAR_13->n_auth, VAR_10, &VAR_18);
  if (VAR_20)
   return (VAR_20);
  VAR_18->n_attrstamp = VAR_27;
  *VAR_14 = VAR_18;
  FUNC_20(VAR_18);

  if (!FUNC_17(VAR_18, &VAR_25, VAR_16, VAR_9) &&
      (VAR_18->n_attrstamp != VAR_27)) {

   VAR_20 = FUNC_10(VAR_13, VAR_33, VAR_8, VAR_28, VAR_5|VAR_4, &VAR_29);
   if (!VAR_20 && VAR_29) {
    VAR_27 = VAR_18->n_attrstamp;
    VAR_24 = VAR_18->n_xid;
    FUNC_16(VAR_29, VAR_15, &VAR_26, &VAR_25, &VAR_24, &VAR_27, ((void*)0), VAR_7);
    FUNC_15(VAR_29, 0);
   }
   VAR_20 = 0;
  }
 }

 return (VAR_20);
}
