
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;

__attribute__((used)) static void *FUNC_0(struct seq_file *VAR_1, loff_t *VAR_2)
{
 if ((unsigned long long)*VAR_2 >= VAR_0 + 2)
  return ((void*)0);
 if (*VAR_2 == 0)
  *VAR_2 = 1;
 return (void *)(unsigned long) *VAR_2;
}
