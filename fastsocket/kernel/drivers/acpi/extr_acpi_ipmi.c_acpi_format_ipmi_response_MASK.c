
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ipmi_msg {int rx_len; int rx_data; int msg_done; } ;
struct acpi_ipmi_buffer {int data; int length; int status; } ;
typedef int acpi_integer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct acpi_ipmi_msg *VAR_3,
  acpi_integer *VAR_4, int VAR_5)
{
 struct acpi_ipmi_buffer *VAR_6;





 VAR_6 = (struct acpi_ipmi_buffer *)VAR_4;
 if (!VAR_5 && !VAR_3->msg_done) {
  VAR_6->status = VAR_1;
  return;
 }





 if (!VAR_3->msg_done || !VAR_3->rx_len) {
  VAR_6->status = VAR_2;
  return;
 }




 VAR_6->status = VAR_0;
 VAR_6->length = VAR_3->rx_len;
 FUNC_0(VAR_6->data, VAR_3->rx_data, VAR_3->rx_len);
}
