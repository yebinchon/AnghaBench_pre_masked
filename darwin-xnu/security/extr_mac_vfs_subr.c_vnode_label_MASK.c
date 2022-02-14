
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {int v_lflag; int v_flag; int v_lock; int * v_label; } ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct mount {int dummy; } ;
struct componentname {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_0 () ;
 int FUNC_1 (struct mount*,struct vnode*,int ) ;
 int FUNC_2 (int ,struct mount*,struct vnode*,struct vnode*,struct componentname*) ;
 int FUNC_3 (int **,int *,int,char*,struct timespec*) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (char*,struct vnode*) ;
 int FUNC_7 (int **) ;

int
FUNC_8(struct mount *VAR_9, struct vnode *VAR_10, struct vnode *VAR_11,
     struct componentname *VAR_12, int VAR_13, vfs_context_t VAR_14)
{
 int VAR_15 = 0;





 if (VAR_8 == 0) {
  if (VAR_13 & VAR_7)
   VAR_15 = FUNC_2(VAR_14,
       VAR_9, VAR_10, VAR_11, VAR_12);
  return 0;
 }


 if (VAR_11->v_lflag & VAR_4)
  return (0);

 FUNC_4(VAR_11);






 if (VAR_11->v_lflag & VAR_4) {
  FUNC_5(VAR_11);
  return (0);
 }

 if ((VAR_11->v_lflag & VAR_3) == 0) {
  VAR_11->v_lflag |= VAR_3;


  FUNC_5(VAR_11);

  if (VAR_11->v_label == ((void*)0))
   VAR_11->v_label = FUNC_0();

  if (VAR_13 & VAR_7)
   VAR_15 = FUNC_2(VAR_14,
       VAR_9, VAR_10, VAR_11, VAR_12);
  else
   VAR_15 = FUNC_1(VAR_9, VAR_11, VAR_14);

  FUNC_4(VAR_11);

  if ((VAR_15 == 0) && (VAR_11->v_flag & VAR_6))
   VAR_11->v_lflag |= VAR_4;
  VAR_11->v_lflag &= ~VAR_3;

  if (VAR_11->v_lflag & VAR_5) {
   VAR_11->v_lflag &= ~VAR_5;
   FUNC_7(&VAR_11->v_label);
  }
 } else {
  struct timespec VAR_16;

  VAR_16.tv_sec = 10;
  VAR_16.tv_nsec = 0;

  while (VAR_11->v_lflag & VAR_3) {
   VAR_11->v_lflag |= VAR_5;

   VAR_15 = FUNC_3(&VAR_11->v_label, &VAR_11->v_lock, VAR_2|VAR_1,
           "vnode_label", &VAR_16);
   FUNC_4(VAR_11);

   if (VAR_15 == VAR_0) {
    FUNC_6("vnode label timeout", VAR_11);
    break;
   }
  }

 }
 FUNC_5(VAR_11);

 return (VAR_15);
}
