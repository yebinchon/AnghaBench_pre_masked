
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_link {int bdaddr; struct hci_link* next; } ;
struct bd_addr {int dummy; } ;


 scalar_t__ FUNC_0 (int *,struct bd_addr*) ;
 struct hci_link* VAR_0 ;

struct hci_link* FUNC_1(struct bd_addr *VAR_1)
{
 struct hci_link *VAR_2;

 for(VAR_2=VAR_0;VAR_2!=((void*)0);VAR_2=VAR_2->next) {
  if(FUNC_0(&(VAR_2->bdaddr),VAR_1)) break;
 }
 return VAR_2;
}
