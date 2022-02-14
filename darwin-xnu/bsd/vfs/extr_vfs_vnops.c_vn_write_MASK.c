
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vfs_context_t ;
struct vnode {scalar_t__ v_type; scalar_t__ v_tag; TYPE_1__* v_mount; } ;
struct uio {scalar_t__ uio_offset; } ;
struct fileproc {TYPE_4__* f_fglob; } ;
typedef scalar_t__ rlim_t ;
typedef TYPE_3__* proc_t ;
typedef int off_t ;
struct TYPE_13__ {int fg_flag; scalar_t__ fg_offset; scalar_t__ fg_data; } ;
struct TYPE_12__ {TYPE_2__* p_rlimit; } ;
struct TYPE_11__ {scalar_t__ rlim_cur; } ;
struct TYPE_10__ {int mnt_flag; } ;


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
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*,struct uio*,int,int ) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,struct vnode*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (struct vnode*,TYPE_3__*) ;
 int FUNC_6 (struct vnode*,TYPE_3__*,int ) ;
 int FUNC_7 (struct uio*) ;
 int FUNC_8 (struct uio*,int) ;
 TYPE_3__* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (struct vnode*) ;
 scalar_t__ FUNC_14 (struct vnode*) ;
 scalar_t__ FUNC_15 (struct vnode*) ;
 int FUNC_16 (struct vnode*) ;
 scalar_t__ FUNC_17 (struct vnode*) ;

__attribute__((used)) static int
FUNC_18(struct fileproc *VAR_26, struct uio *VAR_27, int VAR_28, vfs_context_t VAR_29)
{
 struct vnode *VAR_30;
 int VAR_31, VAR_32;
 off_t VAR_33;
 int VAR_34 = 0;
 int VAR_35=0;
 int VAR_36, VAR_37;
 int VAR_38 = 0;
 proc_t VAR_39 = FUNC_9(VAR_29);

 VAR_33 = 0;
 VAR_30 = (struct vnode *)VAR_26->f_fglob->fg_data;
 if ( (VAR_31 = FUNC_13(VAR_30)) ) {
  return(VAR_31);
 }
 if (FUNC_15(VAR_30)) {
  (void)FUNC_16(VAR_30);
  VAR_31 = VAR_1;
  return (VAR_31);
 }
 VAR_32 = (VAR_16 | VAR_15);

 if (VAR_30->v_type == VAR_24 && (VAR_26->f_fglob->fg_flag & VAR_18))
  VAR_32 |= VAR_8;
 if (VAR_26->f_fglob->fg_flag & VAR_4)
  VAR_32 |= VAR_10;
 if ((VAR_26->f_fglob->fg_flag & VAR_2) || FUNC_14(VAR_30))
         VAR_32 |= VAR_11;
 if (VAR_26->f_fglob->fg_flag & VAR_3)
  VAR_32 |= VAR_12;
 if (VAR_26->f_fglob->fg_flag & VAR_7)
  VAR_32 |= VAR_13;
 if (VAR_26->f_fglob->fg_flag & VAR_20)
  VAR_32 |= VAR_9;
 if ((VAR_26->f_fglob->fg_flag & (VAR_21|VAR_19)) ||
  (VAR_30->v_mount && (VAR_30->v_mount->mnt_flag & VAR_17))) {
  VAR_32 |= VAR_14;
 }

 if ((VAR_28 & VAR_5) == 0) {
  if ((FUNC_17(VAR_30) == VAR_24) && !FUNC_15(VAR_30)) {
   FUNC_11(VAR_26->f_fglob);
   VAR_38 = 1;
  }
  VAR_27->uio_offset = VAR_26->f_fglob->fg_offset;
  VAR_33 = FUNC_7(VAR_27);
 }
 if (((VAR_28 & VAR_5) == 0) &&
   FUNC_9(VAR_29) && (VAR_30->v_type == VAR_24) &&
            (((rlim_t)(VAR_27->uio_offset + FUNC_7(VAR_27)) > VAR_39->p_rlimit[VAR_22].rlim_cur) ||
             ((rlim_t)FUNC_7(VAR_27) > (VAR_39->p_rlimit[VAR_22].rlim_cur - VAR_27->uio_offset)))) {







  VAR_36 = FUNC_7(VAR_27);
             if ((rlim_t)(VAR_27->uio_offset + FUNC_7(VAR_27)) > VAR_39->p_rlimit[VAR_22].rlim_cur) {
   VAR_34 = (VAR_27->uio_offset + FUNC_7(VAR_27)) - VAR_39->p_rlimit[VAR_22].rlim_cur;
  } else if ((rlim_t)FUNC_7(VAR_27) > (VAR_39->p_rlimit[VAR_22].rlim_cur - VAR_27->uio_offset)) {
   VAR_34 = (VAR_39->p_rlimit[VAR_22].rlim_cur - VAR_27->uio_offset);
  }
  if (VAR_34 >= VAR_36) {
   FUNC_4(VAR_39, VAR_23);
   VAR_31 = VAR_0;
   goto error_out;
  }
  VAR_35 = 1;
  FUNC_8(VAR_27, VAR_36-VAR_34);
 }
 if ((VAR_28 & VAR_5) != 0) {

  VAR_32 &= ~VAR_8;
  if (VAR_39 && (VAR_30->v_type == VAR_24) &&
             ((rlim_t)VAR_27->uio_offset >= VAR_39->p_rlimit[VAR_22].rlim_cur)) {
  FUNC_4(VAR_39, VAR_23);
  VAR_31 = VAR_0;
  goto error_out;
 }
  if (VAR_39 && (VAR_30->v_type == VAR_24) &&
   ((rlim_t)(VAR_27->uio_offset + FUNC_7(VAR_27)) > VAR_39->p_rlimit[VAR_22].rlim_cur)) {

   VAR_36 = FUNC_7(VAR_27);
   VAR_34 = (VAR_27->uio_offset + FUNC_7(VAR_27)) - VAR_39->p_rlimit[VAR_22].rlim_cur;
   VAR_35 = 1;
   FUNC_8(VAR_27, VAR_36-VAR_34);
  }
 }

 VAR_31 = FUNC_1(VAR_30, VAR_27, VAR_32, VAR_29);

 if (VAR_35) {
  VAR_37 = FUNC_7(VAR_27);
  FUNC_8(VAR_27, VAR_37 + VAR_34);
 }

 if ((VAR_28 & VAR_5) == 0) {
  if (VAR_32 & VAR_8)
   VAR_26->f_fglob->fg_offset = VAR_27->uio_offset;
  else
   VAR_26->f_fglob->fg_offset += VAR_33 - FUNC_7(VAR_27);
  if (VAR_38) {
   FUNC_12(VAR_26->f_fglob);
   VAR_38 = 0;
  }
 }




 if ((VAR_31 == 0) && (VAR_30->v_tag == VAR_25) && (FUNC_0(VAR_30))) {
  if ((VAR_28 & VAR_6) == 0) {
   FUNC_6(VAR_30, VAR_39, FUNC_2());
  } else {
   FUNC_5(VAR_30, VAR_39);
  }
 }
 (void)FUNC_16(VAR_30);
 return (VAR_31);

error_out:
 if (VAR_38) {
  FUNC_12(VAR_26->f_fglob);
 }
 (void)FUNC_16(VAR_30);
 return (VAR_31);
}
