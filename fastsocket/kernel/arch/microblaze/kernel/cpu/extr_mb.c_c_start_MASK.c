
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;

__attribute__((used)) static void *FUNC_0(struct seq_file *VAR_1, loff_t *VAR_2)
{
 int VAR_3 = *VAR_2;

 return VAR_3 < VAR_0 ? (void *) (VAR_3 + 1) : ((void*)0);
}
