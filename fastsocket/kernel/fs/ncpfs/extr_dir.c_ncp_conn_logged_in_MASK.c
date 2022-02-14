
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {struct dentry* s_root; } ;
struct TYPE_3__ {int mounted_vol; } ;
struct ncp_server {TYPE_1__ m; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __name ;
typedef void* __le32 ;
struct TYPE_4__ {void* DosDirNum; void* dirEntNum; int volNumber; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 struct ncp_server* FUNC_2 (struct super_block*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (struct ncp_server*,int *,int *,void**,void**) ;
 int FUNC_5 (struct ncp_server*,int *,int*,int ,int ,int) ;
 scalar_t__ FUNC_6 (struct ncp_server*) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct super_block *VAR_2)
{
 struct ncp_server* VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 if (FUNC_6(VAR_3)) {
  int VAR_5;
  struct dentry* VAR_6;
  __u32 VAR_7;
  __le32 VAR_8;
  __le32 VAR_9;
  __u8 VAR_10[VAR_1 + 1];

  VAR_5 = sizeof(VAR_10);
  VAR_4 = FUNC_5(VAR_3, VAR_10, &VAR_5, VAR_3->m.mounted_vol,
        FUNC_7(VAR_3->m.mounted_vol), 1);
  if (VAR_4)
   goto out;
  VAR_4 = -VAR_0;
  if (FUNC_4(VAR_3, VAR_10, &VAR_7, &VAR_8, &VAR_9)) {
   FUNC_3("ncp_conn_logged_in: %s not found\n",
    VAR_3->m.mounted_vol);
   goto out;
  }
  VAR_6 = VAR_2->s_root;
  if (VAR_6) {
   struct inode* VAR_11 = VAR_6->d_inode;
   if (VAR_11) {
    FUNC_1(VAR_11)->volNumber = VAR_7;
    FUNC_1(VAR_11)->dirEntNum = VAR_8;
    FUNC_1(VAR_11)->DosDirNum = VAR_9;
   } else {
    FUNC_0("ncpfs: sb->s_root->d_inode == NULL!\n");
   }
  } else {
   FUNC_0("ncpfs: sb->s_root == NULL!\n");
  }
 }
 VAR_4 = 0;

out:
 return VAR_4;
}
