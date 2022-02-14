
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct afs_cell* private; } ;
struct afs_cell {size_t vl_naddrs; void* vl_addrs; int vl_sem; } ;
typedef size_t loff_t ;


 int FUNC_0 (char*,struct afs_cell*,size_t) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_0, loff_t *VAR_1)
{
 struct afs_cell *VAR_2 = VAR_0->private;
 loff_t VAR_3 = *VAR_1;

 FUNC_0("cell=%p pos=%Ld", VAR_2, *VAR_1);


 FUNC_1(&VAR_2->vl_sem);


 if (!VAR_3)
  return (void *) 1;
 VAR_3--;

 if (VAR_3 >= VAR_2->vl_naddrs)
  return ((void*)0);

 return &VAR_2->vl_addrs[VAR_3];
}
