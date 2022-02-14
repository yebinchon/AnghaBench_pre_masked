
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
struct afs_cell {char* name; int proc_dir; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct afs_cell*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct proc_dir_entry* FUNC_2 (char*,int ,int ,int *,struct afs_cell*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;

int FUNC_5(struct afs_cell *VAR_5)
{
 struct proc_dir_entry *VAR_6;

 FUNC_0("%p{%s}", VAR_5, VAR_5->name);

 VAR_5->proc_dir = FUNC_3(VAR_5->name, VAR_4);
 if (!VAR_5->proc_dir)
  goto error_dir;

 VAR_6 = FUNC_2("servers", 0, VAR_5->proc_dir,
        &VAR_1, VAR_5);
 if (!VAR_6)
  goto error_servers;

 VAR_6 = FUNC_2("vlservers", 0, VAR_5->proc_dir,
        &VAR_2, VAR_5);
 if (!VAR_6)
  goto error_vlservers;

 VAR_6 = FUNC_2("volumes", 0, VAR_5->proc_dir,
        &VAR_3, VAR_5);
 if (!VAR_6)
  goto error_volumes;

 FUNC_1(" = 0");
 return 0;

error_volumes:
 FUNC_4("vlservers", VAR_5->proc_dir);
error_vlservers:
 FUNC_4("servers", VAR_5->proc_dir);
error_servers:
 FUNC_4(VAR_5->name, VAR_4);
error_dir:
 FUNC_1(" = -ENOMEM");
 return -VAR_0;
}
