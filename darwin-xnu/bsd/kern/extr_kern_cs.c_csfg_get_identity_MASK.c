
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vnode* vnode_t ;
struct vnode {int dummy; } ;
struct fileglob {scalar_t__ fg_data; } ;
struct cs_blob {int dummy; } ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fileglob*) ;
 char const* FUNC_1 (struct cs_blob*) ;
 struct cs_blob* FUNC_2 (struct vnode*,int,int ) ;

const char *
FUNC_3(struct fileglob *VAR_1, off_t VAR_2)
{
 vnode_t VAR_3;
 struct cs_blob *VAR_4 = ((void*)0);

 if (FUNC_0(VAR_1) != VAR_0)
  return ((void*)0);

 VAR_3 = (struct vnode *)VAR_1->fg_data;
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_3, -1, VAR_2);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 return FUNC_1(VAR_4);
}
