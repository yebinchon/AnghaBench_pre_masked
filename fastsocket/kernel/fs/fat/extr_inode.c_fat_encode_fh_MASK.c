
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_ino; int i_generation; } ;
struct dentry {int d_lock; TYPE_1__* d_parent; struct inode* d_inode; } ;
typedef int __u32 ;
struct TYPE_4__ {int i_pos; int i_logstart; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct dentry *VAR_0, __u32 *VAR_1, int *VAR_2, int VAR_3)
{
 int VAR_4 = *VAR_2;
 struct inode *VAR_5 = VAR_0->d_inode;
 u32 VAR_6, VAR_7, VAR_8;

 if (VAR_4 < 5)
  return 255;

 VAR_6 = FUNC_0(VAR_5)->i_pos >> 8;
 VAR_7 = (FUNC_0(VAR_5)->i_pos & 0xf0) << 24;
 VAR_8 = (FUNC_0(VAR_5)->i_pos & 0x0f) << 28;
 *VAR_2 = 5;
 VAR_1[0] = VAR_5->i_ino;
 VAR_1[1] = VAR_5->i_generation;
 VAR_1[2] = VAR_6;
 VAR_1[3] = VAR_7 | FUNC_0(VAR_5)->i_logstart;
 FUNC_1(&VAR_0->d_lock);
 VAR_1[4] = VAR_8 | FUNC_0(VAR_0->d_parent->d_inode)->i_logstart;
 FUNC_2(&VAR_0->d_lock);
 return 3;
}
