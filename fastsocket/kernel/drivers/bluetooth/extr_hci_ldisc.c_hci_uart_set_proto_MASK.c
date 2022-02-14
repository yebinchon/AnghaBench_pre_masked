
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart_proto {int (* open ) (struct hci_uart*) ;int (* close ) (struct hci_uart*) ;} ;
struct hci_uart {struct hci_uart_proto* proto; } ;


 int VAR_0 ;
 struct hci_uart_proto* FUNC_0 (int) ;
 int FUNC_1 (struct hci_uart*) ;
 int FUNC_2 (struct hci_uart*) ;
 int FUNC_3 (struct hci_uart*) ;

__attribute__((used)) static int FUNC_4(struct hci_uart *VAR_1, int VAR_2)
{
 struct hci_uart_proto *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = VAR_3->open(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_1->proto = VAR_3;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4) {
  VAR_3->close(VAR_1);
  return VAR_4;
 }

 return 0;
}
