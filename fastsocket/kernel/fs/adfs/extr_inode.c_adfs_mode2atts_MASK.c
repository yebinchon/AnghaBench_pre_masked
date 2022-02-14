
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {int i_mode; } ;
struct adfs_sb_info {int s_owner_mask; int s_other_mask; } ;
struct TYPE_2__ {int attr; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct adfs_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(struct super_block *VAR_7, struct inode *VAR_8)
{
 umode_t VAR_9;
 int VAR_10;
 struct adfs_sb_info *VAR_11 = FUNC_1(VAR_7);


 if (FUNC_3(VAR_8->i_mode))
  return FUNC_0(VAR_8)->attr;

 if (FUNC_2(VAR_8->i_mode))
  VAR_10 = VAR_0;
 else
  VAR_10 = 0;

 VAR_9 = VAR_8->i_mode & VAR_11->s_owner_mask;
 if (VAR_9 & VAR_5)
  VAR_10 |= VAR_1;
 if (VAR_9 & VAR_6)
  VAR_10 |= VAR_2;

 VAR_9 = VAR_8->i_mode & VAR_11->s_other_mask;
 VAR_9 &= ~VAR_11->s_owner_mask;
 if (VAR_9 & VAR_5)
  VAR_10 |= VAR_3;
 if (VAR_9 & VAR_6)
  VAR_10 |= VAR_4;

 return VAR_10;
}
