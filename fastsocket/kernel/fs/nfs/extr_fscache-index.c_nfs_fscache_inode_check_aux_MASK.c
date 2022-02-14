
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int i_ctime; int i_mtime; int i_size; } ;
struct nfs_inode {int change_attr; TYPE_4__ vfs_inode; } ;
struct nfs_fscache_inode_auxdata {int change_attr; int ctime; int mtime; int size; } ;
typedef enum fscache_checkaux { ____Placeholder_fscache_checkaux } fscache_checkaux ;
typedef int auxdata ;
struct TYPE_7__ {TYPE_2__* nfs_client; } ;
struct TYPE_6__ {TYPE_1__* rpc_ops; } ;
struct TYPE_5__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (void const*,struct nfs_fscache_inode_auxdata*,int) ;
 int FUNC_2 (struct nfs_fscache_inode_auxdata*,int ,int) ;

__attribute__((used)) static
enum fscache_checkaux FUNC_3(void *VAR_2,
        const void *VAR_3,
        uint16_t VAR_4)
{
 struct nfs_fscache_inode_auxdata VAR_5;
 struct nfs_inode *VAR_6 = VAR_2;

 if (VAR_4 != sizeof(VAR_5))
  return VAR_0;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.size = VAR_6->vfs_inode.i_size;
 VAR_5.mtime = VAR_6->vfs_inode.i_mtime;
 VAR_5.ctime = VAR_6->vfs_inode.i_ctime;

 if (FUNC_0(&VAR_6->vfs_inode)->nfs_client->rpc_ops->version == 4)
  VAR_5.change_attr = VAR_6->change_attr;

 if (FUNC_1(VAR_3, &VAR_5, VAR_4) != 0)
  return VAR_0;

 return VAR_1;
}
