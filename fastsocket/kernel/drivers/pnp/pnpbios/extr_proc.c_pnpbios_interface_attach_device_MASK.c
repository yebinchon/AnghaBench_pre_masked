
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {void* data; void* write_proc; void* read_proc; } ;
struct pnp_bios_node {int handle; } ;


 int VAR_0 ;
 struct proc_dir_entry* FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (char*,char*,int) ;

int FUNC_2(struct pnp_bios_node *VAR_6)
{
 char VAR_7[3];
 struct proc_dir_entry *VAR_8;

 FUNC_1(VAR_7, "%02x", VAR_6->handle);

 if (!VAR_2)
  return -VAR_0;
 if (!VAR_1) {
  VAR_8 = FUNC_0(VAR_7, 0, VAR_2);
  if (VAR_8) {
   VAR_8->read_proc = VAR_4;
   VAR_8->write_proc = VAR_5;
   VAR_8->data = (void *)(long)(VAR_6->handle);
  }
 }

 if (!VAR_3)
  return -VAR_0;
 VAR_8 = FUNC_0(VAR_7, 0, VAR_3);
 if (VAR_8) {
  VAR_8->read_proc = VAR_4;
  VAR_8->write_proc = VAR_5;
  VAR_8->data = (void *)(long)(VAR_6->handle + 0x100);
  return 0;
 }

 return -VAR_0;
}
