
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct inode {scalar_t__ i_ino; } ;
struct TYPE_4__ {int name; scalar_t__ len; } ;
struct dentry {TYPE_2__ d_name; TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_ino; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,int ,int ,int,int ) ;

int
FUNC_2(struct inode *VAR_0, struct dentry *VAR_1)
{
 FUNC_1("AFFS: rmdir(dir=%u, %lu \"%.*s\")\n", (u32)VAR_0->i_ino,
   VAR_1->d_inode->i_ino,
   (int)VAR_1->d_name.len, VAR_1->d_name.name);

 return FUNC_0(VAR_1);
}
