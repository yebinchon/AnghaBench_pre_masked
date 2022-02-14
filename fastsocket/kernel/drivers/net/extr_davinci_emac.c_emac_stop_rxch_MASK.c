
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct emac_rxch {int teardown_pending; } ;
struct emac_priv {struct emac_rxch** rxch; } ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct emac_priv*,size_t) ;
 int FUNC_2 (int ,size_t) ;

__attribute__((used)) static void FUNC_3(struct emac_priv *VAR_2, u32 VAR_3)
{
 struct emac_rxch *VAR_4 = VAR_2->rxch[VAR_3];

 if (VAR_4) {
  VAR_4->teardown_pending = 1;
  FUNC_2(VAR_1, VAR_3);

  FUNC_1(VAR_2, VAR_3);
  VAR_4->teardown_pending = 0;
  FUNC_2(VAR_0, FUNC_0(VAR_3));
 }
}
