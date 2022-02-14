
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_sb_info {int dummy; } ;
struct ext4_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct ext4_sb_info*,unsigned long long) ;
 scalar_t__ FUNC_1 (char const*,unsigned long long,unsigned long long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct ext4_attr *VAR_1,
       struct ext4_sb_info *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 unsigned long long VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_3, -1ULL, &VAR_5))
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_2, VAR_5);

 return VAR_6 ? VAR_6 : VAR_4;
}
