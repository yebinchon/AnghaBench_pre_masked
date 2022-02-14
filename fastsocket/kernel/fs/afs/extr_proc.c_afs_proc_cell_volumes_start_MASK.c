
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct afs_cell* private; } ;
struct afs_cell {int vl_list; int vl_sem; } ;
typedef int loff_t ;


 int FUNC_0 (char*,struct afs_cell*,int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,int ) ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_0, loff_t *VAR_1)
{
 struct afs_cell *VAR_2 = VAR_0->private;

 FUNC_0("cell=%p pos=%Ld", VAR_2, *VAR_1);


 FUNC_1(&VAR_2->vl_sem);
 return FUNC_2(&VAR_2->vl_list, *VAR_1);
}
