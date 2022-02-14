
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef size_t loff_t ;


 size_t FUNC_0 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_1, void *VAR_2, loff_t *VAR_3)
{
 ++*VAR_3;
 return *VAR_3 < FUNC_0(VAR_0) ? (void *)&VAR_0[*VAR_3] : ((void*)0);
}
