
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct vnode {scalar_t__ v_type; int v_flag; TYPE_1__* v_mount; } ;
struct timespec {scalar_t__ tv_nsec; void* tv_sec; } ;
typedef size_t nspace_type_t ;
typedef int * caddr_t ;
struct TYPE_6__ {int * handler_proc; } ;
struct TYPE_5__ {int op; int flags; int refcount; int token; int * arg; struct vnode* vp; int vid; } ;
struct TYPE_4__ {int mnt_kern_flag; } ;


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
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,char*,struct timespec*) ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 TYPE_3__* VAR_21 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (size_t) ;
 int VAR_22 ;
 TYPE_2__* VAR_23 ;
 int VAR_24 ;
 size_t FUNC_6 (int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct vnode*) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*) ;
 int FUNC_11 (int *) ;

int
FUNC_12(struct vnode *VAR_25, uint64_t VAR_26, void *VAR_27)
{
 int VAR_28, VAR_29, VAR_30;
 struct timespec VAR_31;
 nspace_type_t VAR_32 = FUNC_6(VAR_26);


 if (VAR_25->v_type != VAR_17 && VAR_25->v_type != VAR_14 && VAR_25->v_type != VAR_15) {
  return 0;
 }
 if ( (VAR_26 & VAR_5)
     && (VAR_25->v_mount != ((void*)0))
     && (VAR_25->v_mount->mnt_kern_flag & VAR_4)
     && !VAR_18) {

  return 0;
 }


 if (VAR_21[VAR_32].handler_proc == ((void*)0)) {
  return 0;
 }

 if (FUNC_4(FUNC_0())) {
  return VAR_0;
 }

 FUNC_1(&VAR_19);

retry:
 for(VAR_28=0; VAR_28 < VAR_3; VAR_28++) {
  if (VAR_25 == VAR_23[VAR_28].vp && VAR_26 == VAR_23[VAR_28].op) {
   break;
  }
 }

 if (VAR_28 >= VAR_3) {
  for(VAR_28=0; VAR_28 < VAR_3; VAR_28++) {
   if (VAR_23[VAR_28].flags == 0) {
    break;
   }
  }
 } else {
  VAR_23[VAR_28].refcount++;
 }

 if (VAR_28 >= VAR_3) {
  VAR_31.tv_sec = VAR_20;
  VAR_31.tv_nsec = 0;

  VAR_29 = FUNC_3((caddr_t)&VAR_24, &VAR_19, VAR_13|VAR_12, "nspace-no-space", &VAR_31);
  if (VAR_29 == 0) {

   goto retry;
  } else {
   FUNC_2(&VAR_19);
   return VAR_29;
  }
 }






 if (VAR_25 != VAR_23[VAR_28].vp) {
  VAR_23[VAR_28].vp = VAR_25;
  VAR_23[VAR_28].arg = (VAR_27 == VAR_11) ? ((void*)0) : VAR_27;
  VAR_23[VAR_28].op = VAR_26;
  VAR_23[VAR_28].vid = FUNC_10(VAR_25);
  VAR_23[VAR_28].flags = VAR_8;
  VAR_23[VAR_28].flags |= FUNC_5(VAR_32);
  if (VAR_23[VAR_28].flags & VAR_10) {
   if (VAR_27) {
    FUNC_8(VAR_25);
    VAR_25->v_flag |= VAR_16;
    FUNC_9(VAR_25);
   }
  }

  VAR_23[VAR_28].token = 0;
  VAR_23[VAR_28].refcount = 1;

  FUNC_11((caddr_t)&VAR_22);
 }





 VAR_30 = 1;
 while(VAR_30) {
  VAR_31.tv_sec = VAR_20;
  VAR_31.tv_nsec = 0;
  VAR_29 = FUNC_3((caddr_t)&(VAR_23[VAR_28].vp), &VAR_19, VAR_13|VAR_12, "namespace-done", &VAR_31);

  if (VAR_23[VAR_28].flags & VAR_7) {
   VAR_29 = 0;
  } else if (VAR_23[VAR_28].flags & VAR_6) {
   VAR_29 = VAR_23[VAR_28].token;
  } else if (VAR_29 == VAR_2 || VAR_29 == VAR_1) {
   if (VAR_23[VAR_28].flags & VAR_9) {
    VAR_23[VAR_28].flags &= ~VAR_9;
    continue;
   } else {
    VAR_29 = VAR_1;
   }
  } else if (VAR_29 == 0) {

   FUNC_7("woken up for token %d but it's not done, cancelled or timedout and error == 0.\n",
          VAR_23[VAR_28].token);
  }

  if (--VAR_23[VAR_28].refcount == 0) {
   VAR_23[VAR_28].vp = ((void*)0);
   VAR_23[VAR_28].arg = ((void*)0);
   VAR_23[VAR_28].token = 0;
   VAR_23[VAR_28].flags = 0;
  }
  FUNC_11(&VAR_24);
  VAR_30 = 0;
 }

 FUNC_2(&VAR_19);

 return VAR_29;
}
