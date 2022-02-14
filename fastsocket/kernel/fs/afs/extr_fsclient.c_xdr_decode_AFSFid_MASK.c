
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_fid {void* unique; void* vnode; void* vid; } ;
typedef int __be32 ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const __be32 **VAR_0, struct afs_fid *VAR_1)
{
 const __be32 *VAR_2 = *VAR_0;

 VAR_1->vid = FUNC_0(*VAR_2++);
 VAR_1->vnode = FUNC_0(*VAR_2++);
 VAR_1->unique = FUNC_0(*VAR_2++);
 *VAR_0 = VAR_2;
}
