
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct emac_txch {struct emac_txch* tx_complete; int * bd_mem; } ;
struct emac_priv {struct emac_txch** txch; } ;


 int FUNC_0 (struct emac_txch*) ;

__attribute__((used)) static void FUNC_1(struct emac_priv *VAR_0, u32 VAR_1)
{
 struct emac_txch *VAR_2 = VAR_0->txch[VAR_1];

 if (VAR_2) {
  if (VAR_2->bd_mem)
   VAR_2->bd_mem = ((void*)0);
  FUNC_0(VAR_2->tx_complete);
  FUNC_0(VAR_2);
  VAR_0->txch[VAR_1] = ((void*)0);
 }
}
