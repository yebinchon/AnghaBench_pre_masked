
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernel_ipmi_msg {int data_len; int data; int cmd; int netfn; } ;
struct TYPE_2__ {scalar_t__* data; int channel; int addr_type; } ;
struct acpi_ipmi_msg {scalar_t__ tx_msgid; struct acpi_ipmi_device* device; TYPE_1__ addr; int tx_data; struct kernel_ipmi_msg tx_message; } ;
struct acpi_ipmi_device {int tx_msg_lock; scalar_t__ curr_msgid; } ;
struct acpi_ipmi_buffer {int data; int length; } ;
typedef int acpi_physical_address ;
typedef int acpi_integer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct acpi_ipmi_msg *VAR_2,
    acpi_physical_address VAR_3,
    acpi_integer *VAR_4)
{
 struct kernel_ipmi_msg *VAR_5;
 struct acpi_ipmi_buffer *VAR_6;
 struct acpi_ipmi_device *VAR_7;

 VAR_5 = &VAR_2->tx_message;




 VAR_5->netfn = FUNC_1(VAR_3);
 VAR_5->cmd = FUNC_0(VAR_3);
 VAR_5->data = VAR_2->tx_data;




 VAR_6 = (struct acpi_ipmi_buffer *)VAR_4;

 VAR_5->data_len = VAR_6->length;
 FUNC_2(VAR_2->tx_data, VAR_6->data, VAR_5->data_len);







 VAR_2->addr.addr_type = VAR_1;
 VAR_2->addr.channel = VAR_0;
 VAR_2->addr.data[0] = 0;


 VAR_7 = VAR_2->device;
 FUNC_3(&VAR_7->tx_msg_lock);
 VAR_7->curr_msgid++;
 VAR_2->tx_msgid = VAR_7->curr_msgid;
 FUNC_4(&VAR_7->tx_msg_lock);
}
