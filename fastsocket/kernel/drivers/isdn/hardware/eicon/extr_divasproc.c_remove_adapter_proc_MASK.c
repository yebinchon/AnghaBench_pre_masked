
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc_dir_entry {int dummy; } ;
struct TYPE_3__ {int controller; scalar_t__ proc_adapter_dir; scalar_t__ proc_info; scalar_t__ proc_grp_opt; scalar_t__ proc_d_l1_down; } ;
typedef TYPE_1__ diva_os_xdi_adapter_t ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 struct proc_dir_entry* VAR_4 ;
 int FUNC_1 (char*,struct proc_dir_entry*) ;
 int FUNC_2 (char*,char*,char*,int ) ;

void FUNC_3(diva_os_xdi_adapter_t * VAR_5)
{
 char VAR_6[16];

 if (VAR_5->proc_adapter_dir) {
  if (VAR_5->proc_d_l1_down) {
   FUNC_1(VAR_1,
       (struct proc_dir_entry *) VAR_5->proc_adapter_dir);
  }
  if (VAR_5->proc_grp_opt) {
   FUNC_1(VAR_2,
       (struct proc_dir_entry *) VAR_5->proc_adapter_dir);
  }
  if (VAR_5->proc_info) {
   FUNC_1(VAR_3,
       (struct proc_dir_entry *) VAR_5->proc_adapter_dir);
  }
  FUNC_2(VAR_6, "%s%d", VAR_0, VAR_5->controller);
  FUNC_1(VAR_6, VAR_4);
  FUNC_0(("proc entry %s%d removed", VAR_0,
    VAR_5->controller));
 }
}
