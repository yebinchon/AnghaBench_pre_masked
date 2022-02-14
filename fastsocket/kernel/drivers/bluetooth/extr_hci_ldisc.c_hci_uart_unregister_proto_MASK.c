
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart_proto {size_t id; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int ** VAR_2 ;

int FUNC_0(struct hci_uart_proto *VAR_3)
{
 if (VAR_3->id >= VAR_1)
  return -VAR_0;

 if (!VAR_2[VAR_3->id])
  return -VAR_0;

 VAR_2[VAR_3->id] = ((void*)0);

 return 0;
}
