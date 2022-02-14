
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_generation; } ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {int s_inodes_count; } ;


 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct super_block*,scalar_t__) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static struct inode *FUNC_8(struct super_block *VAR_2,
     u64 VAR_3, u32 VAR_4)
{
 struct inode *VAR_5;

 if (VAR_3 < FUNC_2(VAR_2) && VAR_3 != VAR_1)
  return FUNC_1(-VAR_0);
 if (VAR_3 > FUNC_7(FUNC_3(VAR_2)->s_es->s_inodes_count))
  return FUNC_1(-VAR_0);
 VAR_5 = FUNC_5(VAR_2, VAR_3);
 if (FUNC_4(VAR_5))
  return FUNC_0(VAR_5);
 if (VAR_4 && VAR_5->i_generation != VAR_4) {
  FUNC_6(VAR_5);
  return FUNC_1(-VAR_0);
 }

 return VAR_5;
}
