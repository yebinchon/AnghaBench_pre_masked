
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct afs_cell* private; } ;
struct afs_cell {int vl_sem; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct afs_cell *VAR_2 = VAR_0->private;

 FUNC_0(&VAR_2->vl_sem);
}
