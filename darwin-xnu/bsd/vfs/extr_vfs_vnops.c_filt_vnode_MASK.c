
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vnode* vnode_t ;
struct vnode {int dummy; } ;
struct knote {scalar_t__ kn_hook; } ;


 int FUNC_0 (struct knote*,struct vnode*,long) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_0, long VAR_1)
{
 vnode_t VAR_2 = (struct vnode *)VAR_0->kn_hook;

 return FUNC_0(VAR_0, VAR_2, VAR_1);
}
