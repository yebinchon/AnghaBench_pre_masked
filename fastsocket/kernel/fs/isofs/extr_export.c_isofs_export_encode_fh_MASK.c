
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iso_inode_info {scalar_t__ i_iget5_offset; int i_iget5_block; } ;
struct inode {int i_generation; int i_mode; } ;
struct dentry {int d_lock; TYPE_1__* d_parent; struct inode* d_inode; } ;
typedef int __u32 ;
typedef scalar_t__ __u16 ;
struct TYPE_2__ {struct inode* d_inode; } ;


 struct iso_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct dentry *VAR_0,
         __u32 *VAR_1,
         int *VAR_2,
         int VAR_3)
{
 struct inode * VAR_4 = VAR_0->d_inode;
 struct iso_inode_info * VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = *VAR_2;
 int VAR_7 = 1;
 __u16 *VAR_8 = (__u16*)VAR_1;
 if (VAR_6 < 3 || (VAR_3 && VAR_6 < 5))
  return 255;

 VAR_6 = 3;
 VAR_1[0] = VAR_5->i_iget5_block;
  VAR_8[2] = (__u16)VAR_5->i_iget5_offset;
 VAR_1[2] = VAR_4->i_generation;
 if (VAR_3 && !FUNC_1(VAR_4->i_mode)) {
  struct inode *VAR_9;
  struct iso_inode_info *VAR_10;
  FUNC_2(&VAR_0->d_lock);
  VAR_9 = VAR_0->d_parent->d_inode;
  VAR_10 = FUNC_0(VAR_9);
  VAR_1[3] = VAR_10->i_iget5_block;
  VAR_8[3] = (__u16)VAR_10->i_iget5_offset;
  VAR_1[4] = VAR_9->i_generation;
  FUNC_3(&VAR_0->d_lock);
  VAR_6 = 5;
  VAR_7 = 2;
 }
 *VAR_2 = VAR_6;
 return VAR_7;
}
