
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnop_open_args {int a_mode; int a_context; struct vnode* a_vp; } ;
struct vnode {int v_lock; struct fifoinfo* v_fifoinfo; } ;
struct TYPE_2__ {int sb_lowat; } ;
struct socket {int so_state; TYPE_1__ so_snd; } ;
struct fifoinfo {int fi_flags; int fi_readers; int fi_writers; struct socket* fi_readsock; struct socket* fi_writesock; } ;
typedef int* caddr_t ;


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
 int FUNC_0 (struct vnode*,int,int ,int) ;
 int FUNC_1 (int*,int *,int,char*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct socket*,int) ;
 int FUNC_4 (struct socket*,int) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*,struct socket*) ;
 int FUNC_7 (int ,struct socket**,int ,int ) ;
 int FUNC_8 (struct vnode*) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (int*) ;

int
FUNC_11(struct vnop_open_args *VAR_15)
{
 struct vnode *VAR_16 = VAR_15->a_vp;
 struct fifoinfo *VAR_17;
 struct socket *VAR_18, *VAR_19;
 int VAR_20;

 FUNC_8(VAR_16);

retry:

 VAR_17 = VAR_16->v_fifoinfo;

 if (VAR_17 == (struct fifoinfo *)0)
  FUNC_2("fifo_open with no fifoinfo");

 if ((VAR_17->fi_flags & VAR_2) == 0) {
  if (VAR_17->fi_flags & VAR_4) {
   VAR_17->fi_flags |= VAR_3;
   VAR_20 = FUNC_1(&VAR_17->fi_flags, &VAR_16->v_lock, VAR_10 | VAR_8, "fifocreatewait", ((void*)0));
   if (VAR_20) {
    FUNC_9(VAR_16);
    return(VAR_20);
   }
   goto retry;
  } else {
   VAR_17->fi_flags |= VAR_4;
   FUNC_9(VAR_16);
   if ( (VAR_20 = FUNC_7(VAR_0, &VAR_18, VAR_12, 0)) ) {
           goto bad1;
   }

   if ( (VAR_20 = FUNC_7(VAR_0, &VAR_19, VAR_12, 0)) ) {
    (void)FUNC_5(VAR_18);
           goto bad1;
   }

   if ( (VAR_20 = FUNC_6(VAR_19, VAR_18)) ) {
    (void)FUNC_5(VAR_19);
    (void)FUNC_5(VAR_18);
           goto bad1;
   }
   VAR_17->fi_readers = VAR_17->fi_writers = 0;




          FUNC_3(VAR_19, 1);
   VAR_19->so_state |= VAR_13;
   VAR_19->so_snd.sb_lowat = VAR_9;
          FUNC_4(VAR_19, 1);

          FUNC_3(VAR_18, 1);
   VAR_18->so_state |= VAR_14;
          FUNC_4(VAR_18, 1);

   FUNC_8(VAR_16);
   VAR_17->fi_readsock = VAR_18;
   VAR_17->fi_writesock = VAR_19;

   VAR_17->fi_flags |= VAR_2;
   VAR_17->fi_flags &= ~VAR_4;

   if ((VAR_17->fi_flags & VAR_3)) {
    VAR_17->fi_flags &= ~VAR_3;
    FUNC_10(&VAR_17->fi_flags);
   }

  }
 }



 if (VAR_15->a_mode & VAR_5) {
  VAR_17->fi_readers++;
  if (VAR_17->fi_readers == 1) {
   FUNC_3(VAR_17->fi_writesock, 1);
   VAR_17->fi_writesock->so_state &= ~VAR_14;
   FUNC_4(VAR_17->fi_writesock, 1);

   if (VAR_17->fi_writers > 0)
    FUNC_10((caddr_t)&VAR_17->fi_writers);
  }
 }
 if (VAR_15->a_mode & VAR_6) {
  VAR_17->fi_writers++;
  if (VAR_17->fi_writers == 1) {
   FUNC_3(VAR_17->fi_readsock, 1);
   VAR_17->fi_readsock->so_state &= ~VAR_13;
   FUNC_4(VAR_17->fi_readsock, 1);

   if (VAR_17->fi_readers > 0)
    FUNC_10((caddr_t)&VAR_17->fi_readers);
  }
 }
 if ((VAR_15->a_mode & VAR_5) && (VAR_15->a_mode & VAR_7) == 0) {
  if (VAR_17->fi_writers == 0) {
   VAR_20 = FUNC_1((caddr_t)&VAR_17->fi_readers, &VAR_16->v_lock,
     VAR_8 | VAR_11, "fifoor", ((void*)0));
   if (VAR_20)
    goto bad;
   if (VAR_17->fi_readers == 1) {
    if (VAR_17->fi_writers > 0)
     FUNC_10((caddr_t)&VAR_17->fi_writers);
   }
  }
 }
 if (VAR_15->a_mode & VAR_6) {
  if (VAR_15->a_mode & VAR_7) {
   if (VAR_17->fi_readers == 0) {
     VAR_20 = VAR_1;
     goto bad;
   }
  } else {
   if (VAR_17->fi_readers == 0) {
    VAR_20 = FUNC_1((caddr_t)&VAR_17->fi_writers,&VAR_16->v_lock,
      VAR_8 | VAR_11, "fifoow", ((void*)0));
    if (VAR_20)
     goto bad;
    if (VAR_17->fi_writers == 1) {
     if (VAR_17->fi_readers > 0)
      FUNC_10((caddr_t)&VAR_17->fi_readers);
    }
   }
  }
 }

 FUNC_9(VAR_16);
 return (0);
bad:
 FUNC_0(VAR_16, VAR_15->a_mode, VAR_15->a_context, 1);

 FUNC_9(VAR_16);
 return (VAR_20);
bad1:
 FUNC_8(VAR_16);

 VAR_17->fi_flags &= ~VAR_4;

 if ((VAR_17->fi_flags & VAR_3)) {
  VAR_17->fi_flags &= ~VAR_3;
  FUNC_10(&VAR_17->fi_flags);
 }
 FUNC_9(VAR_16);

 return (VAR_20);
}
