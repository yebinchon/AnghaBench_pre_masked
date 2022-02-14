
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_cell {char* name; int proc_dir; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;

void FUNC_3(struct afs_cell *VAR_1)
{
 FUNC_0("");

 FUNC_2("volumes", VAR_1->proc_dir);
 FUNC_2("vlservers", VAR_1->proc_dir);
 FUNC_2("servers", VAR_1->proc_dir);
 FUNC_2(VAR_1->name, VAR_0);

 FUNC_1("");
}
