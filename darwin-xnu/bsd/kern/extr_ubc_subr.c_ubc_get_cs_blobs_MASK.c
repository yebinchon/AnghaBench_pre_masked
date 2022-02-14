
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct ubc_info* v_ubcinfo; } ;
struct ubc_info {struct cs_blob* cs_blobs; } ;
struct cs_blob {int dummy; } ;


 int FUNC_0 (struct vnode*) ;

struct cs_blob *
FUNC_1(
 struct vnode *VAR_0)
{
 struct ubc_info *VAR_1;
 struct cs_blob *VAR_2;
 if (! FUNC_0(VAR_0)) {
  VAR_2 = ((void*)0);
  goto out;
 }

 VAR_1 = VAR_0->v_ubcinfo;
 VAR_2 = VAR_1->cs_blobs;

out:
 return VAR_2;
}
