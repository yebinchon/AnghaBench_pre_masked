
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct hci_link {int dummy; } ;
struct bd_addr {int dummy; } ;


 struct hci_link* FUNC_0 (struct bd_addr*) ;

u8_t FUNC_1(struct bd_addr *VAR_0)
{
 struct hci_link *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 if(VAR_1 == ((void*)0)) {
  return 0;
 }
 return 1;
}
