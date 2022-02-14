
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_ipmi_msg {int head; int tx_complete; int tx_message; int tx_msgid; int addr; } ;
struct acpi_ipmi_device {int tx_msg_lock; int user_interface; int tx_msg_list; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;
typedef int acpi_integer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct acpi_ipmi_msg* FUNC_0 (struct acpi_ipmi_device*) ;
 int FUNC_1 (struct acpi_ipmi_msg*,int ,int *) ;
 int FUNC_2 (struct acpi_ipmi_msg*,int *,int) ;
 int FUNC_3 (int ,int *,int ,int *,int *,int ,int ,int ) ;
 int FUNC_4 (struct acpi_ipmi_msg*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static acpi_status
FUNC_10(u32 VAR_8, acpi_physical_address VAR_9,
        u32 VAR_10, acpi_integer *VAR_11,
        void *VAR_12, void *VAR_13)
{
 struct acpi_ipmi_msg *VAR_14;
 struct acpi_ipmi_device *VAR_15 = VAR_12;
 int VAR_16, VAR_17;
 acpi_status VAR_18;






 if ((VAR_8 & VAR_0) == VAR_1)
  return VAR_6;

 if (!VAR_15->user_interface)
  return VAR_3;

 VAR_14 = FUNC_0(VAR_15);
 if (!VAR_14)
  return VAR_4;

 FUNC_1(VAR_14, VAR_9, VAR_11);
 FUNC_7(&VAR_15->tx_msg_lock);
 FUNC_5(&VAR_14->head, &VAR_15->tx_msg_list);
 FUNC_8(&VAR_15->tx_msg_lock);
 VAR_16 = FUNC_3(VAR_15->user_interface,
     &VAR_14->addr,
     VAR_14->tx_msgid,
     &VAR_14->tx_message,
     ((void*)0), 0, 0, 0);
 if (VAR_16) {
  VAR_18 = VAR_2;
  goto end_label;
 }
 VAR_17 = FUNC_9(&VAR_14->tx_complete,
     VAR_7);
 FUNC_2(VAR_14, VAR_11, VAR_17);
 VAR_18 = VAR_5;

end_label:
 FUNC_7(&VAR_15->tx_msg_lock);
 FUNC_6(&VAR_14->head);
 FUNC_8(&VAR_15->tx_msg_lock);
 FUNC_4(VAR_14);
 return VAR_18;
}
