
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pch_gbe_tx_ring {int tx_lock; int next_to_clean; int next_to_use; } ;
struct pch_gbe_adapter {struct pch_gbe_tx_ring* tx_ring; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pch_gbe_tx_ring*) ;
 struct pch_gbe_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pch_gbe_adapter*,struct pch_gbe_tx_ring*,struct sk_buff*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct pch_gbe_adapter *VAR_5 = FUNC_1(VAR_4);
 struct pch_gbe_tx_ring *VAR_6 = VAR_5->tx_ring;
 unsigned long VAR_7;

 if (!FUNC_5(&VAR_6->tx_lock, VAR_7)) {

  return VAR_1;
 }
 if (FUNC_7(!FUNC_0(VAR_6))) {
  FUNC_2(VAR_4);
  FUNC_6(&VAR_6->tx_lock, VAR_7);
  FUNC_4("Return : BUSY  next_to use : 0x%08x  next_to clean : 0x%08x\n",
    VAR_6->next_to_use, VAR_6->next_to_clean);
  return VAR_0;
 }


 FUNC_3(VAR_5, VAR_6, VAR_3);
 FUNC_6(&VAR_6->tx_lock, VAR_7);
 return VAR_2;
}
