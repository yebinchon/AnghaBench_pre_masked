
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct afs_cell* private; } ;
struct afs_cell {int vl_list; } ;
typedef int loff_t ;


 int FUNC_0 (char*,struct afs_cell*,int ) ;
 void* FUNC_1 (void*,int *,int *) ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_0, void *VAR_1,
     loff_t *VAR_2)
{
 struct afs_cell *VAR_3 = VAR_0->private;

 FUNC_0("cell=%p pos=%Ld", VAR_3, *VAR_2);
 return FUNC_1(VAR_1, &VAR_3->vl_list, VAR_2);
}
