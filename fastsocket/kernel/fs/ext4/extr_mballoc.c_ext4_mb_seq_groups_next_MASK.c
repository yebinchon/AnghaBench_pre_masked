
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct seq_file {struct super_block* private; } ;
typedef scalar_t__ loff_t ;
typedef scalar_t__ ext4_group_t ;


 scalar_t__ FUNC_0 (struct super_block*) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct super_block *VAR_3 = VAR_0->private;
 ext4_group_t VAR_4;

 ++*VAR_2;
 if (*VAR_2 < 0 || *VAR_2 >= FUNC_0(VAR_3))
  return ((void*)0);
 VAR_4 = *VAR_2 + 1;
 return (void *) ((unsigned long) VAR_4);
}
