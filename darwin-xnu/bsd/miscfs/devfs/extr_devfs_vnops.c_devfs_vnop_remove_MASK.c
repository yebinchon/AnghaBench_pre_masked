
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vnop_remove_args {struct componentname* a_cnp; struct vnode* a_dvp; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct componentname {char* cn_nameptr; int cn_namelen; int cn_flags; } ;
struct TYPE_5__ {scalar_t__ dn_type; int dn_links; } ;
typedef TYPE_1__ devnode_t ;
typedef int devdirent_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (struct vnode*) ;
 int * FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (struct vnode*,char*) ;

__attribute__((used)) static int
FUNC_7(struct vnop_remove_args *VAR_7)





{
 struct vnode *VAR_8 = VAR_7->a_vp;
 struct vnode *VAR_9 = VAR_7->a_dvp;
 struct componentname *VAR_10 = VAR_7->a_cnp;
 devnode_t * VAR_11;
 devnode_t * VAR_12;
 devdirent_t * VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;







 FUNC_0();

 VAR_11 = FUNC_2(VAR_8);
 VAR_12 = FUNC_2(VAR_9);


 VAR_13 = FUNC_3(VAR_12, VAR_10->cn_nameptr);

 if (VAR_13 == ((void*)0)) {
         VAR_15 = VAR_4;
  goto abort;
 }




 if (FUNC_6(VAR_9, VAR_10->cn_nameptr)) {
  VAR_15 = VAR_3;
  goto abort;
}




 if ((VAR_11->dn_type) == VAR_2) {



  if ( (VAR_10->cn_namelen == 1 && VAR_10->cn_nameptr[0] == '.')
      || (VAR_10->cn_flags&VAR_6) ) {
   VAR_15 = VAR_3;
   goto abort;
  }
  VAR_14++;
 }




 FUNC_5(VAR_12, VAR_0 | VAR_1);






 if (( VAR_14) && (VAR_11->dn_links > 2)) {
     VAR_15 = VAR_5;
     goto abort;
 }
 FUNC_4(VAR_13);
abort:
 FUNC_1();

 return (VAR_15);
}
