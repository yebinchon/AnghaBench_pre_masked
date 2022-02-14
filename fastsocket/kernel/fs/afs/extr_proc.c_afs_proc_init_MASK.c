
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 struct proc_dir_entry* FUNC_2 (char*,int ,int *,int *) ;
 int * FUNC_3 (char*,int *) ;
 int FUNC_4 (char*,int *) ;

int FUNC_5(void)
{
 struct proc_dir_entry *VAR_4;

 FUNC_0("");

 VAR_3 = FUNC_3("fs/afs", ((void*)0));
 if (!VAR_3)
  goto error_dir;

 VAR_4 = FUNC_2("cells", 0, VAR_3, &VAR_1);
 if (!VAR_4)
  goto error_cells;

 VAR_4 = FUNC_2("rootcell", 0, VAR_3, &VAR_2);
 if (!VAR_4)
  goto error_rootcell;

 FUNC_1(" = 0");
 return 0;

error_rootcell:
  FUNC_4("cells", VAR_3);
error_cells:
 FUNC_4("fs/afs", ((void*)0));
error_dir:
 FUNC_1(" = -ENOMEM");
 return -VAR_0;
}
