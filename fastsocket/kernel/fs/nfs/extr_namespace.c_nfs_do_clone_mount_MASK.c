
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct nfs_server {TYPE_2__* nfs_client; } ;
struct nfs_clone_mount {int dummy; } ;
struct TYPE_4__ {TYPE_1__* rpc_ops; } ;
struct TYPE_3__ {int version; } ;


 int VAR_0 ;
 struct vfsmount* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct vfsmount* FUNC_1 (int *,int ,char const*,struct nfs_clone_mount*) ;

__attribute__((used)) static struct vfsmount *FUNC_2(struct nfs_server *VAR_3,
        const char *VAR_4,
        struct nfs_clone_mount *VAR_5)
{
 return FUNC_1(&VAR_2, 0, VAR_4, VAR_5);

}
