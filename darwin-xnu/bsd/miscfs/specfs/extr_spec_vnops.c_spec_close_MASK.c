
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vnop_close_args {int a_fflag; int a_context; struct vnode* a_vp; } ;
struct vnode {int v_type; TYPE_1__* v_specinfo; int v_rdev; } ;
struct tty {int dummy; } ;
struct session {int s_ttypgrpid; struct tty* s_ttyp; int s_ttyvid; struct vnode* s_ttyvp; } ;
struct proc {int dummy; } ;
typedef int dev_t ;
struct TYPE_6__ {int (* d_close ) (int ,int,int ,struct proc*) ;} ;
struct TYPE_5__ {int (* d_close ) (int ,int,int ,struct proc*) ;} ;
struct TYPE_4__ {int si_opencount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct session* VAR_5 ;
 struct tty* FUNC_0 (struct session*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct tty* VAR_8 ;


 TYPE_3__* VAR_9 ;
 int FUNC_1 (struct vnode*,int ,int ,int ) ;
 TYPE_2__* VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 struct session* FUNC_7 (struct proc*) ;
 int FUNC_8 (struct session*) ;
 int FUNC_9 (struct session*) ;
 int FUNC_10 (struct session*) ;
 int FUNC_11 (struct vnode*,int ,int ) ;
 int FUNC_12 (int ,int,int ,struct proc*) ;
 int FUNC_13 (int ,int,int ,struct proc*) ;
 int FUNC_14 (struct tty*) ;
 int FUNC_15 (struct tty*) ;
 int FUNC_16 (struct tty*) ;
 int FUNC_17 (struct tty*) ;
 int FUNC_18 (struct vnode*) ;
 struct proc* FUNC_19 (int ) ;

int
FUNC_20(struct vnop_close_args *VAR_11)
{
 struct vnode *VAR_12 = VAR_11->a_vp;
 dev_t VAR_13 = VAR_12->v_rdev;
 int VAR_14 = 0;
 int VAR_15 = VAR_11->a_fflag;
 struct proc *VAR_16 = FUNC_19(VAR_11->a_context);
 struct session *VAR_17;

 switch (VAR_12->v_type) {

 case 128:
  VAR_17 = FUNC_7(VAR_16);
  FUNC_2(VAR_13, VAR_7);
  if (VAR_17 != VAR_5) {
   if (VAR_12 == VAR_17->s_ttyvp && FUNC_18(VAR_12) == 1) {
    struct tty *VAR_18 = VAR_8;

    FUNC_3(VAR_13, VAR_7);
    FUNC_8(VAR_17);
    if (VAR_12 == VAR_17->s_ttyvp) {
     VAR_18 = FUNC_0(VAR_17);
     VAR_17->s_ttyvp = ((void*)0);
     VAR_17->s_ttyvid = 0;
     VAR_17->s_ttyp = VAR_8;
     VAR_17->s_ttypgrpid = VAR_4;
    }
    FUNC_10(VAR_17);

    if (VAR_18 != VAR_8) {





     FUNC_14(VAR_18);
     FUNC_16(VAR_18);
     FUNC_15(VAR_18);

     FUNC_17(VAR_18);
    }
    FUNC_2(VAR_13, VAR_7);
   }
   FUNC_9(VAR_17);
  }

  if (--VAR_12->v_specinfo->si_opencount < 0)
   FUNC_6("negative open count (c, %u, %u)", FUNC_4(VAR_13), FUNC_5(VAR_13));




  if (FUNC_18(VAR_12) == 0 || (VAR_15 & VAR_2) != 0)
   VAR_14 = VAR_10[FUNC_4(VAR_13)].d_close(VAR_13, VAR_15, VAR_7, VAR_16);

  FUNC_3(VAR_13, VAR_7);
  break;

 case 129:




  FUNC_2(VAR_13, VAR_6);
  if (FUNC_18(VAR_12) > 1) {
   VAR_12->v_specinfo->si_opencount--;
   FUNC_3(VAR_13, VAR_6);
   return (0);
  }
  FUNC_3(VAR_13, VAR_6);






         if ((VAR_14 = FUNC_11(VAR_12, VAR_3, VAR_11->a_context)))
          return (VAR_14);

  VAR_14 = FUNC_1(VAR_12, VAR_0, 0, 0);
  if (VAR_14)
   return (VAR_14);

  FUNC_2(VAR_13, VAR_6);

  if (--VAR_12->v_specinfo->si_opencount < 0)
   FUNC_6("negative open count (b, %u, %u)", FUNC_4(VAR_13), FUNC_5(VAR_13));

  if (FUNC_18(VAR_12) == 0)
   VAR_14 = VAR_9[FUNC_4(VAR_13)].d_close(VAR_13, VAR_15, VAR_6, VAR_16);

  FUNC_3(VAR_13, VAR_6);
  break;

 default:
  FUNC_6("spec_close: not special");
  return(VAR_1);
 }

 return VAR_14;
}
