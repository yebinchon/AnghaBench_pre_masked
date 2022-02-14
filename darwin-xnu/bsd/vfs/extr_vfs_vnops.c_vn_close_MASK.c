
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {int v_flag; scalar_t__ v_parent; scalar_t__ v_tag; int v_writecount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vnode*,int,int ) ;
 int FUNC_1 (struct vnode*,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,int ,int ,struct vnode*,int ) ;
 scalar_t__ FUNC_3 (int ,struct vnode*) ;
 int FUNC_4 (scalar_t__,struct vnode*,int ) ;
 scalar_t__ FUNC_5 (struct vnode*) ;
 scalar_t__ FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*,int,int ) ;

int
FUNC_8(struct vnode *VAR_9, int VAR_10, vfs_context_t VAR_11)
{
 int VAR_12;
 int VAR_13 = 0;
 if (FUNC_6(VAR_9))
  (void)FUNC_7(VAR_9, VAR_10, 0);
 if (VAR_9->v_tag == VAR_8 && (VAR_10 & VAR_4) && VAR_9->v_writecount == 1)
  FUNC_1(VAR_9, VAR_5, VAR_11);

 VAR_12 = FUNC_0(VAR_9, VAR_10, VAR_11);
 if (!FUNC_6(VAR_9))
  (void)FUNC_7(VAR_9, VAR_10, 0);

 if (VAR_13) {
  VAR_12 = VAR_13;
 }
 return (VAR_12);
}
