
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_sb_info {unsigned long s_inode_readahead_blks; } ;
struct ext4_attr {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct ext4_attr *VAR_1,
       struct ext4_sb_info *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;

 if (FUNC_1(VAR_3, 0x40000000, &VAR_5))
  return -VAR_0;

 if (!FUNC_0(VAR_5))
  return -VAR_0;

 VAR_2->s_inode_readahead_blks = VAR_5;
 return VAR_4;
}
