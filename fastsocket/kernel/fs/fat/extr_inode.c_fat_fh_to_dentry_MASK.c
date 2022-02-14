
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct super_block {TYPE_1__* s_root; } ;
struct inode {int i_generation; } ;
struct fid {int* raw; } ;
struct dentry {int d_op; } ;
typedef int loff_t ;
struct TYPE_4__ {int i_logstart; } ;
struct TYPE_3__ {int d_op; } ;


 int FUNC_0 (struct dentry*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,int) ;
 struct inode* FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_6(struct super_block *VAR_0,
  struct fid *VAR_1, int VAR_2, int VAR_3)
{
 struct inode *VAR_4 = ((void*)0);
 struct dentry *VAR_5;
 u32 *VAR_6 = VAR_1->raw;

 if (VAR_2 < 5 || VAR_3 != 3)
  return ((void*)0);

 VAR_4 = FUNC_4(VAR_0, VAR_6[0]);
 if (!VAR_4 || VAR_4->i_generation != VAR_6[1]) {
  if (VAR_4)
   FUNC_5(VAR_4);
  VAR_4 = ((void*)0);
 }
 if (!VAR_4) {
  loff_t VAR_7;
  int VAR_8 = VAR_6[3] & 0x0fffffff;

  VAR_7 = (loff_t)VAR_6[2] << 8;
  VAR_7 |= ((VAR_6[3] >> 24) & 0xf0) | (VAR_6[4] >> 28);






  VAR_4 = FUNC_3(VAR_0, VAR_7);
  if (VAR_4 && FUNC_1(VAR_4)->i_logstart != VAR_8) {
   FUNC_5(VAR_4);
   VAR_4 = ((void*)0);
  }
 }
 VAR_5 = FUNC_2(VAR_4);
 if (!FUNC_0(VAR_5))
  VAR_5->d_op = VAR_0->s_root->d_op;
 return VAR_5;
}
