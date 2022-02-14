
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct nfs_sync_cargs {int waitfor; int error; int ctx; } ;
typedef int mount_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct nfs_sync_cargs*) ;

int
FUNC_1(mount_t VAR_1, int VAR_2, vfs_context_t VAR_3)
{
 struct nfs_sync_cargs VAR_4;

 VAR_4.waitfor = VAR_2;
 VAR_4.ctx = VAR_3;
 VAR_4.error = 0;

 FUNC_0(VAR_1, 0, VAR_0, &VAR_4);

 return (VAR_4.error);
}
