
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_sb_info {int dummy; } ;
struct ext4_attr {int offset; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_1(struct ext4_attr *VAR_1,
       struct ext4_sb_info *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 unsigned int *VAR_5 = (unsigned int *) (((char *) VAR_2) + VAR_1->offset);
 unsigned long VAR_6;

 if (FUNC_0(VAR_3, 0xffffffff, &VAR_6))
  return -VAR_0;
 *VAR_5 = VAR_6;
 return VAR_4;
}
