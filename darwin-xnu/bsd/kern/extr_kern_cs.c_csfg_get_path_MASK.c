
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vnode* vnode_t ;
struct vnode {int dummy; } ;
struct fileglob {scalar_t__ fg_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fileglob*) ;
 int FUNC_1 (struct vnode*,char*,int*) ;

int
FUNC_2(struct fileglob *VAR_1, char *VAR_2, int *VAR_3)
{
 vnode_t VAR_4 = ((void*)0);

 if (FUNC_0(VAR_1) != VAR_0)
  return -1;

 VAR_4 = (struct vnode *)VAR_1->fg_data;



 return FUNC_1(VAR_4, VAR_2, VAR_3);
}
