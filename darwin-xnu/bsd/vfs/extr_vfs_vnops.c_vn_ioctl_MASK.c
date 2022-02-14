
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int u_long ;
struct vnode {int v_type; int v_rdev; } ;
struct session {int s_ttyvid; struct vnode* s_ttyvp; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
typedef int off_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_6__ {int d_type; } ;
struct TYPE_5__ {int d_type; } ;
struct TYPE_4__ {int fg_offset; int fg_flag; scalar_t__ fg_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_0 (struct vnode*,int ,scalar_t__,int ,int ) ;

 TYPE_3__* VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_1 (int ,struct vnode*,int ) ;
 size_t FUNC_2 (int ) ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 struct session* FUNC_3 (int ) ;
 int FUNC_4 (struct session*) ;
 int FUNC_5 (struct session*) ;
 int FUNC_6 (struct session*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct vnode*) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*,int*,int ) ;
 int FUNC_11 (struct vnode*) ;

__attribute__((used)) static int
FUNC_12(struct fileproc *VAR_13, u_long VAR_14, caddr_t VAR_15, vfs_context_t VAR_16)
{
 struct vnode *VAR_17 = ((struct vnode *)VAR_13->f_fglob->fg_data);
 off_t VAR_18;
 int VAR_19;
 struct vnode *VAR_20;
 struct session * VAR_21;

 if ( (VAR_19 = FUNC_8(VAR_17)) ) {
  return(VAR_19);
 }







 switch (VAR_17->v_type) {
 case 128:
 case 130:
  if (VAR_14 == VAR_7) {
   if ((VAR_19 = FUNC_10(VAR_17, &VAR_18, VAR_16)) != 0)
    goto out;
   *(int *)VAR_15 = VAR_18 - VAR_13->f_fglob->fg_offset;
   goto out;
  }
  if (VAR_14 == VAR_6 || VAR_14 == VAR_4) {
   goto out;
  }


 default:
  VAR_19 = VAR_1;
  goto out;

 case 129:
 case 131:
 case 132:


  if (VAR_14 == VAR_0) {
   VAR_19 = VAR_3;
   goto out;
  }

  if (VAR_14 == VAR_5) {
   if (VAR_17->v_type == 132) {
    if (FUNC_2(VAR_17->v_rdev) >= VAR_11) {
     VAR_19 = VAR_2;
     goto out;
    }
    *(int *)VAR_15 = VAR_9[FUNC_2(VAR_17->v_rdev)].d_type;

   } else if (VAR_17->v_type == 131) {
    if (FUNC_2(VAR_17->v_rdev) >= VAR_12) {
     VAR_19 = VAR_2;
     goto out;
    }
    *(int *)VAR_15 = VAR_10[FUNC_2(VAR_17->v_rdev)].d_type;
   } else {
    VAR_19 = VAR_1;
    goto out;
   }
   goto out;
  }
  VAR_19 = FUNC_0(VAR_17, VAR_14, VAR_15, VAR_13->f_fglob->fg_flag, VAR_16);

  if (VAR_19 == 0 && VAR_14 == VAR_8) {
   VAR_21 = FUNC_3(FUNC_7(VAR_16));

   FUNC_4(VAR_21);
   VAR_20 = VAR_21->s_ttyvp;
   VAR_21->s_ttyvp = VAR_17;
   VAR_21->s_ttyvid = FUNC_11(VAR_17);
   FUNC_6(VAR_21);
   FUNC_5(VAR_21);
  }
 }
out:
 (void)FUNC_9(VAR_17);
 return(VAR_19);
}
