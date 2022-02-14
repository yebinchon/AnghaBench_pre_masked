
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct vnode* vnode_t ;
struct vnode {struct ubc_info* v_ubcinfo; } ;
struct ubc_info {TYPE_1__* cs_blobs; } ;
struct fileglob {scalar_t__ fg_data; } ;
struct TYPE_2__ {unsigned int csb_signer_type; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct fileglob*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;

unsigned int
FUNC_4(struct fileglob *VAR_2)
{
 struct ubc_info *VAR_3;
 unsigned int VAR_4 = VAR_0;
 vnode_t VAR_5;

 if (FUNC_0(VAR_2) != VAR_1)
  return VAR_0;

 VAR_5 = (struct vnode *)VAR_2->fg_data;
 if (VAR_5 == ((void*)0))
  return VAR_0;

 FUNC_2(VAR_5);
 if (!FUNC_1(VAR_5))
  goto out;

 VAR_3 = VAR_5->v_ubcinfo;
 if (VAR_3 == ((void*)0))
  goto out;

 if (VAR_3->cs_blobs == ((void*)0))
  goto out;



 VAR_4 = VAR_3->cs_blobs->csb_signer_type;
out:
 FUNC_3(VAR_5);

 return VAR_4;
}
