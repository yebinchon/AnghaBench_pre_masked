
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc_dir_entry {int * read_proc; void* data; } ;
struct ipmi_proc_entry {struct ipmi_proc_entry* next; struct ipmi_proc_entry* name; } ;
typedef int read_proc_t ;
typedef TYPE_1__* ipmi_smi_t ;
struct TYPE_3__ {int proc_entry_lock; struct ipmi_proc_entry* proc_entries; int proc_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct proc_dir_entry* FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct ipmi_proc_entry*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ipmi_proc_entry*,char*) ;
 int FUNC_6 (char*) ;

int FUNC_7(ipmi_smi_t VAR_2, char *VAR_3,
       read_proc_t *VAR_4,
       void *VAR_5)
{
 int VAR_6 = 0;
 return VAR_6;
}
