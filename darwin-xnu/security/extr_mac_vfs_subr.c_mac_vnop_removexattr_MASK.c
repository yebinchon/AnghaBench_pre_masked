
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {int v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,struct vnode*,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct vnode*,char const*,int,int ) ;

int
FUNC_4 (struct vnode *VAR_5, const char *VAR_6)
{
 vfs_context_t VAR_7 = FUNC_1();
 int VAR_8 = VAR_4;
 int VAR_9;

 if (FUNC_2(VAR_5->v_mount))
  return (VAR_0);

 VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_8, VAR_7);
 return (VAR_9);
}
