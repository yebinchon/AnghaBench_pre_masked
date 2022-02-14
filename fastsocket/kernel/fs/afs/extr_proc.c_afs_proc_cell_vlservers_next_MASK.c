
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct afs_cell* private; } ;
struct afs_cell {size_t vl_naddrs; void* vl_addrs; } ;
typedef size_t loff_t ;


 int FUNC_0 (char*,struct afs_cell*,size_t,size_t) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, void *VAR_1,
       loff_t *VAR_2)
{
 struct afs_cell *VAR_3 = VAR_0->private;
 loff_t VAR_4;

 FUNC_0("cell=%p{nad=%u} pos=%Ld", VAR_3, VAR_3->vl_naddrs, *VAR_2);

 VAR_4 = *VAR_2;
 (*VAR_2)++;
 if (VAR_4 >= VAR_3->vl_naddrs)
  return ((void*)0);

 return &VAR_3->vl_addrs[VAR_4];
}
