
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int vfs_context_t ;
typedef scalar_t__ uio_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int task_t ;
struct vnode_attr {int va_linkid; } ;
struct proc {int dummy; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
typedef size_t nspace_type_t ;
struct TYPE_17__ {scalar_t__ objid; scalar_t__ infoptr; scalar_t__ fdptr; scalar_t__ flags; scalar_t__ token; } ;
typedef TYPE_2__ namespace_handler_data ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_18__ {int v_flag; } ;
struct TYPE_16__ {scalar_t__ fg_data; int * fg_ops; scalar_t__ fg_flag; } ;
struct TYPE_15__ {int handler_busy; int * handler_proc; int handler_tid; } ;
struct TYPE_14__ {int flags; TYPE_4__* vp; scalar_t__ token; scalar_t__ vid; int arg; scalar_t__ op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct vnode_attr*) ;
 scalar_t__ FUNC_1 (struct vnode_attr*,int ) ;
 int FUNC_2 (struct vnode_attr*,int ) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*,scalar_t__,int) ;
 void* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct proc*,struct fileproc**,scalar_t__*,int ) ;
 int FUNC_10 (struct proc*,scalar_t__,struct fileproc*,int) ;
 int FUNC_11 (struct proc*,scalar_t__,struct fileproc*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__,int *,int,char*,int ) ;
 scalar_t__ FUNC_15 (int,size_t) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_12__* VAR_12 ;
 int VAR_13 ;
 TYPE_11__* VAR_14 ;
 scalar_t__ FUNC_16 (size_t) ;
 scalar_t__ VAR_15 ;
 int FUNC_17 (struct proc*) ;
 int FUNC_18 (struct proc*) ;
 int FUNC_19 (struct proc*,scalar_t__,int *) ;
 int VAR_16 ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 int VAR_17 ;
 int FUNC_23 () ;
 int FUNC_24 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_25 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_26 (TYPE_4__*,struct vnode_attr*,int ) ;
 int FUNC_27 (TYPE_4__*,scalar_t__) ;
 int FUNC_28 (TYPE_4__*) ;
 int FUNC_29 (TYPE_4__*) ;
 int FUNC_30 (TYPE_4__*) ;
 int VAR_18 ;
 int FUNC_31 (scalar_t__) ;

