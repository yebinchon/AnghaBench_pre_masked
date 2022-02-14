
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int uid_t ;
typedef int u_int32_t ;
struct vnop_access_args {int a_action; int a_vp; int a_context; } ;
struct timeval {scalar_t__ tv_sec; } ;
struct nfsmount {int nm_vers; TYPE_1__* nm_funcs; int nm_auth; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_10__ {scalar_t__* n_accessstamp; int* n_access; int n_auth; } ;
struct TYPE_9__ {int (* nf_access_rpc ) (TYPE_2__*,int*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 TYPE_2__* FUNC_1 (int ) ;
 struct nfsmount* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct timeval*) ;
 scalar_t__ VAR_28 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct nfsmount*) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (struct nfsmount*) ;
 int FUNC_12 (TYPE_2__*,int*,int,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

int
FUNC_17(
 struct vnop_access_args *VAR_29)





{
 vfs_context_t VAR_30 = VAR_29->a_context;
 vnode_t VAR_31 = VAR_29->a_vp;
 int VAR_32 = 0, VAR_33, VAR_34, VAR_35 = 0;
 u_int32_t VAR_36, VAR_37;
 nfsnode_t VAR_38 = FUNC_1(VAR_31);
 struct nfsmount *VAR_39;
 int VAR_40;
 struct timeval VAR_41;
 uid_t VAR_42;

 VAR_39 = FUNC_2(VAR_31);
 if (FUNC_7(VAR_39))
  return (VAR_1);
 VAR_40 = VAR_39->nm_vers;

 if (VAR_40 == VAR_26) {
  if ((VAR_29->a_action & VAR_18) &&
      FUNC_14(FUNC_16(VAR_31)))
   return (VAR_2);
  return (0);
 }
 VAR_36 = 0;
 if (FUNC_15(VAR_31)) {

  if (VAR_29->a_action &
      (VAR_11 |
      VAR_13))
   VAR_36 |= VAR_25;
  if (VAR_29->a_action & VAR_14)
   VAR_36 |= VAR_23;
  if (VAR_29->a_action &
      (VAR_4 |
      VAR_5))
   VAR_36 |= VAR_24 | VAR_22;
  if (VAR_29->a_action & VAR_9)
   VAR_36 |= VAR_24;
 } else {

  if (VAR_29->a_action &
      (VAR_12 |
      VAR_13))
   VAR_36 |= VAR_25;
  if (VAR_29->a_action & VAR_16)
   VAR_36 |= VAR_24 | VAR_22;
  if (VAR_29->a_action & VAR_6)
   VAR_36 |= VAR_22;
  if (VAR_29->a_action & VAR_10)
   VAR_36 |= VAR_21;
 }

 if (VAR_29->a_action & VAR_8)
  VAR_36 |= VAR_20;
 if (VAR_29->a_action &
     (VAR_15 |
     VAR_17 |
     VAR_19))
  VAR_36 |= VAR_24;

 if (VAR_29->a_action & VAR_7)
  VAR_36 |= VAR_24;


 if (VAR_28 > 0) {
  VAR_37 = VAR_25 | VAR_24 |
   VAR_22 | VAR_21 |
   VAR_20 | VAR_23;
 } else {
  VAR_37 = VAR_36;
 }

 if ((VAR_32 = FUNC_9(VAR_38)))
  return (VAR_32);





 if (FUNC_3(VAR_38->n_auth) || FUNC_3(VAR_39->nm_auth))
  VAR_42 = FUNC_6(FUNC_13(VAR_30));
 else
  VAR_42 = FUNC_4(FUNC_13(VAR_30));
 VAR_33 = FUNC_8(VAR_38, VAR_42, 0);
 VAR_34 = 1;
 if (VAR_36 == 0) {


  VAR_34 = 0;
  VAR_37 = 0;
 } else if (FUNC_0(VAR_38, VAR_33)) {
  FUNC_5(&VAR_41);
  if (((VAR_41.tv_sec < (VAR_38->n_accessstamp[VAR_33] + VAR_28)) &&
      ((VAR_38->n_access[VAR_33] & VAR_36) == VAR_36)) || FUNC_11(VAR_39)) {

   VAR_34 = 0;
   VAR_37 = VAR_38->n_access[VAR_33];
  }
 }
 FUNC_10(VAR_38);
 if (VAR_34) {







  if (FUNC_0(VAR_38, VAR_33))
   VAR_35 |= VAR_27;

  VAR_32 = VAR_39->nm_funcs->nf_access_rpc(VAR_38, &VAR_37, VAR_35, VAR_30);




  if ((VAR_32 == VAR_3) && (VAR_35 & VAR_27)) {
   VAR_32 = 0;
   VAR_37 = VAR_38->n_access[VAR_33];
  }
 }
 if (!VAR_32 && ((VAR_37 & VAR_36) != VAR_36))
  VAR_32 = VAR_0;

 return (VAR_32);
}
