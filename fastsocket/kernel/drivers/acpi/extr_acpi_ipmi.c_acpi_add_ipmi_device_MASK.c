
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_ipmi_device {int head; int tx_msg_list; int tx_msg_lock; } ;
struct TYPE_2__ {int ipmi_devices; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct acpi_ipmi_device*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct acpi_ipmi_device *VAR_1)
{

 FUNC_0(&VAR_1->head);

 FUNC_3(&VAR_1->tx_msg_lock);
 FUNC_0(&VAR_1->tx_msg_list);
 FUNC_1(VAR_1);

 FUNC_2(&VAR_1->head, &VAR_0.ipmi_devices);
}
