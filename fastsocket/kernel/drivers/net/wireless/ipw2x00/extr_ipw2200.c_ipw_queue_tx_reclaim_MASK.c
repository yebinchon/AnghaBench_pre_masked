
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ipw_priv {int net_dev; int tx_packets; } ;
struct clx2_queue {scalar_t__ n_bd; scalar_t__ last_used; scalar_t__ low_mark; int first_empty; int reg_r; } ;
struct clx2_tx_queue {struct clx2_queue q; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ipw_priv*,struct clx2_tx_queue*) ;
 scalar_t__ FUNC_3 (struct ipw_priv*,int ) ;
 scalar_t__ FUNC_4 (struct clx2_queue*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ipw_priv *VAR_0,
    struct clx2_tx_queue *VAR_1, int VAR_2)
{
 u32 VAR_3;
 int VAR_4;
 struct clx2_queue *VAR_5 = &VAR_1->q;

 VAR_3 = FUNC_3(VAR_0, VAR_5->reg_r);
 if (VAR_3 >= VAR_5->n_bd) {
  FUNC_0
      ("Read index for DMA queue (%d) is out of range [0-%d)\n",
       VAR_3, VAR_5->n_bd);
  goto done;
 }
 for (; VAR_5->last_used != VAR_3;
      VAR_5->last_used = FUNC_1(VAR_5->last_used, VAR_5->n_bd)) {
  FUNC_2(VAR_0, VAR_1);
  VAR_0->tx_packets++;
 }
      done:
 if ((FUNC_4(VAR_5) > VAR_5->low_mark) &&
     (VAR_2 >= 0))
  FUNC_5(VAR_0->net_dev);
 VAR_4 = VAR_5->first_empty - VAR_5->last_used;
 if (VAR_4 < 0)
  VAR_4 += VAR_5->n_bd;

 return VAR_4;
}
