
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs_page {int wb_bytes; TYPE_3__* wb_context; int wb_page; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct TYPE_5__ {struct inode* d_inode; } ;
struct TYPE_4__ {int s_id; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,long long,int ,long long) ;
 int FUNC_3 (struct inode*,int ,int ) ;
 int FUNC_4 (struct nfs_page*) ;
 scalar_t__ FUNC_5 (struct nfs_page*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct nfs_page *VAR_0)
{
 struct inode *VAR_1 = VAR_0->wb_context->dentry->d_inode;

 if (FUNC_1(VAR_0->wb_page))
  FUNC_3(VAR_1, VAR_0->wb_page, 0);

 FUNC_6(VAR_0->wb_page);

 FUNC_2("NFS: read done (%s/%Ld %d@%Ld)\n",
   VAR_0->wb_context->dentry->d_inode->i_sb->s_id,
   (long long)FUNC_0(VAR_0->wb_context->dentry->d_inode),
   VAR_0->wb_bytes,
   (long long)FUNC_5(VAR_0));
 FUNC_4(VAR_0);
}
