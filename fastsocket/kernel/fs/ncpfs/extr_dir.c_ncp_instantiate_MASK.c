
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ncp_entry_info {int file_handle; int ino; } ;
struct inode {int i_sb; } ;
struct TYPE_6__ {int name; } ;
struct dentry {TYPE_3__ d_name; TYPE_2__* d_parent; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 struct inode* FUNC_5 (int ,struct ncp_entry_info*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, struct dentry *VAR_2,
   struct ncp_entry_info *VAR_3)
{
 struct inode *VAR_4;
 int VAR_5 = -VAR_0;

 VAR_3->ino = FUNC_3(VAR_1->i_sb, 2);
 VAR_4 = FUNC_5(VAR_1->i_sb, VAR_3);
 if (!VAR_4)
  goto out_close;
 FUNC_2(VAR_2,VAR_4);
 VAR_5 = 0;
out:
 return VAR_5;

out_close:
 FUNC_1("ncp_instantiate: %s/%s failed, closing file\n",
  VAR_2->d_parent->d_name.name, VAR_2->d_name.name);
 FUNC_4(FUNC_0(VAR_1), VAR_3->file_handle);
 goto out;
}
