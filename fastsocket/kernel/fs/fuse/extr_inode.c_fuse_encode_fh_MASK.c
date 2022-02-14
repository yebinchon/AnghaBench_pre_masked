
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct inode {scalar_t__ i_generation; int i_mode; } ;
struct dentry {int d_lock; TYPE_1__* d_parent; struct inode* d_inode; } ;
struct TYPE_4__ {int nodeid; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_0, u32 *VAR_1, int *VAR_2,
      int VAR_3)
{
 struct inode *VAR_4 = VAR_0->d_inode;
 bool VAR_5 = VAR_3 && !FUNC_0(VAR_4->i_mode);
 int VAR_6 = VAR_5 ? 6 : 3;
 u64 VAR_7;
 u32 VAR_8;

 if (*VAR_2 < VAR_6)
  return 255;

 VAR_7 = FUNC_1(VAR_4)->nodeid;
 VAR_8 = VAR_4->i_generation;

 VAR_1[0] = (u32)(VAR_7 >> 32);
 VAR_1[1] = (u32)(VAR_7 & 0xffffffff);
 VAR_1[2] = VAR_8;

 if (VAR_5) {
  struct inode *VAR_9;

  FUNC_2(&VAR_0->d_lock);
  VAR_9 = VAR_0->d_parent->d_inode;
  VAR_7 = FUNC_1(VAR_9)->nodeid;
  VAR_8 = VAR_9->i_generation;
  FUNC_3(&VAR_0->d_lock);

  VAR_1[3] = (u32)(VAR_7 >> 32);
  VAR_1[4] = (u32)(VAR_7 & 0xffffffff);
  VAR_1[5] = VAR_8;
 }

 *VAR_2 = VAR_6;
 return VAR_5 ? 0x82 : 0x81;
}
