
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct seq_file {struct super_block* private; } ;
typedef scalar_t__ loff_t ;
typedef scalar_t__ ext4_group_t ;


 scalar_t__ FUNC_0 (struct super_block*) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, loff_t *VAR_1)
{
 struct super_block *VAR_2 = VAR_0->private;
 ext4_group_t VAR_3;

 if (*VAR_1 < 0 || *VAR_1 >= FUNC_0(VAR_2))
  return ((void*)0);
 VAR_3 = *VAR_1 + 1;
 return (void *) ((unsigned long) VAR_3);
}
