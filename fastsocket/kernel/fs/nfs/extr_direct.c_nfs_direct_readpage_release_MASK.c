
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_page {int wb_bytes; TYPE_3__* wb_context; } ;
struct TYPE_8__ {TYPE_1__* i_sb; } ;
struct TYPE_7__ {TYPE_2__* dentry; } ;
struct TYPE_6__ {TYPE_4__* d_inode; } ;
struct TYPE_5__ {int s_id; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char*,int ,long long,int ,long long) ;
 int FUNC_2 (struct nfs_page*) ;
 scalar_t__ FUNC_3 (struct nfs_page*) ;

__attribute__((used)) static void FUNC_4(struct nfs_page *VAR_0)
{
 FUNC_1("NFS: direct read done (%s/%lld %d@%lld)\n",
  VAR_0->wb_context->dentry->d_inode->i_sb->s_id,
  (long long)FUNC_0(VAR_0->wb_context->dentry->d_inode),
  VAR_0->wb_bytes,
  (long long)FUNC_3(VAR_0));
 FUNC_2(VAR_0);
}
