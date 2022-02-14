
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_sb_info {int dummy; } ;
struct ext4_attr {int offset; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_1(struct ext4_attr *VAR_1,
      struct ext4_sb_info *VAR_2, char *VAR_3)
{
 unsigned int *VAR_4 = (unsigned int *) (((char *) VAR_2) + VAR_1->offset);

 return FUNC_0(VAR_3, VAR_0, "%u\n", *VAR_4);
}
