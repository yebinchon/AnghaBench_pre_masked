
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
struct vnode {int dummy; } ;
struct TYPE_6__ {struct vnode** tqe_prev; } ;
struct TYPE_7__ {int v_lflag; TYPE_1__ v_freelist; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

int
FUNC_3(vnode_t VAR_1)
{
 FUNC_1(VAR_1);
 if (VAR_1->v_lflag & VAR_0)
  FUNC_0("add_fsref: vp already has named reference");
 if ((VAR_1->v_freelist.tqe_prev != (struct vnode **)0xdeadb))
         FUNC_0("addfsref: vp on the free list\n");
 VAR_1->v_lflag |= VAR_0;
 FUNC_2(VAR_1);
 return(0);

}