__attribute__((used)) static int
FUNC_32(namespace_handler_data *VAR_19, nspace_type_t VAR_20)
{
 int VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;
 task_t VAR_24;

 FUNC_12(&VAR_10);
 if (VAR_12[VAR_20].handler_busy) {
  FUNC_13(&VAR_10);
  return VAR_0;
 }

 VAR_12[VAR_20].handler_busy = 1;
 FUNC_13(&VAR_10);
 VAR_24 = FUNC_7();
 FUNC_4 (VAR_24);

 FUNC_12(&VAR_11);
 if (VAR_12[VAR_20].handler_proc == ((void*)0)) {
  VAR_12[VAR_20].handler_tid = FUNC_20(FUNC_8());
  VAR_12[VAR_20].handler_proc = FUNC_6();
 }

 if (VAR_20 == VAR_3 &&
   (VAR_16 == 0 || VAR_16 == ~0)) {
  VAR_22 = VAR_1;
 }

 while (VAR_22 == 0) {


  for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {
   if (VAR_14[VAR_21].flags & VAR_5) {
    if (FUNC_15(VAR_14[VAR_21].flags, VAR_20)) {
     break;
    }
   }
  }

  if (VAR_21 >= VAR_2) {

   VAR_22 = FUNC_14((caddr_t)&VAR_13, &VAR_11, VAR_8|VAR_7, "namespace-items", 0);
   if ((VAR_20 == VAR_3) && (VAR_16 == 0 || VAR_16 == ~0)) {

    VAR_22 = VAR_1;
    break;
   }
   continue;
  }

  VAR_14[VAR_21].flags &= ~VAR_5;
  VAR_14[VAR_21].flags |= VAR_6;
  VAR_14[VAR_21].token = ++VAR_15;

  FUNC_3(VAR_14[VAR_21].vp);
  struct fileproc *VAR_25;
  int32_t VAR_26;
  int32_t VAR_27;
  struct proc *VAR_28 = FUNC_6();
  vfs_context_t VAR_29 = FUNC_23();
  struct vnode_attr VAR_30;
  bool VAR_31 = 0;
  bool VAR_32 = 0;
  bool VAR_33 = 0;





  VAR_27 = FUNC_16(VAR_20);
  VAR_22 = FUNC_27(VAR_14[VAR_21].vp, VAR_14[VAR_21].vid);
  if (VAR_22) goto cleanup;
  VAR_31 = 1;

  VAR_22 = FUNC_25(VAR_14[VAR_21].vp, VAR_27, VAR_29);
  if (VAR_22) goto cleanup;
  VAR_32 = 1;

  VAR_22 = FUNC_9(VAR_28, &VAR_25, &VAR_26, VAR_29);
  if (VAR_22) goto cleanup;
  VAR_33 = 1;

  VAR_25->f_fglob->fg_flag = VAR_27;
  VAR_25->f_fglob->fg_ops = &VAR_18;
  VAR_25->f_fglob->fg_data = (caddr_t)VAR_14[VAR_21].vp;

  FUNC_17(VAR_28);
  FUNC_19(VAR_28, VAR_26, ((void*)0));
  FUNC_10(VAR_28, VAR_26, VAR_25, 1);
  FUNC_18(VAR_28);





  VAR_22 = FUNC_5(&VAR_14[VAR_21].token, VAR_19->token, sizeof(uint32_t));
  if (VAR_22) goto cleanup;
  VAR_22 = FUNC_5(&VAR_14[VAR_21].op, VAR_19->flags, sizeof(uint64_t));
  if (VAR_22) goto cleanup;
  VAR_22 = FUNC_5(&VAR_26, VAR_19->fdptr, sizeof(uint32_t));
  if (VAR_22) goto cleanup;
  if (VAR_19->infoptr) {
   uio_t VAR_34 = (uio_t)VAR_14[VAR_21].arg;
   uint64_t VAR_35, VAR_36;

   if (VAR_34) {
    VAR_35 = FUNC_21(VAR_34);
    VAR_36 = FUNC_22(VAR_34);
   } else {
    VAR_35 = 0;
    VAR_36 = 0;
   }
   VAR_22 = FUNC_5(&VAR_35, VAR_19->infoptr, sizeof(uint64_t));
   if (VAR_22) goto cleanup;
   VAR_22 = FUNC_5(&VAR_36, VAR_19->infoptr + sizeof(uint64_t), sizeof(uint64_t));
   if (VAR_22) goto cleanup;
  }

  if (VAR_19->objid) {
   FUNC_0(&VAR_30);
   FUNC_2(&VAR_30, VAR_17);
   VAR_22 = FUNC_26(VAR_14[VAR_21].vp, &VAR_30, VAR_29);
   if (VAR_22) goto cleanup;

   uint64_t VAR_37 = 0;
   if (FUNC_1 (&VAR_30, VAR_17)) {
    VAR_37 = (uint64_t)VAR_30.va_linkid;
   }
   VAR_22 = FUNC_5(&VAR_37, VAR_19->objid, sizeof(uint64_t));
  }
cleanup:
  if (VAR_22) {
   if (VAR_33) FUNC_11(VAR_28, VAR_26, VAR_25);
   if (VAR_32) FUNC_24(VAR_14[VAR_21].vp, VAR_27, VAR_29);
   VAR_23 = 1;
  }

  if (VAR_31) FUNC_29(VAR_14[VAR_21].vp);

  break;
 }

 if (VAR_23) {
  if (VAR_14[VAR_21].vp && (VAR_14[VAR_21].vp->v_flag & VAR_9)) {
   FUNC_28(VAR_14[VAR_21].vp);
   VAR_14[VAR_21].vp->v_flag &= ~VAR_9;
   FUNC_30(VAR_14[VAR_21].vp);
  }
  VAR_14[VAR_21].vp = ((void*)0);
  VAR_14[VAR_21].vid = 0;
  VAR_14[VAR_21].flags = VAR_4;
  VAR_14[VAR_21].token = 0;

  FUNC_31((caddr_t)&(VAR_14[VAR_21].vp));
 }

 if (VAR_20 == VAR_3) {

  if (VAR_22 && (VAR_16 == 0 || VAR_16 == ~0)) {
   for(VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {
    if (VAR_14[VAR_21].flags & VAR_5) {
     if (FUNC_15(VAR_14[VAR_21].flags, VAR_20)) {
      VAR_14[VAR_21].vp = ((void*)0);
      VAR_14[VAR_21].vid = 0;
      VAR_14[VAR_21].flags = VAR_4;
      VAR_14[VAR_21].token = 0;

      FUNC_31((caddr_t)&(VAR_14[VAR_21].vp));
     }
    }
   }
  }
 }

 FUNC_13(&VAR_11);

 FUNC_12(&VAR_10);
 VAR_12[VAR_20].handler_busy = 0;
 FUNC_13(&VAR_10);

 return VAR_22;
}
