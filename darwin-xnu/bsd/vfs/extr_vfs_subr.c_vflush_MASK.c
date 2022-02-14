
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {unsigned int v_id; int v_flag; scalar_t__ v_writecount; scalar_t__ v_type; scalar_t__ v_usecount; scalar_t__ v_kusecount; int v_op; int v_lflag; int v_iocount; int v_lock; struct mount* v_mount; } ;
struct mount {int mnt_kern_flag; int mnt_vnodelist; int mnt_workerqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 struct vnode* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct vnode*,int ) ;
 int FUNC_4 (int *,struct vnode*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct mount*) ;
 int FUNC_7 (struct mount*) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (int *,int *,int ,char*,int *) ;
 int FUNC_10 (struct vnode*,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_11 (struct vnode*,int ) ;
 int FUNC_12 (struct vnode*) ;
 int FUNC_13 (struct vnode*) ;
 int FUNC_14 (struct mount*) ;
 int FUNC_15 (struct mount*) ;
 scalar_t__ FUNC_16 (struct mount*) ;
 int FUNC_17 (struct mount*) ;
 int FUNC_18 (struct vnode*) ;
 int FUNC_19 (struct vnode*) ;
 int FUNC_20 (struct vnode*) ;
 int FUNC_21 (struct vnode*,int,int,int ) ;
 scalar_t__ FUNC_22 (struct mount*,struct vnode*,int) ;
 int FUNC_23 (struct vnode*) ;
 int FUNC_24 (char*,struct vnode*) ;

int
FUNC_25(struct mount *VAR_22, struct vnode *VAR_23, int VAR_24)
{
 struct vnode *VAR_25;
 int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28;
 unsigned int VAR_29;




 FUNC_5(VAR_22);

 FUNC_7(VAR_22);
 FUNC_17(VAR_22);







 if (((VAR_24 & VAR_1)==0) && ((VAR_22->mnt_kern_flag & VAR_2) != 0)) {
  if (FUNC_22(VAR_22, VAR_23, VAR_24)) {
   FUNC_14(VAR_22);
   FUNC_8(VAR_22);
   FUNC_6(VAR_22);
   return(VAR_0);
  }
 }
loop:

 VAR_28 = FUNC_15(VAR_22);

 if (VAR_28 == 0) {
  FUNC_14(VAR_22);
  FUNC_8(VAR_22);
  FUNC_6(VAR_22);
  return(VAR_28);
 }


 while (!FUNC_1(&VAR_22->mnt_workerqueue)) {

  VAR_25 = FUNC_2(&VAR_22->mnt_workerqueue);
  FUNC_4(&VAR_22->mnt_workerqueue, VAR_25, VAR_21);
  FUNC_3(&VAR_22->mnt_vnodelist, VAR_25, VAR_21);

  if ( (VAR_25->v_mount != VAR_22) || (VAR_25 == VAR_23)) {
   continue;
  }
  VAR_29 = VAR_25->v_id;
  FUNC_8(VAR_22);

  FUNC_20(VAR_25);


  while (VAR_25->v_id == VAR_29 && FUNC_0(VAR_25->v_lflag, VAR_11)) {
   VAR_25->v_lflag |= VAR_12;
   FUNC_9(&VAR_25->v_lflag, &VAR_25->v_lock, VAR_3, "vflush", ((void*)0));
  }

  if ((VAR_25->v_id != VAR_29) || FUNC_0(VAR_25->v_lflag, VAR_10)) {
    FUNC_23(VAR_25);
    FUNC_7(VAR_22);
    continue;
  }





  if ((VAR_24 & VAR_6) && ((VAR_25->v_flag & VAR_17) ||
      (VAR_25->v_flag & VAR_13))) {
   FUNC_23(VAR_25);
   FUNC_7(VAR_22);
   continue;
  }



  if ((VAR_24 & VAR_5) && (VAR_25->v_flag & VAR_16)) {
   FUNC_23(VAR_25);
   FUNC_7(VAR_22);
   continue;
  }



  if ((VAR_24 & VAR_4) && (VAR_25->v_flag & VAR_15)) {
   FUNC_23(VAR_25);
   FUNC_7(VAR_22);
   continue;
  }




  if ((VAR_24 & VAR_18) &&
      (VAR_25->v_writecount == 0 || VAR_25->v_type != VAR_14)) {
   FUNC_23(VAR_25);
   FUNC_7(VAR_22);
   continue;
  }




  if (((VAR_25->v_usecount == 0) ||
      ((VAR_25->v_usecount - VAR_25->v_kusecount) == 0))) {

   FUNC_19(VAR_25);
          VAR_25->v_iocount++;



   FUNC_21(VAR_25, 1, 1, 0);
   FUNC_13(VAR_25);
   FUNC_18(VAR_25);
   FUNC_23(VAR_25);

   VAR_27++;
   FUNC_7(VAR_22);
   continue;
  }





  if (VAR_24 & VAR_1) {
   FUNC_19(VAR_25);

   if (VAR_25->v_type != VAR_7 && VAR_25->v_type != VAR_8) {
    VAR_25->v_iocount++;



    FUNC_12(VAR_25);
    FUNC_21(VAR_25, 1, 1, 0);
    FUNC_13(VAR_25);
    FUNC_18(VAR_25);
    FUNC_23(VAR_25);
   } else {
    FUNC_11(VAR_25, 0);
    VAR_25->v_lflag &= ~VAR_10;
    VAR_25->v_op = VAR_20;
    VAR_25->v_flag |= VAR_9;
    FUNC_23(VAR_25);
   }
   FUNC_7(VAR_22);
   continue;
  }




  FUNC_23(VAR_25);
  FUNC_7(VAR_22);
  VAR_26++;
 }


 if (VAR_26 && ((VAR_24 & VAR_1)==0) && VAR_27) {
  VAR_26 = 0;
  VAR_27 = 0;
  (void)FUNC_16(VAR_22);

  goto loop;
 }


  if ( FUNC_16(VAR_22) != 0) {
  if (!(VAR_26 && ((VAR_24 & VAR_1)==0)))
   goto loop;
 }
 FUNC_14(VAR_22);
 FUNC_8(VAR_22);
 FUNC_6(VAR_22);

 if (VAR_26 && ((VAR_24 & VAR_1)==0))
  return (VAR_0);
 return (0);
}
