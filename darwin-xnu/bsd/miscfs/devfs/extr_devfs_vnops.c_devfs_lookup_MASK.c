
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vfs_context_t ;
struct vnop_lookup_args {struct vnode** a_vpp; struct vnode* a_dvp; struct componentname* a_cnp; } ;
struct vnode {int dummy; } ;
struct proc {int dummy; } ;
struct componentname {int cn_flags; int cn_nameiop; char* cn_nameptr; size_t cn_namelen; int cn_context; } ;
struct TYPE_7__ {scalar_t__ dn_type; } ;
typedef TYPE_1__ devnode_t ;
struct TYPE_8__ {TYPE_1__* de_dnp; } ;
typedef TYPE_2__ devdirent_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_2 (struct vnode*) ;
 int VAR_12 ;
 TYPE_2__* FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,struct vnode**,struct proc*) ;
 struct proc* FUNC_5 (int ) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;

__attribute__((used)) static int
FUNC_8(struct vnop_lookup_args *VAR_13)






{
 struct componentname *VAR_14 = VAR_13->a_cnp;
 vfs_context_t VAR_15 = VAR_14->cn_context;
 struct proc *VAR_16 = FUNC_5(VAR_15);
 struct vnode *VAR_17 = VAR_13->a_dvp;
 struct vnode **VAR_18 = VAR_13->a_vpp;
 devnode_t * VAR_19;
 devnode_t * VAR_20 = ((void*)0);
 devdirent_t * VAR_21;
 int VAR_22 = VAR_14->cn_flags;
 int VAR_23 = VAR_14->cn_nameiop;
 int VAR_24 = VAR_22 & (VAR_10|VAR_12);
 int VAR_25 = 0;
 char VAR_26;

retry:

 *VAR_18 = ((void*)0);


 VAR_19 = FUNC_2(VAR_17);




 if (VAR_19->dn_type != VAR_2) {
  return (VAR_7);
 }

 FUNC_0();



 VAR_26 = VAR_14->cn_nameptr[VAR_14->cn_namelen];
 VAR_14->cn_nameptr[VAR_14->cn_namelen] = '\0';

 VAR_21 = FUNC_3(VAR_19, VAR_14->cn_nameptr);



 VAR_14->cn_nameptr[VAR_14->cn_namelen] = VAR_26;

 if (VAR_21) {

         VAR_20 = VAR_21->de_dnp;






  VAR_25 = FUNC_4(VAR_20, VAR_18, VAR_16);
 }
 FUNC_1();

 if (VAR_25) {
         if (VAR_25 == VAR_3)
          goto retry;
  return VAR_25;
 }
 if (!VAR_21) {
         if (!(VAR_22 & VAR_9) || !(VAR_23 == VAR_0 || VAR_23 == VAR_11)) {
   return VAR_6;
  }
  return (VAR_5);
 }
 if (VAR_23 == VAR_1 && (VAR_22 & VAR_9)) {




  if (VAR_19 == VAR_20) {
          if (*VAR_18) {
           FUNC_7(*VAR_18);
           *VAR_18 = ((void*)0);
   }
   if ( ((VAR_25 = FUNC_6(VAR_17)) == 0) ) {
           *VAR_18 = VAR_17;
   }
   return (VAR_25);
  }
  return (0);
 }







 if (VAR_23 == VAR_11 && VAR_24 && (VAR_22 & VAR_9)) {





  if (VAR_19 == VAR_20) {
          VAR_25 = VAR_4;
   goto drop_ref;
  }
  return (0);
 }
 if ((VAR_22 & VAR_8) == 0 && VAR_19 == VAR_20) {
         if (*VAR_18) {
          FUNC_7(*VAR_18);
          *VAR_18 = ((void*)0);
  }
  if ( (VAR_25 = FUNC_6(VAR_17)) ) {
   return (VAR_25);
  }
  *VAR_18 = VAR_17;
 }
 return (0);

drop_ref:
 if (*VAR_18) {
         FUNC_7(*VAR_18);
  *VAR_18 = ((void*)0);
 }
 return (VAR_25);
}
