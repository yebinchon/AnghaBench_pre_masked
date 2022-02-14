
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
typedef int auxdata ;
struct TYPE_7__ {TYPE_2__* nfs_client; } ;
struct TYPE_6__ {TYPE_1__* rpc_ops; } ;
struct TYPE_5__ {int version; } ;


 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (void*,struct nfs_fscache_inode_auxdata*,int) ;
 int FUNC_2 (struct nfs_fscache_inode_auxdata*,int ,int) ;

__attribute__((used)) static uint16_t FUNC_3(const void *VAR_0,
       void *VAR_1, uint16_t VAR_2)
{
 struct nfs_fscache_inode_auxdata VAR_3;
 const struct nfs_inode *VAR_4 = VAR_0;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.size = VAR_4->vfs_inode.i_size;
 VAR_3.mtime = VAR_4->vfs_inode.i_mtime;
 VAR_3.ctime = VAR_4->vfs_inode.i_ctime;

 if (FUNC_0(&VAR_4->vfs_inode)->nfs_client->rpc_ops->version == 4)
  VAR_3.change_attr = VAR_4->change_attr;

 if (VAR_2 > sizeof(VAR_3))
  VAR_2 = sizeof(VAR_3);

 FUNC_1(VAR_1, &VAR_3, VAR_2);
 return VAR_2;
}
