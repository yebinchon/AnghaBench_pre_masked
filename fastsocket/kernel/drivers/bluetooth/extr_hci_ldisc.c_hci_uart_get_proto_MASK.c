
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart_proto {int dummy; } ;


 unsigned int VAR_0 ;
 struct hci_uart_proto** VAR_1 ;

__attribute__((used)) static struct hci_uart_proto *FUNC_0(unsigned int VAR_2)
{
 if (VAR_2 >= VAR_0)
  return ((void*)0);

 return VAR_1[VAR_2];
}
