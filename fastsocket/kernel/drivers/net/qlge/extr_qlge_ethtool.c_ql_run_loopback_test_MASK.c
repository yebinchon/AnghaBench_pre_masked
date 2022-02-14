
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ queue_mapping; } ;
struct ql_adapter {int lb_count; int * rx_ring; int ndev; } ;
typedef scalar_t__ netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 struct sk_buff* FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct ql_adapter *VAR_5)
{
 int VAR_6;
 netdev_tx_t VAR_7;
 struct sk_buff *VAR_8;
 unsigned int VAR_9 = VAR_4;

 for (VAR_6 = 0; VAR_6 < 64; VAR_6++) {
  VAR_8 = FUNC_3(VAR_5->ndev, VAR_9);
  if (!VAR_8)
   return -VAR_1;

  VAR_8->queue_mapping = 0;
  FUNC_7(VAR_8, VAR_9);
  FUNC_5(VAR_8, VAR_9);
  VAR_7 = FUNC_6(VAR_8, VAR_5->ndev);
  if (VAR_7 != VAR_3)
   return -VAR_2;
  FUNC_0(&VAR_5->lb_count);
 }

 FUNC_2(2);
 FUNC_4(&VAR_5->rx_ring[0], 128);
 return FUNC_1(&VAR_5->lb_count) ? -VAR_0 : 0;
}
