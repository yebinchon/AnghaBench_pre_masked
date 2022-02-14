
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_tx_le {int opcode; scalar_t__ addr; } ;
struct sky2_port {scalar_t__ tx_last_upper; scalar_t__ tx_prod; scalar_t__ tx_last_mss; scalar_t__ tx_tcpsum; scalar_t__ tx_cons; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sky2_tx_le* FUNC_0 (struct sky2_port*,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct sky2_port *VAR_2)
{
 struct sky2_tx_le *VAR_3;

 VAR_2->tx_prod = VAR_2->tx_cons = 0;
 VAR_2->tx_tcpsum = 0;
 VAR_2->tx_last_mss = 0;

 VAR_3 = FUNC_0(VAR_2, &VAR_2->tx_prod);
 VAR_3->addr = 0;
 VAR_3->opcode = VAR_1 | VAR_0;
 VAR_2->tx_last_upper = 0;
}
