
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_sb_info {int s_resv_blocks; } ;
struct ext4_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_2(struct ext4_attr *VAR_1,
      struct ext4_sb_info *VAR_2, char *VAR_3)
{
 return FUNC_1(VAR_3, VAR_0, "%llu\n",
  (unsigned long long) FUNC_0(&VAR_2->s_resv_blocks));
}
