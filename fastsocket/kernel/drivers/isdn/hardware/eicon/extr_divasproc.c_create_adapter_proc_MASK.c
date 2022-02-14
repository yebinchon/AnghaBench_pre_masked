
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc_dir_entry {TYPE_1__* data; int read_proc; int write_proc; } ;
struct TYPE_3__ {void* proc_d_l1_down; void* proc_grp_opt; void* proc_info; void* proc_adapter_dir; int controller; } ;
typedef TYPE_1__ diva_os_xdi_adapter_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 struct proc_dir_entry* FUNC_1 (int ,int,struct proc_dir_entry*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct proc_dir_entry* FUNC_2 (char*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (char*,char*,char*,int ) ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_4(diva_os_xdi_adapter_t * VAR_14)
{
 struct proc_dir_entry *VAR_15, *VAR_16;
 char VAR_17[16];

 FUNC_3(VAR_17, "%s%d", VAR_3, VAR_14->controller);
 if (!(VAR_15 = FUNC_2(VAR_17, VAR_9)))
  return (0);
 VAR_14->proc_adapter_dir = (void *) VAR_15;

 if (!(VAR_16 =
      FUNC_1(VAR_6, VAR_0 | VAR_1 | VAR_2, VAR_15)))
  return (0);
 VAR_14->proc_info = (void *) VAR_16;
 VAR_16->write_proc = VAR_8;
 VAR_16->read_proc = VAR_7;
 VAR_16->data = VAR_14;

 if ((VAR_16 = FUNC_1(VAR_5,
          VAR_0 | VAR_1 | VAR_2, VAR_15))) {
  VAR_14->proc_grp_opt = (void *) VAR_16;
  VAR_16->write_proc = VAR_13;
  VAR_16->read_proc = VAR_11;
  VAR_16->data = VAR_14;
 }
 if ((VAR_16 = FUNC_1(VAR_4,
          VAR_0 | VAR_1 | VAR_2, VAR_15))) {
  VAR_14->proc_d_l1_down = (void *) VAR_16;
  VAR_16->write_proc = VAR_12;
  VAR_16->read_proc = VAR_10;
  VAR_16->data = VAR_14;
 }

 FUNC_0(("proc entry %s created", VAR_17));

 return (1);
}
