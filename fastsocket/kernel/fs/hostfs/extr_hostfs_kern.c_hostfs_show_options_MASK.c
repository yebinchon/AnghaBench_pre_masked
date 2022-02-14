
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {TYPE_2__* mnt_sb; } ;
struct seq_file {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {char* host_filename; } ;
struct TYPE_5__ {TYPE_1__* s_root; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 char const* VAR_0 ;
 int FUNC_1 (struct seq_file*,char*,char const*) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, struct vfsmount *VAR_2)
{
 struct inode *VAR_3 = VAR_2->mnt_sb->s_root->d_inode;
 const char *VAR_4 = FUNC_0(VAR_3)->host_filename;
 size_t VAR_5 = FUNC_2(VAR_0) + 1;

 if (FUNC_2(VAR_4) > VAR_5)
  FUNC_1(VAR_1, ",%s", VAR_4 + VAR_5);

 return 0;
}
