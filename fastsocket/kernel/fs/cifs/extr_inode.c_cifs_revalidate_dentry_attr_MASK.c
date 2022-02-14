
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_3__ {int counter; } ;
struct inode {TYPE_1__ i_count; } ;
struct dentry {int d_time; struct super_block* d_sb; struct inode* d_inode; } ;
struct TYPE_4__ {scalar_t__ unix_ext; } ;


 int FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 char* FUNC_3 (struct dentry*) ;
 int FUNC_4 (int,char*,char*,struct inode*,int ,struct dentry*,int ,int ) ;
 int FUNC_5 (struct inode**,char*,int *,struct super_block*,int,int *) ;
 int FUNC_6 (struct inode**,char*,struct super_block*,int) ;
 int FUNC_7 (struct inode*) ;
 TYPE_2__* FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (char*) ;

int FUNC_10(struct dentry *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 struct inode *VAR_6 = VAR_3->d_inode;
 struct super_block *VAR_7 = VAR_3->d_sb;
 char *VAR_8 = ((void*)0);

 if (VAR_6 == ((void*)0))
  return -VAR_0;

 if (!FUNC_7(VAR_6))
  return VAR_5;

 VAR_4 = FUNC_2();



 VAR_8 = FUNC_3(VAR_3);
 if (VAR_8 == ((void*)0)) {
  VAR_5 = -VAR_1;
  goto out;
 }

 FUNC_4(1, "Update attributes: %s inode 0x%p count %d dentry: 0x%p d_time "
   "%ld jiffies %ld", VAR_8, VAR_6, VAR_6->i_count.counter,
   VAR_3, VAR_3->d_time, VAR_2);

 if (FUNC_8(FUNC_0(VAR_7))->unix_ext)
  VAR_5 = FUNC_6(&VAR_6, VAR_8, VAR_7, VAR_4);
 else
  VAR_5 = FUNC_5(&VAR_6, VAR_8, ((void*)0), VAR_7,
      VAR_4, ((void*)0));

out:
 FUNC_9(VAR_8);
 FUNC_1(VAR_4);
 return VAR_5;
}
