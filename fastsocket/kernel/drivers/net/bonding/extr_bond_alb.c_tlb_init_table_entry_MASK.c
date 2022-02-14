
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlb_client_info {int load_history; int tx_bytes; void* prev; void* next; int * tx_slave; } ;


 int VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct tlb_client_info *VAR_2, int VAR_3)
{
 if (VAR_3) {
  VAR_2->load_history = 1 + VAR_2->tx_bytes /
          VAR_0;
  VAR_2->tx_bytes = 0;
 }

 VAR_2->tx_slave = ((void*)0);
 VAR_2->next = VAR_1;
 VAR_2->prev = VAR_1;
}
