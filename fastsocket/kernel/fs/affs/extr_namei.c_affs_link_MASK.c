
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode {scalar_t__ i_ino; } ;
struct TYPE_2__ {int name; scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct inode*,struct dentry*,int ) ;
 int FUNC_1 (char*,int ,int ,int,int ) ;

int
FUNC_2(struct dentry *VAR_1, struct inode *VAR_2, struct dentry *VAR_3)
{
 struct inode *VAR_4 = VAR_1->d_inode;

 FUNC_1("AFFS: link(%u, %u, \"%.*s\")\n", (u32)VAR_4->i_ino, (u32)VAR_2->i_ino,
   (int)VAR_3->d_name.len,VAR_3->d_name.name);

 return FUNC_0(VAR_2, VAR_4, VAR_3, VAR_0);
}
