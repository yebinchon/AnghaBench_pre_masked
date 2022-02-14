
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {void* acl_default; void* acl_access; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct nfs_inode *VAR_1)
{
 if (!FUNC_1(VAR_1->acl_access)) {
  FUNC_2(VAR_1->acl_access);
  VAR_1->acl_access = FUNC_0(-VAR_0);
 }
 if (!FUNC_1(VAR_1->acl_default)) {
  FUNC_2(VAR_1->acl_default);
  VAR_1->acl_default = FUNC_0(-VAR_0);
 }
}
