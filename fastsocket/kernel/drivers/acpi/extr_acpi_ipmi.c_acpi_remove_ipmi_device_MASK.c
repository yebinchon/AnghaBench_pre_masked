
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ipmi_device {int head; int tx_msg_list; int * user_interface; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct acpi_ipmi_device*) ;
 int FUNC_2 (struct acpi_ipmi_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct acpi_ipmi_device *VAR_0)
{




 if (VAR_0->user_interface) {
  FUNC_0(VAR_0->user_interface);
  VAR_0->user_interface = ((void*)0);
 }

 if (!FUNC_4(&VAR_0->tx_msg_list))
  FUNC_1(VAR_0);

 FUNC_3(&VAR_0->head);
 FUNC_2(VAR_0);
}
