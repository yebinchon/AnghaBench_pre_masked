
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int mnt_sb; } ;
struct seq_file {int dummy; } ;
struct nfs_server {TYPE_1__* nfs_client; } ;
struct TYPE_2__ {int cl_rpcclient; } ;


 struct nfs_server* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct seq_file*,struct nfs_server*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, struct vfsmount *VAR_2)
{
 struct nfs_server *VAR_3 = FUNC_0(VAR_2->mnt_sb);

 FUNC_1(VAR_1, VAR_3, 0);

 FUNC_3(VAR_1, ",addr=%s",
   FUNC_2(VAR_3->nfs_client->cl_rpcclient,
       VAR_0));

 return 0;
}
