
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;

__attribute__((used)) static void *FUNC_0(struct seq_file *VAR_1, void *VAR_2, loff_t *VAR_3)
{
 (*VAR_3)++;
 return (unsigned long long)*VAR_3 > VAR_0 + 2 ?
  ((void*)0) : (void *)(unsigned long) *VAR_3;
}
