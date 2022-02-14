
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct vnode* vnode_t ;
struct vnode {struct ubc_info* v_ubcinfo; } ;
struct ubc_info {TYPE_1__* cs_blobs; } ;
struct fileglob {scalar_t__ fg_data; } ;
struct TYPE_2__ {int csb_platform_binary; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fileglob*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;

int
FUNC_4(struct fileglob *VAR_1)
{
 int VAR_2 = 0;
 struct ubc_info *VAR_3;
 vnode_t VAR_4;

 if (FUNC_0(VAR_1) != VAR_0)
  return 0;

 VAR_4 = (struct vnode *)VAR_1->fg_data;
 if (VAR_4 == ((void*)0))
  return 0;

 FUNC_2(VAR_4);
 if (!FUNC_1(VAR_4))
  goto out;

 VAR_3 = VAR_4->v_ubcinfo;
 if (VAR_3 == ((void*)0))
  goto out;

 if (VAR_3->cs_blobs == ((void*)0))
  goto out;



 VAR_2 = VAR_3->cs_blobs->csb_platform_binary;
out:
 FUNC_3(VAR_4);

 return VAR_2;
}
