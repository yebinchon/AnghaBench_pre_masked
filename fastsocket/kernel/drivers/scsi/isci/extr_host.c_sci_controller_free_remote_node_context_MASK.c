
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct isci_remote_device {int dummy; } ;
struct isci_host {int available_remote_nodes; struct isci_remote_device** device_table; } ;


 int FUNC_0 (struct isci_remote_device*) ;
 int FUNC_1 (int *,int ,size_t) ;

void FUNC_2(struct isci_host *VAR_0,
          struct isci_remote_device *VAR_1,
          u16 VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1);

 if (VAR_0->device_table[VAR_2] == VAR_1) {
  VAR_0->device_table[VAR_2] = ((void*)0);

  FUNC_1(
   &VAR_0->available_remote_nodes, VAR_3, VAR_2
   );
 }
}
