
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef struct vnode* vnode_t ;
typedef int user_addr_t ;
typedef int u_int ;
struct vnode {int dummy; } ;
struct vfs_context {int vc_ucred; int vc_thread; } ;
struct fileproc {TYPE_5__* f_fglob; } ;
typedef int proc_t ;
typedef int kd_threadmap ;
typedef int kd_regtype ;
typedef int kd_bufinfo ;
typedef int kd_buf ;
struct TYPE_6__ {int nkdbufs; int nkdthreads; int nolog; int flags; int bufid; } ;
typedef TYPE_1__ kbufinfo_t ;
struct TYPE_8__ {int fg_offset; scalar_t__ fg_data; int fg_cred; } ;
struct TYPE_7__ {int kdebug_flags; int kdebug_slowcheck; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,...) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (TYPE_1__*,int ,size_t) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int,struct fileproc*,int) ;
 int FUNC_8 (int ,int,struct fileproc**,int) ;
 TYPE_3__ VAR_19 ;
 int VAR_20 ;
 int FUNC_9 (int ,size_t) ;
 int FUNC_10 (int ,size_t*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,size_t*,struct vnode*,struct vfs_context*,int ) ;
 int FUNC_13 (int ,size_t*) ;
 int FUNC_14 (int ,size_t*) ;
 int FUNC_15 (int ,size_t,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (unsigned int) ;
 int FUNC_18 (int ,unsigned int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (size_t) ;
 int FUNC_23 () ;
 size_t FUNC_24 (size_t,int ) ;
 int FUNC_25 (struct vnode*,struct vfs_context*) ;
 int VAR_21 ;
 int FUNC_26 () ;
 int FUNC_27 (int ) ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 (int ) ;
 int FUNC_32 () ;
 int FUNC_33 (TYPE_1__*,int ,int) ;
 int VAR_22 ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (struct vnode*) ;
 int FUNC_37 (struct vnode*) ;

int
FUNC_38(int *VAR_23, u_int VAR_24, user_addr_t VAR_25, size_t *VAR_26)
{
 int VAR_27 = 0;
 size_t VAR_28 = *VAR_26;
 unsigned int VAR_29 = 0;
 kd_regtype VAR_30;
 kbufinfo_t VAR_31;
 proc_t VAR_32;

 if (VAR_23[0] == 129 ||
  VAR_23[0] == 128 ||
  VAR_23[0] == 131 ||
  VAR_23[0] == 130 ||
  VAR_23[0] == 146 ||
  VAR_23[0] == 147 ||
  VAR_23[0] == 145 ||
  VAR_23[0] == 137)
 {
  if (VAR_24 < 2) {
   return VAR_4;
  }
  VAR_29 = VAR_23[1];
 }

 FUNC_11();
 FUNC_2(VAR_19.kdebug_flags & VAR_7);

 FUNC_29();






 if (VAR_23[0] != 144 &&
     VAR_23[0] != 143 &&
     VAR_23[0] != 140)
 {
  if ((VAR_27 = FUNC_27(VAR_12))) {
   goto out;
  }
 } else {
  if ((VAR_27 = FUNC_30())) {
   goto out;
  }
 }

 switch(VAR_23[0]) {
  case 144:
   if (VAR_28 < sizeof(VAR_31.nkdbufs)) {




    VAR_27 = VAR_4;
    break;
   }

   FUNC_33(&VAR_31, 0, sizeof(VAR_31));

   VAR_31.nkdbufs = VAR_22;
   VAR_31.nkdthreads = VAR_20;

   if ( (VAR_19.kdebug_slowcheck & VAR_16) )
    VAR_31.nolog = 1;
   else
    VAR_31.nolog = 0;

   VAR_31.flags = VAR_19.kdebug_flags;

   VAR_31.flags |= VAR_8;

   {
    int VAR_33 = FUNC_28();
    VAR_31.bufid = (VAR_33 == 0 ? -1 : VAR_33);
   }

   if (VAR_28 >= sizeof(VAR_31)) {



    if (FUNC_4(&VAR_31, VAR_25, sizeof(VAR_31)))
     VAR_27 = VAR_4;
   } else {




    if (FUNC_4(&VAR_31, VAR_25, VAR_28))
     VAR_27 = VAR_4;
   }
   break;

  case 140:
   VAR_27 = FUNC_14(VAR_25, VAR_26);
   break;

  case 146:
   VAR_29 &= VAR_9;
   VAR_19.kdebug_flags |= VAR_29;
   break;

  case 147:
   VAR_29 &= VAR_9;
   VAR_19.kdebug_flags &= ~VAR_29;
   break;

  case 145:






   if (VAR_29) {



    if (!(VAR_19.kdebug_flags & VAR_6) ||
        !(VAR_29 == VAR_11 || VAR_29 == VAR_10)) {
     VAR_27 = VAR_4;
     break;
    }
    FUNC_23();

    FUNC_18(VAR_18, VAR_29);
   }
   else
   {
    if (!VAR_21) {
     break;
    }

    FUNC_26();
   }
   break;

  case 137:
   FUNC_17(VAR_29);
   break;

  case 135:
   VAR_27 = FUNC_16(VAR_5);
   break;

  case 138:
   FUNC_31(VAR_12);
   break;

  case 136:
   if(VAR_28 < sizeof(kd_regtype)) {
    VAR_27 = VAR_4;
    break;
   }
   if (FUNC_3(VAR_25, &VAR_30, sizeof(kd_regtype))) {
    VAR_27 = VAR_4;
    break;
   }

   VAR_27 = FUNC_21(&VAR_30);
   break;

  case 143:
   VAR_27 = VAR_4;
   break;

  case 139:
   VAR_27 = FUNC_12(VAR_25, VAR_26, ((void*)0), ((void*)0), VAR_13);
   break;

  case 129:
  case 128:
  case 131:
  case 130:
  {
   struct vfs_context VAR_34;
   struct fileproc *VAR_35;
   size_t VAR_36;
   vnode_t VAR_37;
   int VAR_38;

   if (VAR_23[0] == 129 || VAR_23[0] == 128) {
    (void)FUNC_24(VAR_28, VAR_18);
   }
   VAR_32 = FUNC_5();
   VAR_38 = VAR_29;

   FUNC_34(VAR_32);
   if ( (VAR_27 = FUNC_8(VAR_32, VAR_38, &VAR_35, 1)) ) {
    FUNC_35(VAR_32);
    break;
   }
   VAR_34.vc_thread = FUNC_6();
   VAR_34.vc_ucred = VAR_35->f_fglob->fg_cred;

   if (FUNC_0(VAR_35->f_fglob) != VAR_2) {
    FUNC_7(VAR_32, VAR_38, VAR_35, 1);
    FUNC_35(VAR_32);

    VAR_27 = VAR_3;
    break;
   }
   VAR_37 = (struct vnode *)VAR_35->f_fglob->fg_data;
   FUNC_35(VAR_32);

   if ((VAR_27 = FUNC_36(VAR_37)) == 0) {
    VAR_15 = VAR_35->f_fglob->fg_offset;
    if (VAR_23[0] == 129 || VAR_23[0] == 128) {
     VAR_36 = VAR_22 * sizeof(kd_buf);

     FUNC_1(VAR_17 | VAR_1);
     if (VAR_23[0] == 128)
      VAR_27 = FUNC_12(0, &VAR_36, VAR_37, &VAR_34, VAR_14);
     else
      VAR_27 = FUNC_12(0, &VAR_36, VAR_37, &VAR_34, VAR_13);
     FUNC_1(VAR_17 | VAR_0, VAR_36);

     *VAR_26 = VAR_36;
    } else {
     VAR_36 = VAR_20 * sizeof(kd_threadmap);
     if (VAR_23[0] == 130) {
      VAR_27 = FUNC_15(0, VAR_36, VAR_38);
     } else {
      VAR_27 = FUNC_25(VAR_37, &VAR_34);
     }
    }
    VAR_35->f_fglob->fg_offset = VAR_15;
    FUNC_37(VAR_37);
   }
   FUNC_7(VAR_32, VAR_38, VAR_35, 0);

   break;
  }
  case 149:
   *VAR_26 = FUNC_24(VAR_28, VAR_5);
   break;

  case 141:
   if (VAR_28 < sizeof(kd_regtype)) {
    VAR_27 = VAR_4;
    break;
   }
   if (FUNC_3(VAR_25, &VAR_30, sizeof(kd_regtype))) {
    VAR_27 = VAR_4;
    break;
   }

   VAR_27 = FUNC_19(&VAR_30);
   break;

  case 142:
   if (VAR_28 < sizeof(kd_regtype)) {
    VAR_27 = VAR_4;
    break;
   }
   if (FUNC_3(VAR_25, &VAR_30, sizeof(kd_regtype))) {
    VAR_27 = VAR_4;
    break;
   }

   VAR_27 = FUNC_20(&VAR_30);
   break;

  case 148:
   VAR_27 = FUNC_13(VAR_25, VAR_26);
   break;

  case 132:
   VAR_27 = FUNC_10(VAR_25, VAR_26);
   break;

  case 134: {
   VAR_27 = FUNC_9(VAR_25, VAR_28);
   break;
  }

  case 133:
   VAR_27 = FUNC_22(VAR_28);
   break;

  default:
   VAR_27 = VAR_4;
   break;
 }
out:
 FUNC_32();

 return VAR_27;
}
