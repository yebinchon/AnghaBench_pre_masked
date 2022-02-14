
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {TYPE_1__* v_fifoinfo; } ;
struct socket {int so_rcv; } ;
struct TYPE_2__ {struct socket* fi_readsock; } ;


 long FUNC_0 (int *) ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket*,int) ;

int
FUNC_3(struct vnode *VAR_0, long *VAR_1)
{
 struct socket *VAR_2;
 VAR_2 = VAR_0->v_fifoinfo->fi_readsock;
 FUNC_1(VAR_2, 1);
 *VAR_1 = FUNC_0(&VAR_2->so_rcv);
 FUNC_2(VAR_2, 1);
 return 0;
}
