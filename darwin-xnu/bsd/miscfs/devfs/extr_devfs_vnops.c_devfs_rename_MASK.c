
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct vnop_rename_args {struct componentname* a_fcnp; struct componentname* a_tcnp; struct vnode* a_fdvp; struct vnode* a_fvp; struct vnode* a_tdvp; struct vnode* a_tvp; } ;
struct vnode {scalar_t__ v_type; } ;
struct componentname {int cn_namelen; char* cn_nameptr; int cn_flags; } ;
struct TYPE_13__ {TYPE_3__* parent; } ;
struct TYPE_14__ {TYPE_1__ Dir; } ;
struct TYPE_15__ {scalar_t__ dn_type; int dn_links; TYPE_2__ dn_typeinfo; } ;
typedef TYPE_3__ devnode_t ;
struct TYPE_16__ {int * de_dnp; } ;
typedef TYPE_4__ devdirent_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__* FUNC_2 (struct vnode*) ;
 int FUNC_3 (char*,TYPE_3__*,int *,TYPE_3__*,TYPE_4__**) ;
 TYPE_4__* FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (struct vnode*,char*) ;
 int FUNC_7 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_8(struct vnop_rename_args *VAR_9)
{
 struct vnode *VAR_10 = VAR_9->a_tvp;
 struct vnode *VAR_11 = VAR_9->a_tdvp;
 struct vnode *VAR_12 = VAR_9->a_fvp;
 struct vnode *VAR_13 = VAR_9->a_fdvp;
 struct componentname *VAR_14 = VAR_9->a_tcnp;
 struct componentname *VAR_15 = VAR_9->a_fcnp;
 devnode_t *VAR_16, *VAR_17, *VAR_18, *VAR_19;
 devdirent_t *VAR_20,*VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;

 FUNC_0();



 if (VAR_14->cn_namelen > VAR_1) {
  VAR_23 = VAR_4;
  goto out;
 }






 VAR_19 = FUNC_2(VAR_11);
 VAR_17 = FUNC_2(VAR_13);
 VAR_16 = FUNC_2(VAR_12);

 VAR_20 = FUNC_4(VAR_17, VAR_15->cn_nameptr);

 if (VAR_20 == ((void*)0)) {
         VAR_23 = VAR_5;
  goto out;
 }
 VAR_18 = ((void*)0);
 VAR_21 = ((void*)0);

 if (VAR_10) {
  VAR_21 = FUNC_4(VAR_19, VAR_14->cn_nameptr);

  if (VAR_21 == ((void*)0)) {
          VAR_23 = VAR_5;
   goto out;
  }
  VAR_18 = FUNC_2(VAR_10);
 }




 if ((VAR_16->dn_type) == VAR_2) {



  if ((VAR_15->cn_namelen == 1 && VAR_15->cn_nameptr[0] == '.')
      || (VAR_15->cn_flags&VAR_7)
      || (VAR_14->cn_namelen == 1 && VAR_14->cn_nameptr[0] == '.')
      || (VAR_14->cn_flags&VAR_7)
      || (VAR_19 == VAR_16 )) {
   VAR_23 = VAR_3;
   goto out;
  }
  VAR_22++;
 }




 if (FUNC_6(VAR_13, VAR_15->cn_nameptr) ||
     FUNC_6(VAR_11, VAR_14->cn_nameptr)) {
  VAR_23 = VAR_3;
  goto out;
 }
 if (VAR_22 && (VAR_19 != VAR_17)) {
  devnode_t * VAR_24, *VAR_25;
  VAR_24 = VAR_19;
  do {
   if(VAR_24 == VAR_16) {

    VAR_23 = VAR_3;
    goto out;
   }
   VAR_25 = VAR_24;
  } while ((VAR_24 = VAR_24->dn_typeinfo.Dir.parent) != VAR_25);
 }




 FUNC_7(VAR_16, VAR_0);




 if (VAR_12 == VAR_10) {
  if (VAR_12->v_type == VAR_8) {
   VAR_23 = VAR_3;
   goto out;
  }

  FUNC_5(VAR_20);

  FUNC_1();
  return 0;
 }





 VAR_16->dn_links++;




 if (VAR_18) {





  if (( VAR_22) && (VAR_18->dn_links > 2)) {
          VAR_23 = VAR_6;
   goto bad;
  }
  FUNC_5(VAR_21);
  VAR_18 = ((void*)0);
 }
 FUNC_3(VAR_14->cn_nameptr,VAR_19,((void*)0),VAR_16,&VAR_21);
 VAR_20->de_dnp = ((void*)0);
 VAR_16->dn_links--;

 FUNC_5(VAR_20);
bad:
 VAR_16->dn_links--;
out:
 FUNC_1();
 return (VAR_23);
}
