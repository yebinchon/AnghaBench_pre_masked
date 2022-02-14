
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct TYPE_3__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_4__ {int options; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct inode*,unsigned char*,struct dentry*,struct inode*,unsigned char*,struct dentry*,int) ;
 int FUNC_2 (struct super_block*,struct inode*,struct inode*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (char*,int ,unsigned char*,int *) ;
 int FUNC_5 (struct super_block*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, struct dentry *VAR_2,
   struct inode *VAR_3, struct dentry *VAR_4)
{
 struct super_block *VAR_5 = VAR_1->i_sb;
 unsigned char VAR_6[VAR_0], VAR_7[VAR_0];
 int VAR_8, VAR_9;

 FUNC_3(VAR_5);

 VAR_8 = FUNC_4(VAR_2->d_name.name,
    VAR_2->d_name.len, VAR_6,
    &FUNC_0(VAR_1->i_sb)->options);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_4(VAR_4->d_name.name,
    VAR_4->d_name.len, VAR_7,
    &FUNC_0(VAR_3->i_sb)->options);
 if (VAR_8)
  goto out;

 VAR_9 =
      (VAR_4->d_name.name[0] == '.') && (VAR_7[0] != '.');

 VAR_8 = FUNC_1(VAR_1, VAR_6, VAR_2,
         VAR_3, VAR_7, VAR_4, VAR_9);
out:
 FUNC_5(VAR_5);
 if (!VAR_8)
  VAR_8 = FUNC_2(VAR_5, VAR_1, VAR_3);
 return VAR_8;
}
