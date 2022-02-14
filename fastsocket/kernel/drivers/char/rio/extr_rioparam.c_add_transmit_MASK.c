
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Port {scalar_t__ TxAdd; scalar_t__ TxEnd; TYPE_1__* PhbP; int Caddr; int * TxStart; } ;
struct TYPE_2__ {int tx_add; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,int *) ;

void FUNC_4(struct Port *VAR_2)
{
 if (FUNC_1(VAR_2->TxAdd) & VAR_0) {
  FUNC_2(VAR_1, "add_transmit: Packet has been stolen!");
 }
 FUNC_3(FUNC_1(VAR_2->TxAdd) | VAR_0, VAR_2->TxAdd);
 VAR_2->TxAdd = (VAR_2->TxAdd == VAR_2->TxEnd) ? VAR_2->TxStart : VAR_2->TxAdd + 1;
 FUNC_3(FUNC_0(VAR_2->Caddr, VAR_2->TxAdd), &VAR_2->PhbP->tx_add);
}
