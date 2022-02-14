
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_header {int dummy; } ;
struct buffer_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*,struct ext4_extent_header*,int) ;
 int FUNC_2 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, unsigned int VAR_1,
      struct inode *VAR_2,
      struct ext4_extent_header *VAR_3,
      int VAR_4,
      struct buffer_head *VAR_5)
{
 int VAR_6;

 if (FUNC_0(VAR_5))
  return 0;
 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;
 FUNC_2(VAR_5);
 return VAR_6;
}
