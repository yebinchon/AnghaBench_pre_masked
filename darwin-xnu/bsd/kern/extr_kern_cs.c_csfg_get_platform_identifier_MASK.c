
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vnode* vnode_t ;
typedef int uint8_t ;
struct vnode {int dummy; } ;
struct fileglob {scalar_t__ fg_data; } ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fileglob*) ;
 int FUNC_1 (struct vnode*,int ) ;

uint8_t
FUNC_2(struct fileglob *VAR_1, off_t VAR_2)
{
 vnode_t VAR_3;

 if (FUNC_0(VAR_1) != VAR_0)
  return 0;

 VAR_3 = (struct vnode *)VAR_1->fg_data;
 if (VAR_3 == ((void*)0))
  return 0;

 return FUNC_1(VAR_3, VAR_2);
}
