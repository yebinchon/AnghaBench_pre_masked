
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vnode* vnode_t ;
typedef int uint8_t ;
typedef int uint64_t ;
struct vnode {int dummy; } ;
struct fileglob {scalar_t__ fg_data; } ;
struct cs_blob {int * csb_cdhash; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct fileglob*) ;
 struct cs_blob* FUNC_1 (struct vnode*,int,int ) ;

uint8_t *
FUNC_2(struct fileglob *VAR_2, uint64_t VAR_3, size_t *VAR_4)
{
 vnode_t VAR_5;

 if (FUNC_0(VAR_2) != VAR_1)
  return ((void*)0);

 VAR_5 = (struct vnode *)VAR_2->fg_data;
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 struct cs_blob *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_1(VAR_5, -1, VAR_3)) == ((void*)0))
  return ((void*)0);

 if (VAR_4)
  *VAR_4 = VAR_0;

 return VAR_6->csb_cdhash;
}
