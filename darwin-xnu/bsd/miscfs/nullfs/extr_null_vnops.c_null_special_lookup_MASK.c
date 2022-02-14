
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_lookup_args {struct vnode** a_vpp; int a_context; struct vnode* a_dvp; struct componentname* a_cnp; } ;
struct vnode {int dummy; } ;
struct null_mount {int nullm_flags; struct vnode* nullm_lowerrootvp; struct vnode* nullm_thirdcovervp; int nullm_lowerrootvid; struct vnode* nullm_rootvp; struct vnode* nullm_secondvp; } ;
struct mount {int dummy; } ;
struct componentname {char* cn_nameptr; int cn_namelen; } ;


 int VAR_0 ;
 struct null_mount* FUNC_0 (struct mount*) ;
 int VAR_1 ;
 int FUNC_1 (struct vnode*,struct vnode**,struct componentname*,int ) ;
 int FUNC_2 (struct vnode*,struct vnode**,int ) ;
 int FUNC_3 (struct mount*,int *,struct vnode*,struct vnode**,struct componentname*,int ) ;
 int FUNC_4 (struct mount*,struct vnode*,struct vnode*,struct vnode**,struct componentname*,int ) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*,int ) ;
 struct mount* FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*) ;

__attribute__((used)) static int
FUNC_9(struct vnop_lookup_args * VAR_2)
{
 struct componentname * VAR_3 = VAR_2->a_cnp;
 struct vnode * VAR_4 = VAR_2->a_dvp;
 struct vnode * VAR_5 = ((void*)0);
 struct vnode * VAR_6 = ((void*)0);
 struct vnode * VAR_7 = ((void*)0);
 struct mount * VAR_8 = FUNC_7(VAR_4);
 struct null_mount * VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = VAR_0;

 if (VAR_4 == VAR_9->nullm_rootvp) {

  if (VAR_3->cn_nameptr[0] == '.') {
   if (VAR_3->cn_namelen == 1 || (VAR_3->cn_namelen == 2 && VAR_3->cn_nameptr[1] == '.')) {

    VAR_7 = VAR_4;
    VAR_10 = FUNC_5(VAR_7);
    goto end;
   }
  }



  if (VAR_3->cn_namelen == 1 &&
      (VAR_3->cn_nameptr[0] == 'd' || (VAR_9->nullm_flags & VAR_1 ? VAR_3->cn_nameptr[0] == 'D' : 0))) {
   VAR_10 = 0;
   if (VAR_9->nullm_secondvp == ((void*)0)) {
    VAR_10 = FUNC_3(VAR_8, ((void*)0), VAR_4, &VAR_7, VAR_3, 0);
    if (VAR_10) {
     goto end;
    }

    VAR_9->nullm_secondvp = VAR_7;
   } else {
    VAR_7 = VAR_9->nullm_secondvp;
    VAR_10 = FUNC_5(VAR_7);
   }
  }

 } else if (VAR_4 == VAR_9->nullm_secondvp) {

  if (VAR_3->cn_nameptr[0] == '.') {
   if (VAR_3->cn_namelen == 1) {
    VAR_7 = VAR_4;
    VAR_10 = FUNC_5(VAR_7);
    goto end;
   } else if (VAR_3->cn_namelen == 2 && VAR_3->cn_nameptr[1] == '.') {

    VAR_7 = VAR_9->nullm_rootvp;
    VAR_10 = FUNC_5(VAR_7);
    goto end;
   }
  }




  VAR_10 = FUNC_6(VAR_9->nullm_lowerrootvp, VAR_9->nullm_lowerrootvid);
  if (VAR_10) {
   goto end;
  }
  VAR_10 = FUNC_2(VAR_9->nullm_lowerrootvp, &VAR_5, VAR_2->a_context);

  if (VAR_10 == 0) {
   VAR_10 = FUNC_1(VAR_5, &VAR_6, VAR_3, VAR_2->a_context);
   FUNC_8(VAR_5);

   if (VAR_10 == 0) {
    if (VAR_6 == VAR_9->nullm_lowerrootvp) {


     VAR_10 = FUNC_4(VAR_8, VAR_6, VAR_4, &VAR_7, VAR_3, 0);

     if (VAR_10 == 0 && VAR_9->nullm_thirdcovervp == ((void*)0)) {

      VAR_9->nullm_thirdcovervp = VAR_7;
     }
    } else {
     VAR_10 = VAR_0;
    }
    FUNC_8(VAR_6);
   }
  }
  FUNC_8(VAR_9->nullm_lowerrootvp);
 }

end:
 if (VAR_10 == 0) {
  *VAR_2->a_vpp = VAR_7;
 }
 return VAR_10;
}
