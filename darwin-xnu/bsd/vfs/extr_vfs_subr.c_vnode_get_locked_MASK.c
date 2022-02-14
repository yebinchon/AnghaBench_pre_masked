
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_iocount; int v_lflag; int v_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct vnode*,int) ;

int
FUNC_2(struct vnode *VAR_4)
{



 if ((VAR_4->v_iocount == 0) && (VAR_4->v_lflag & (VAR_3 | VAR_2))) {
  return(VAR_0);
 }
 VAR_4->v_iocount++;



 return (0);
}
