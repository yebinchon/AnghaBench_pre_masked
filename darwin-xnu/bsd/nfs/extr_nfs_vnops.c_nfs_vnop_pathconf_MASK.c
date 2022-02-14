
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vnode_t ;
typedef int uint64_t ;
typedef int uint ;
struct vnop_pathconf_args {int a_name; int* a_retval; int a_context; int a_vp; } ;
struct nfs_fsattr {int nfsa_flags; int nfsa_maxlink; int nfsa_maxname; int nfsa_maxfilesize; int nfsa_bitmap; } ;
struct nfsmount {scalar_t__ nm_vers; int nm_state; int nm_lock; struct nfs_fsattr nm_fsattr; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_6__ {int nva_maxlink; int nva_bitmap; } ;
struct TYPE_7__ {TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
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
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 TYPE_2__* FUNC_2 (int ) ;
 struct nfsmount* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nfsmount*,struct nfs_fsattr*) ;
 int FUNC_7 (TYPE_2__*,struct nfs_fsattr*,int ) ;
 int FUNC_8 (TYPE_2__*,struct nfs_fsattr*,int ) ;
 scalar_t__ FUNC_9 (struct nfsmount*) ;

int
FUNC_10(
 struct vnop_pathconf_args *VAR_19)






{
 vnode_t VAR_20 = VAR_19->a_vp;
 nfsnode_t VAR_21 = FUNC_2(VAR_20);
 struct nfsmount *VAR_22;
 struct nfs_fsattr VAR_23, *VAR_24;
 int VAR_25 = 0;
 uint64_t VAR_26;
 uint VAR_27;

 VAR_22 = FUNC_3(VAR_20);
 if (FUNC_9(VAR_22))
  return (VAR_1);

 switch (VAR_19->a_name) {
 case 131:
 case 130:
 case 133:
 case 129:
 case 134:
 case 135:
  break;
 case 132:
  if (VAR_22->nm_vers == VAR_16) {
   *VAR_19->a_retval = 32;
   return (0);
  }
  break;
 case 128:

  if (VAR_22->nm_fsattr.nfsa_flags & VAR_14)
   break;


 default:

  return (VAR_0);
 }

 if (VAR_22->nm_vers == VAR_16)
  return (VAR_0);

 FUNC_4(&VAR_22->nm_lock);
 if (VAR_22->nm_vers == VAR_17) {
  if (!(VAR_22->nm_state & VAR_2)) {

   FUNC_5(&VAR_22->nm_lock);
   FUNC_1(VAR_23.nfsa_bitmap);
   VAR_25 = FUNC_7(VAR_21, &VAR_23, VAR_19->a_context);
   if (VAR_25)
    return (VAR_25);
   VAR_22 = FUNC_3(VAR_20);
   if (FUNC_9(VAR_22))
    return (VAR_1);
   FUNC_4(&VAR_22->nm_lock);
   if (VAR_22->nm_fsattr.nfsa_flags & VAR_13) {


    FUNC_6(VAR_22, &VAR_23);
   }
   VAR_24 = &VAR_23;
  } else {
   VAR_24 = &VAR_22->nm_fsattr;
  }
 } else if (!(VAR_22->nm_fsattr.nfsa_flags & VAR_13)) {

  FUNC_5(&VAR_22->nm_lock);
  FUNC_1(VAR_23.nfsa_bitmap);
  VAR_25 = FUNC_8(VAR_21, &VAR_23, VAR_19->a_context);
  if (VAR_25)
   return (VAR_25);
  VAR_22 = FUNC_3(VAR_20);
  if (FUNC_9(VAR_22))
   return (VAR_1);
  FUNC_4(&VAR_22->nm_lock);
  VAR_24 = &VAR_23;
 } else {
  VAR_24 = &VAR_22->nm_fsattr;
 }

 switch (VAR_19->a_name) {
 case 131:
  if (FUNC_0(VAR_24->nfsa_bitmap, VAR_7))
   *VAR_19->a_retval = VAR_24->nfsa_maxlink;
  else if ((VAR_22->nm_vers == VAR_18) && FUNC_0(VAR_21->n_vattr.nva_bitmap, VAR_7))
   *VAR_19->a_retval = VAR_21->n_vattr.nva_maxlink;
  else
   VAR_25 = VAR_0;
  break;
 case 130:
  if (FUNC_0(VAR_24->nfsa_bitmap, VAR_8))
   *VAR_19->a_retval = VAR_24->nfsa_maxname;
  else
   VAR_25 = VAR_0;
  break;
 case 133:
  if (FUNC_0(VAR_24->nfsa_bitmap, VAR_5))
   *VAR_19->a_retval = (VAR_24->nfsa_flags & VAR_12) ? 200112 : 0;
  else
   VAR_25 = VAR_0;
  break;
 case 129:
  if (FUNC_0(VAR_24->nfsa_bitmap, VAR_9))
   *VAR_19->a_retval = (VAR_24->nfsa_flags & VAR_15) ? 200112 : 0;
  else
   VAR_25 = VAR_0;
  break;
 case 134:
  if (FUNC_0(VAR_24->nfsa_bitmap, VAR_3))
   *VAR_19->a_retval = (VAR_24->nfsa_flags & VAR_10) ? 0 : 1;
  else
   VAR_25 = VAR_0;
  break;
 case 135:
  if (FUNC_0(VAR_24->nfsa_bitmap, VAR_4))
   *VAR_19->a_retval = (VAR_24->nfsa_flags & VAR_11) ? 1 : 0;
  else
   VAR_25 = VAR_0;
  break;
 case 128:
 case 132:
  if (!FUNC_0(VAR_24->nfsa_bitmap, VAR_6)) {
   *VAR_19->a_retval = 64;
   VAR_25 = 0;
   break;
  }
  VAR_26 = VAR_24->nfsa_maxfilesize;
  VAR_27 = 1;
  if (VAR_26 & 0xffffffff00000000ULL) {
   VAR_27 += 32;
   VAR_26 >>= 32;
  }
  if (VAR_26 & 0xffff0000) {
   VAR_27 += 16;
   VAR_26 >>= 16;
  }
  if (VAR_26 & 0xff00) {
   VAR_27 += 8;
   VAR_26 >>= 8;
  }
  if (VAR_26 & 0xf0) {
   VAR_27 += 4;
   VAR_26 >>= 4;
  }
  if (VAR_26 & 0xc) {
   VAR_27 += 2;
   VAR_26 >>= 2;
  }
  if (VAR_26 & 0x2) {
   VAR_27 += 1;
  }
  *VAR_19->a_retval = VAR_27;
  break;
 default:
  VAR_25 = VAR_0;
 }

 FUNC_5(&VAR_22->nm_lock);

 return (VAR_25);
}
