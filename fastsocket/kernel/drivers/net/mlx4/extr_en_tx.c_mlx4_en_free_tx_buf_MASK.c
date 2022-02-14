
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_tx_ring {int cons; int last_nr_txbb; int prod; int size; int size_mask; } ;
struct mlx4_en_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int,...) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 int FUNC_2 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*,int,int,int ) ;
 struct mlx4_en_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct mlx4_en_priv*) ;

int FUNC_5(struct net_device *VAR_1, struct mlx4_en_tx_ring *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 0;


 VAR_2->cons += VAR_2->last_nr_txbb;
 FUNC_0(VAR_0, VAR_3, "Freeing Tx buf - cons:0x%x prod:0x%x\n",
   VAR_2->cons, VAR_2->prod);

 if ((u32) (VAR_2->prod - VAR_2->cons) > VAR_2->size) {
  if (FUNC_4(VAR_3))
   FUNC_1(VAR_3, "Tx consumer passed producer!\n");
  return 0;
 }

 while (VAR_2->cons != VAR_2->prod) {
  VAR_2->last_nr_txbb = FUNC_2(VAR_3, VAR_2,
      VAR_2->cons & VAR_2->size_mask,
      !!(VAR_2->cons & VAR_2->size), 0);
  VAR_2->cons += VAR_2->last_nr_txbb;
  VAR_4++;
 }

 if (VAR_4)
  FUNC_0(VAR_0, VAR_3, "Freed %d uncompleted tx descriptors\n", VAR_4);

 return VAR_4;
}
