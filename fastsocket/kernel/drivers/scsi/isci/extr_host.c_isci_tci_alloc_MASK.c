
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct isci_host {int tci_head; size_t* tci_pool; } ;


 int VAR_0 ;

__attribute__((used)) static u16 FUNC_0(struct isci_host *VAR_1)
{
 u16 VAR_2 = VAR_1->tci_head & (VAR_0-1);
 u16 VAR_3 = VAR_1->tci_pool[VAR_2];

 VAR_1->tci_head = VAR_2 + 1;
 return VAR_3;
}
