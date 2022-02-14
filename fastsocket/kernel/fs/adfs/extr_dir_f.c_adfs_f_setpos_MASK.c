
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adfs_dir {int pos; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct adfs_dir *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 >= VAR_0)
  return -VAR_1;

 VAR_2->pos = 5 + VAR_3 * 26;
 return 0;
}
