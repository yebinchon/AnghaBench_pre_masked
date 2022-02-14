
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void *FUNC_0(struct seq_file *VAR_2, void *VAR_3, loff_t *VAR_4)
{
 ++*VAR_4;
 if (*VAR_4 < VAR_0)
  return &VAR_1[*VAR_4];

 return ((void*)0);
}
